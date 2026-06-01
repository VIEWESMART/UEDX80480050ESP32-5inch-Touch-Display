/**
 * @file color_test.c
 */

#include "color_test.h"

#include <stdbool.h>

/* 晚于 LVGL 双击判定窗口（默认 long_press_time 400ms），避免误把双击拆成两次单击 */
#define COLOR_TEST_SINGLE_DEFER_MS    450
#define COLOR_TEST_AUTO_INTERVAL_MS   1500

typedef enum {
    PAT_SOLID = 0,
    PAT_BARS  = 1,
} color_pattern_kind_t;

typedef struct {
    color_pattern_kind_t kind;
    uint32_t             color_hex; /* PAT_SOLID 时使用 */
} color_pattern_t;

static lv_obj_t *s_widgets_scr;
static lv_obj_t *s_color_scr;
static lv_obj_t *s_bar_strip;
static lv_obj_t *s_bar_seg[5];
static lv_timer_t *s_auto_timer;
static lv_timer_t *s_defer_timer;

static bool s_showing_color;
static bool s_auto_playing;
static int s_color_idx;

/* 顺序：红、绿、蓝、黑、白 纯色，最后一项为 红绿蓝黑白 竖条 */
static const color_pattern_t s_patterns[] = {
    { PAT_SOLID, 0xFF0000 },
    { PAT_SOLID, 0x00FF00 },
    { PAT_SOLID, 0x0000FF },
    { PAT_SOLID, 0x000000 },
    { PAT_SOLID, 0xFFFFFF },
    { PAT_BARS,  0 },
};

/* 色条从左到右：红、绿、蓝、黑、白 */
static const uint32_t s_bar_colors[] = {
    0xFF0000,
    0x00FF00,
    0x0000FF,
    0x000000,
    0xFFFFFF,
};

#define NUM_PATTERNS ((int)(sizeof(s_patterns) / sizeof(s_patterns[0])))

static void apply_pattern(void)
{
    const color_pattern_t *p = &s_patterns[s_color_idx];

    if (p->kind == PAT_BARS) {
        lv_obj_clear_flag(s_bar_strip, LV_OBJ_FLAG_HIDDEN);
        for (int i = 0; i < 5; i++) {
            lv_obj_set_style_bg_color(s_bar_seg[i], lv_color_hex(s_bar_colors[i]), 0);
            lv_obj_set_style_bg_opa(s_bar_seg[i], LV_OPA_COVER, 0);
        }
        lv_obj_set_style_bg_opa(s_color_scr, LV_OPA_TRANSP, 0);
    } else {
        lv_obj_add_flag(s_bar_strip, LV_OBJ_FLAG_HIDDEN);
        lv_color_t c = lv_color_hex(p->color_hex);
        lv_obj_set_style_bg_color(s_color_scr, c, 0);
        lv_obj_set_style_bg_opa(s_color_scr, LV_OPA_COVER, 0);
    }
}

static void auto_cycle_cb(lv_timer_t *timer)
{
    (void)timer;
    if (!s_showing_color || !s_auto_playing) {
        return;
    }
    s_color_idx = (s_color_idx + 1) % NUM_PATTERNS;
    apply_pattern();
}

static void defer_single_cb(lv_timer_t *timer)
{
    (void)timer;
    s_defer_timer = NULL;
    if (!s_showing_color) {
        return;
    }
    if (s_auto_playing) {
        s_auto_playing = false;
    } else {
        s_color_idx = (s_color_idx + 1) % NUM_PATTERNS;
        apply_pattern();
    }
}

#if HW_USE_TOUCH
static void color_scr_touch_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);

    if (code == LV_EVENT_DOUBLE_CLICKED) {
        if (s_defer_timer) {
            lv_timer_del(s_defer_timer);
            s_defer_timer = NULL;
        }
        s_auto_playing = true;
        return;
    }

    if (code == LV_EVENT_SINGLE_CLICKED) {
        if (s_defer_timer) {
            lv_timer_del(s_defer_timer);
            s_defer_timer = NULL;
        }
        s_defer_timer = lv_timer_create(defer_single_cb, COLOR_TEST_SINGLE_DEFER_MS, NULL);
        lv_timer_set_repeat_count(s_defer_timer, 1);
    }
}
#endif

void color_test_init(lv_obj_t *widgets_screen)
{
    s_widgets_scr = widgets_screen;

    lv_display_t *disp = lv_display_get_default();
    int32_t w = lv_display_get_horizontal_resolution(disp);
    int32_t h = lv_display_get_vertical_resolution(disp);

    s_color_scr = lv_obj_create(NULL);
    lv_obj_set_size(s_color_scr, w, h);
    lv_obj_add_flag(s_color_scr, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_clear_flag(s_color_scr, LV_OBJ_FLAG_SCROLLABLE);

    s_bar_strip = lv_obj_create(s_color_scr);
    lv_obj_set_size(s_bar_strip, LV_PCT(100), LV_PCT(100));
    lv_obj_set_style_pad_all(s_bar_strip, 0, 0);
    lv_obj_set_style_border_width(s_bar_strip, 0, 0);
    lv_obj_set_style_radius(s_bar_strip, 0, 0);
    lv_obj_clear_flag(s_bar_strip, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_clear_flag(s_bar_strip, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_flex_flow(s_bar_strip, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(s_bar_strip, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);

    for (int i = 0; i < 5; i++) {
        s_bar_seg[i] = lv_obj_create(s_bar_strip);
        lv_obj_set_height(s_bar_seg[i], LV_PCT(100));
        lv_obj_set_style_pad_all(s_bar_seg[i], 0, 0);
        lv_obj_set_style_border_width(s_bar_seg[i], 0, 0);
        lv_obj_set_style_radius(s_bar_seg[i], 0, 0);
        lv_obj_clear_flag(s_bar_seg[i], LV_OBJ_FLAG_SCROLLABLE);
        lv_obj_clear_flag(s_bar_seg[i], LV_OBJ_FLAG_CLICKABLE);
        lv_obj_set_flex_grow(s_bar_seg[i], 1);
    }

    s_color_idx = 0;
    apply_pattern();

#if HW_USE_TOUCH
    lv_obj_add_event_cb(s_color_scr, color_scr_touch_cb, LV_EVENT_SINGLE_CLICKED, NULL);
    lv_obj_add_event_cb(s_color_scr, color_scr_touch_cb, LV_EVENT_DOUBLE_CLICKED, NULL);
#endif

    s_auto_timer = lv_timer_create(auto_cycle_cb, COLOR_TEST_AUTO_INTERVAL_MS, NULL);
    lv_timer_pause(s_auto_timer);

    s_showing_color = false;
    s_auto_playing = true;
}

void color_test_toggle(void)
{
    if (s_color_scr == NULL || s_widgets_scr == NULL) {
        return;
    }

    if (s_showing_color) {
        if (s_defer_timer) {
            lv_timer_del(s_defer_timer);
            s_defer_timer = NULL;
        }
        lv_timer_pause(s_auto_timer);
        lv_scr_load(s_widgets_scr);
        s_showing_color = false;
    } else {
        s_color_idx = 0;
        apply_pattern();
        s_auto_playing = true;
        lv_scr_load(s_color_scr);
        lv_timer_resume(s_auto_timer);
        s_showing_color = true;
    }
}
