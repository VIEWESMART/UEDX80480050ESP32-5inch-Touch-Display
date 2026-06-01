/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"


typedef struct
{
  
	lv_obj_t *Home;
	bool Home_del;
	lv_obj_t *Home_cont_dev_control;
	lv_obj_t *Home_label_dev;
	lv_obj_t *Home_label_air_control;
	lv_obj_t *Home_label_light_control;
	lv_obj_t *Home_img_air;
	lv_obj_t *Home_img_fan;
	lv_obj_t *Home_label_electricity_usage;
	lv_obj_t *Home_label_1F;
	lv_obj_t *Home_label_1F_usage;
	lv_obj_t *Home_bar_1F;
	lv_obj_t *Home_bar_2F;
	lv_obj_t *Home_label_2F;
	lv_obj_t *Home_label_2F_usage;
	lv_obj_t *Home_bar_3F;
	lv_obj_t *Home_label_3F;
	lv_obj_t *Home_label_3F_usage;
	lv_obj_t *Home_img_light;
	lv_obj_t *Home_label_light;
	lv_obj_t *Home_label_17;
	lv_obj_t *Home_sw_air;
	lv_obj_t *Home_img_snow;
	lv_obj_t *Home_img_snow_1;
	lv_obj_t *Home_img_snow_2;
	lv_obj_t *Home_sw_light;
	lv_obj_t *Home_cont_1;
	lv_obj_t *Home_line_1;
	lv_obj_t *Home_label_20;
	lv_obj_t *Home_label_21;
	lv_obj_t *Home_label_22;
	lv_obj_t *Home_label_23;
	lv_obj_t *Home_label_24;
	lv_obj_t *Home_label_25;
	lv_obj_t *Home_cont_temp;
	lv_obj_t *Home_label_temp_tit;
	lv_obj_t *Home_arc_temp;
	lv_obj_t *Home_arc_humi;
	lv_obj_t *Home_label_temp_con;
	lv_obj_t *Home_label_temp_val;
	lv_obj_t *Home_label_wet_val;
	lv_obj_t *Home_label_wet_con;
	lv_obj_t *Home_img_temp;
	lv_obj_t *Home_img_1;
	lv_obj_t *Home_label_15;
	lv_obj_t *Home_label_16;
	lv_obj_t *Home_cont_electricity;
	lv_obj_t *Home_label_8;
	lv_obj_t *Home_img_3;
	lv_obj_t *Home_img_4;
	lv_obj_t *Home_img_5;
	lv_obj_t *Home_label_7;
	lv_obj_t *Home_label_ele_1;
	lv_obj_t *Home_label_ele_2;
	lv_obj_t *Home_label_4;
	lv_obj_t *Home_label_9;
	lv_obj_t *Home_label_ele_3;
	lv_obj_t *Home_label_12;
	lv_obj_t *Home_label_13;
	lv_obj_t *Home_label_14;
	lv_obj_t *Home_label_home_title;
	lv_obj_t *Home_btn_menu;
	lv_obj_t *Home_btn_menu_label;
	lv_obj_t *Home_datetext_date;
	lv_obj_t *Home_digital_clock_time;
	lv_obj_t *Home_cont_menu;
	lv_obj_t *Home_img_6;
	lv_obj_t *Home_btn_7;
	lv_obj_t *Home_btn_7_label;
	lv_obj_t *Home_btn_6;
	lv_obj_t *Home_btn_6_label;
	lv_obj_t *Home_btn_5;
	lv_obj_t *Home_btn_5_label;
	lv_obj_t *Home_btn_4;
	lv_obj_t *Home_btn_4_label;
	lv_obj_t *Home_btn_3;
	lv_obj_t *Home_btn_3_label;
	lv_obj_t *Home_btn_2;
	lv_obj_t *Home_btn_2_label;
	lv_obj_t *Home_btn_1;
	lv_obj_t *Home_btn_1_label;
	lv_obj_t *Home_label_19;
	lv_obj_t *Firefighting;
	bool Firefighting_del;
	lv_obj_t *Firefighting_cont_smoke;
	lv_obj_t *Firefighting_label_smoke_tit;
	lv_obj_t *Firefighting_label_status;
	lv_obj_t *Firefighting_led_status;
	lv_obj_t *Firefighting_img_smoke;
	lv_obj_t *Firefighting_label_desc;
	lv_obj_t *Firefighting_line_1;
	lv_obj_t *Firefighting_label_warning;
	lv_obj_t *Firefighting_label_warning_tit;
	lv_obj_t *Firefighting_label_alert_tit;
	lv_obj_t *Firefighting_label_alert;
	lv_obj_t *Firefighting_cont_temp;
	lv_obj_t *Firefighting_label_7;
	lv_obj_t *Firefighting_label_6;
	lv_obj_t *Firefighting_led_1;
	lv_obj_t *Firefighting_img_1;
	lv_obj_t *Firefighting_label_5;
	lv_obj_t *Firefighting_line_2;
	lv_obj_t *Firefighting_label_heigh;
	lv_obj_t *Firefighting_label_3;
	lv_obj_t *Firefighting_label_2;
	lv_obj_t *Firefighting_label_low;
	lv_obj_t *Firefighting_cont_1;
	lv_obj_t *Firefighting_label_security;
	lv_obj_t *Firefighting_label_temp_alert;
	lv_obj_t *Firefighting_bar_temp;
	lv_obj_t *Firefighting_bar_smoke;
	lv_obj_t *Firefighting_label_8;
	lv_obj_t *Firefighting_label_9;
	lv_obj_t *Firefighting_bar_alert;
	lv_obj_t *Firefighting_bar_other;
	lv_obj_t *Firefighting_label_10;
	lv_obj_t *Firefighting_label_11;
	lv_obj_t *Firefighting_chart_power;
	lv_chart_series_t *Firefighting_chart_power_0;
	lv_chart_series_t *Firefighting_chart_power_1;
	lv_chart_series_t *Firefighting_chart_power_2;
	lv_obj_t *Firefighting_btn_home;
	lv_obj_t *Firefighting_btn_home_label;
	lv_obj_t *Firefighting_label_title;
	lv_obj_t *Firefighting_digital_clock_time;
	lv_obj_t *Firefighting_datetext_date;
	lv_obj_t *Electricity;
	bool Electricity_del;
	lv_obj_t *Electricity_btn_home;
	lv_obj_t *Electricity_btn_home_label;
	lv_obj_t *Electricity_label_tit;
	lv_obj_t *Electricity_cont_1;
	lv_obj_t *Electricity_label_1;
	lv_obj_t *Electricity_label_2;
	lv_obj_t *Electricity_cont_2;
	lv_obj_t *Electricity_label_4;
	lv_obj_t *Electricity_label_3;
	lv_obj_t *Electricity_cont_3;
	lv_obj_t *Electricity_label_6;
	lv_obj_t *Electricity_label_5;
	lv_obj_t *Electricity_cont_4;
	lv_obj_t *Electricity_label_8;
	lv_obj_t *Electricity_label_7;
	lv_obj_t *Electricity_cont_5;
	lv_obj_t *Electricity_label_10;
	lv_obj_t *Electricity_label_9;
	lv_obj_t *Electricity_digital_clock_time;
	lv_obj_t *Electricity_datetext_date;
	lv_obj_t *Electricity_cont_info_box;
	lv_obj_t *Electricity_cont_info;
	lv_obj_t *Electricity_label_23;
	lv_obj_t *Electricity_cont_13;
	lv_obj_t *Electricity_label_33;
	lv_obj_t *Electricity_arc_2;
	lv_obj_t *Electricity_label_32;
	lv_obj_t *Electricity_label_31;
	lv_obj_t *Electricity_img_2;
	lv_obj_t *Electricity_label_28;
	lv_obj_t *Electricity_label_34;
	lv_obj_t *Electricity_label_35;
	lv_obj_t *Electricity_label_37;
	lv_obj_t *Electricity_label_36;
	lv_obj_t *Electricity_cont_14;
	lv_obj_t *Electricity_label_45;
	lv_obj_t *Electricity_arc_3;
	lv_obj_t *Electricity_label_44;
	lv_obj_t *Electricity_label_43;
	lv_obj_t *Electricity_img_3;
	lv_obj_t *Electricity_label_42;
	lv_obj_t *Electricity_label_41;
	lv_obj_t *Electricity_label_40;
	lv_obj_t *Electricity_label_39;
	lv_obj_t *Electricity_label_38;
	lv_obj_t *Electricity_cont_15;
	lv_obj_t *Electricity_label_53;
	lv_obj_t *Electricity_arc_4;
	lv_obj_t *Electricity_label_52;
	lv_obj_t *Electricity_label_51;
	lv_obj_t *Electricity_img_4;
	lv_obj_t *Electricity_label_50;
	lv_obj_t *Electricity_label_49;
	lv_obj_t *Electricity_label_48;
	lv_obj_t *Electricity_label_47;
	lv_obj_t *Electricity_label_46;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_screen_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, uint32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                  uint32_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                  lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_completed_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

/* SquareLine (LVGL 8) passes (var, exec_cb); LVGL 9 needs lv_anim_t *. */
static inline void ui_anim_pause(void * var, lv_anim_exec_xcb_t exec_cb)
{
    lv_anim_t * a = lv_anim_get(var, exec_cb);
    if(a) lv_anim_pause(a);
}

static inline void ui_anim_resume(void * var, lv_anim_exec_xcb_t exec_cb)
{
    lv_anim_t * a = lv_anim_get(var, exec_cb);
    if(a) lv_anim_resume(a);
}

void init_scr_del_flag(lv_ui *ui);

void setup_bottom_layer(void);

void setup_ui(lv_ui *ui);

void video_play(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_Home(lv_ui *ui);
void setup_scr_Firefighting(lv_ui *ui);
void setup_scr_Electricity(lv_ui *ui);

LV_IMAGE_DECLARE(_sub_page_bak_RGB565A8_800x480);
LV_IMAGE_DECLARE(_air_RGB565A8_134x57);
LV_IMAGE_DECLARE(_air_fan_RGB565A8_36x38);
LV_IMAGE_DECLARE(_menu_light_RGB565A8_70x69);
LV_IMAGE_DECLARE(_air_snow_RGB565A8_20x20);
LV_IMAGE_DECLARE(_air_snow_RGB565A8_16x16);
LV_IMAGE_DECLARE(_air_snow_RGB565A8_12x12);
LV_IMAGE_DECLARE(_temp_RGB565A8_43x43);
LV_IMAGE_DECLARE(_Humidity_RGB565A8_33x36);
LV_IMAGE_DECLARE(_menu_icon_bak_RGB565A8_90x90);

LV_IMAGE_DECLARE(_home_bak_RGB565A8_45x84);

LV_IMAGE_DECLARE(_menu_bak_RGB565A8_800x480);
LV_IMAGE_DECLARE(_menu_bal_RGB565A8_320x320);

LV_IMAGE_DECLARE(_menu_air_RGB565A8_90x90);

LV_IMAGE_DECLARE(_menu_anfang_RGB565A8_90x90);

LV_IMAGE_DECLARE(_menu_elevator_RGB565A8_90x90);

LV_IMAGE_DECLARE(_menu_tem_RGB565A8_90x90);

LV_IMAGE_DECLARE(_menu_xiaofang_RGB565A8_90x90);

LV_IMAGE_DECLARE(_menu_electricity_RGB565A8_90x90);

LV_IMAGE_DECLARE(_menu_light_RGB565A8_90x90);

LV_IMAGE_DECLARE(_home_bak_RGB565A8_43x84);

LV_IMAGE_DECLARE(_pos_RGB565A8_200x64);

LV_IMAGE_DECLARE(_rect_bak_RGB565A8_480x320);

LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_montserratMedium_15)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_13)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_30)
LV_FONT_DECLARE(lv_font_montserratMedium_14)
LV_FONT_DECLARE(lv_font_LiberationSans_16)
LV_FONT_DECLARE(lv_font_montserratMedium_30)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_montserratMedium_20)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_16)
LV_FONT_DECLARE(lv_font_montserratMedium_13)
LV_FONT_DECLARE(lv_font_montserratMedium_18)
LV_FONT_DECLARE(lv_font_LiberationSans_12)


#ifdef __cplusplus
}
#endif
#endif
