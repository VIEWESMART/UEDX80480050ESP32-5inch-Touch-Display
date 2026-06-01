/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



int Firefighting_digital_clock_time_min_value = 25;
int Firefighting_digital_clock_time_hour_value = 11;
int Firefighting_digital_clock_time_sec_value = 50;
void setup_scr_Firefighting(lv_ui *ui)
{
    //Write codes Firefighting
    ui->Firefighting = lv_obj_create(NULL);
    lv_obj_set_size(ui->Firefighting, 800, 480);
    lv_obj_set_scrollbar_mode(ui->Firefighting, LV_SCROLLBAR_MODE_OFF);

    //Write style for Firefighting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Firefighting, &_sub_page_bak_RGB565A8_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Firefighting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Firefighting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_cont_smoke
    ui->Firefighting_cont_smoke = lv_obj_create(ui->Firefighting);
    lv_obj_set_pos(ui->Firefighting_cont_smoke, 46, 72);
    lv_obj_set_size(ui->Firefighting_cont_smoke, 375, 181);
    lv_obj_set_scrollbar_mode(ui->Firefighting_cont_smoke, LV_SCROLLBAR_MODE_OFF);

    //Write style for Firefighting_cont_smoke, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_cont_smoke, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_cont_smoke, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_cont_smoke, 180, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_cont_smoke, lv_color_hex(0x154870), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_cont_smoke, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_cont_smoke, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_cont_smoke, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_cont_smoke, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_cont_smoke, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_cont_smoke, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_smoke_tit
    ui->Firefighting_label_smoke_tit = lv_label_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_label_smoke_tit, 36, 29);
    lv_obj_set_size(ui->Firefighting_label_smoke_tit, 163, 20);
    lv_label_set_text(ui->Firefighting_label_smoke_tit, "Smart Smoking Sensor");
    lv_label_set_long_mode(ui->Firefighting_label_smoke_tit, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_smoke_tit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_smoke_tit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_smoke_tit, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_smoke_tit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_smoke_tit, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_smoke_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_status
    ui->Firefighting_label_status = lv_label_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_label_status, 292, 30);
    lv_obj_set_size(ui->Firefighting_label_status, 52, 17);
    lv_label_set_text(ui->Firefighting_label_status, "normal");
    lv_label_set_long_mode(ui->Firefighting_label_status, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_status, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_status, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_led_status
    ui->Firefighting_led_status = lv_led_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_led_status, 276, 36);
    lv_obj_set_size(ui->Firefighting_led_status, 5, 5);
    lv_led_set_brightness(ui->Firefighting_led_status, 255);
    lv_led_set_color(ui->Firefighting_led_status, lv_color_hex(0x00dc55));

    //Write codes Firefighting_img_smoke
    ui->Firefighting_img_smoke = lv_image_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_img_smoke, 32, 56);
    lv_obj_set_size(ui->Firefighting_img_smoke, 90, 90);
    lv_obj_add_flag(ui->Firefighting_img_smoke, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Firefighting_img_smoke, &_menu_electricity_RGB565A8_90x90);
    lv_image_set_pivot(ui->Firefighting_img_smoke, 50,50);
    lv_image_set_rotation(ui->Firefighting_img_smoke, 0);

    //Write style for Firefighting_img_smoke, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Firefighting_img_smoke, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Firefighting_img_smoke, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_desc
    ui->Firefighting_label_desc = lv_label_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_label_desc, 129, 67);
    lv_obj_set_size(ui->Firefighting_label_desc, 217, 21);
    lv_label_set_text(ui->Firefighting_label_desc, "Smoking Testing & Fire Alerting");
    lv_label_set_long_mode(ui->Firefighting_label_desc, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_desc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_desc, lv_color_hex(0xeeeeee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_desc, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_desc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_desc, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_desc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_line_1
    ui->Firefighting_line_1 = lv_line_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_line_1, 232, 106);
    lv_obj_set_size(ui->Firefighting_line_1, 6, 41);
    static lv_point_precise_t Firefighting_line_1[] = {{0, 0},{0, 30}};
    lv_line_set_points(ui->Firefighting_line_1, Firefighting_line_1, 2);

    //Write style for Firefighting_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->Firefighting_line_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->Firefighting_line_1, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->Firefighting_line_1, 127, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->Firefighting_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_warning
    ui->Firefighting_label_warning = lv_label_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_label_warning, 150, 98);
    lv_obj_set_size(ui->Firefighting_label_warning, 52, 30);
    lv_label_set_text(ui->Firefighting_label_warning, "13");
    lv_label_set_long_mode(ui->Firefighting_label_warning, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_warning, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_warning, lv_color_hex(0xcd0606), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_warning, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_warning, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_warning, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_warning, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_warning_tit
    ui->Firefighting_label_warning_tit = lv_label_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_label_warning_tit, 150, 132);
    lv_obj_set_size(ui->Firefighting_label_warning_tit, 62, 17);
    lv_label_set_text(ui->Firefighting_label_warning_tit, "Warning");
    lv_label_set_long_mode(ui->Firefighting_label_warning_tit, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_warning_tit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_warning_tit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_warning_tit, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_warning_tit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_warning_tit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_warning_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_alert_tit
    ui->Firefighting_label_alert_tit = lv_label_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_label_alert_tit, 262, 132);
    lv_obj_set_size(ui->Firefighting_label_alert_tit, 61, 17);
    lv_label_set_text(ui->Firefighting_label_alert_tit, "Alerting");
    lv_label_set_long_mode(ui->Firefighting_label_alert_tit, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_alert_tit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_alert_tit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_alert_tit, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_alert_tit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_alert_tit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_alert_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_alert
    ui->Firefighting_label_alert = lv_label_create(ui->Firefighting_cont_smoke);
    lv_obj_set_pos(ui->Firefighting_label_alert, 260, 98);
    lv_obj_set_size(ui->Firefighting_label_alert, 52, 30);
    lv_label_set_text(ui->Firefighting_label_alert, "13");
    lv_label_set_long_mode(ui->Firefighting_label_alert, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_alert, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_alert, lv_color_hex(0xd7ff00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_alert, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_alert, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_alert, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_cont_temp
    ui->Firefighting_cont_temp = lv_obj_create(ui->Firefighting);
    lv_obj_set_pos(ui->Firefighting_cont_temp, 46, 263);
    lv_obj_set_size(ui->Firefighting_cont_temp, 375, 181);
    lv_obj_set_scrollbar_mode(ui->Firefighting_cont_temp, LV_SCROLLBAR_MODE_OFF);

    //Write style for Firefighting_cont_temp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_cont_temp, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_cont_temp, 180, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_cont_temp, lv_color_hex(0x154870), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_cont_temp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_7
    ui->Firefighting_label_7 = lv_label_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_label_7, 36, 29);
    lv_obj_set_size(ui->Firefighting_label_7, 163, 20);
    lv_label_set_text(ui->Firefighting_label_7, "Smart Temperature");
    lv_label_set_long_mode(ui->Firefighting_label_7, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_7, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_6
    ui->Firefighting_label_6 = lv_label_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_label_6, 292, 30);
    lv_obj_set_size(ui->Firefighting_label_6, 52, 17);
    lv_label_set_text(ui->Firefighting_label_6, "normal");
    lv_label_set_long_mode(ui->Firefighting_label_6, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_6, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_led_1
    ui->Firefighting_led_1 = lv_led_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_led_1, 276, 36);
    lv_obj_set_size(ui->Firefighting_led_1, 5, 5);
    lv_led_set_brightness(ui->Firefighting_led_1, 255);
    lv_led_set_color(ui->Firefighting_led_1, lv_color_hex(0x00dc55));

    //Write codes Firefighting_img_1
    ui->Firefighting_img_1 = lv_image_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_img_1, 32, 56);
    lv_obj_set_size(ui->Firefighting_img_1, 90, 90);
    lv_obj_add_flag(ui->Firefighting_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Firefighting_img_1, &_menu_tem_RGB565A8_90x90);
    lv_image_set_pivot(ui->Firefighting_img_1, 50,50);
    lv_image_set_rotation(ui->Firefighting_img_1, 0);

    //Write style for Firefighting_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Firefighting_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Firefighting_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_5
    ui->Firefighting_label_5 = lv_label_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_label_5, 129, 67);
    lv_obj_set_size(ui->Firefighting_label_5, 217, 21);
    lv_label_set_text(ui->Firefighting_label_5, "Temperature Heighest & lowest");
    lv_label_set_long_mode(ui->Firefighting_label_5, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_5, lv_color_hex(0xeeeeee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_5, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_line_2
    ui->Firefighting_line_2 = lv_line_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_line_2, 232, 106);
    lv_obj_set_size(ui->Firefighting_line_2, 6, 41);
    static lv_point_precise_t Firefighting_line_2[] = {{0, 0},{0, 30}};
    lv_line_set_points(ui->Firefighting_line_2, Firefighting_line_2, 2);

    //Write style for Firefighting_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->Firefighting_line_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->Firefighting_line_2, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->Firefighting_line_2, 127, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->Firefighting_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_heigh
    ui->Firefighting_label_heigh = lv_label_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_label_heigh, 149, 97);
    lv_obj_set_size(ui->Firefighting_label_heigh, 52, 30);
    lv_label_set_text(ui->Firefighting_label_heigh, "40");
    lv_label_set_long_mode(ui->Firefighting_label_heigh, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_heigh, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_heigh, lv_color_hex(0xcd0606), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_heigh, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_heigh, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_heigh, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_heigh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_3
    ui->Firefighting_label_3 = lv_label_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_label_3, 150, 132);
    lv_obj_set_size(ui->Firefighting_label_3, 72, 18);
    lv_label_set_text(ui->Firefighting_label_3, "Heightest");
    lv_label_set_long_mode(ui->Firefighting_label_3, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_3, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_2
    ui->Firefighting_label_2 = lv_label_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_label_2, 262, 132);
    lv_obj_set_size(ui->Firefighting_label_2, 64, 16);
    lv_label_set_text(ui->Firefighting_label_2, "Lowest");
    lv_label_set_long_mode(ui->Firefighting_label_2, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_2, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_low
    ui->Firefighting_label_low = lv_label_create(ui->Firefighting_cont_temp);
    lv_obj_set_pos(ui->Firefighting_label_low, 260, 98);
    lv_obj_set_size(ui->Firefighting_label_low, 52, 30);
    lv_label_set_text(ui->Firefighting_label_low, "13");
    lv_label_set_long_mode(ui->Firefighting_label_low, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_low, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_low, lv_color_hex(0xd7ff00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_low, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_low, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_low, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_cont_1
    ui->Firefighting_cont_1 = lv_obj_create(ui->Firefighting);
    lv_obj_set_pos(ui->Firefighting_cont_1, 443, 72);
    lv_obj_set_size(ui->Firefighting_cont_1, 343, 370);
    lv_obj_set_scrollbar_mode(ui->Firefighting_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Firefighting_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_cont_1, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_cont_1, 180, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_cont_1, lv_color_hex(0x154870), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_security
    ui->Firefighting_label_security = lv_label_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_label_security, 27, 24);
    lv_obj_set_size(ui->Firefighting_label_security, 163, 20);
    lv_label_set_text(ui->Firefighting_label_security, "Security Alerting");
    lv_label_set_long_mode(ui->Firefighting_label_security, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_security, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_security, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_security, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_security, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_security, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_security, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_temp_alert
    ui->Firefighting_label_temp_alert = lv_label_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_label_temp_alert, 32, 52);
    lv_obj_set_size(ui->Firefighting_label_temp_alert, 86, 15);
    lv_label_set_text(ui->Firefighting_label_temp_alert, "Temperature");
    lv_label_set_long_mode(ui->Firefighting_label_temp_alert, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_temp_alert, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_temp_alert, lv_color_hex(0xeeeeee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_temp_alert, &lv_font_LiberationSans_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_temp_alert, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_temp_alert, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_temp_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_bar_temp
    ui->Firefighting_bar_temp = lv_bar_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_bar_temp, 123, 56);
    lv_obj_set_size(ui->Firefighting_bar_temp, 220, 4);
    lv_obj_set_style_anim_duration(ui->Firefighting_bar_temp, 1000, 0);
    lv_bar_set_mode(ui->Firefighting_bar_temp, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->Firefighting_bar_temp, 0, 200);
    lv_bar_set_value(ui->Firefighting_bar_temp, 50, LV_ANIM_OFF);

    //Write style for Firefighting_bar_temp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_bar_temp, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_bar_temp, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_bar_temp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_bar_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_bar_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Firefighting_bar_temp, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_bar_temp, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_bar_temp, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_bar_temp, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_bar_temp, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes Firefighting_bar_smoke
    ui->Firefighting_bar_smoke = lv_bar_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_bar_smoke, 123, 81);
    lv_obj_set_size(ui->Firefighting_bar_smoke, 220, 4);
    lv_obj_set_style_anim_duration(ui->Firefighting_bar_smoke, 1000, 0);
    lv_bar_set_mode(ui->Firefighting_bar_smoke, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->Firefighting_bar_smoke, 0, 200);
    lv_bar_set_value(ui->Firefighting_bar_smoke, 50, LV_ANIM_OFF);

    //Write style for Firefighting_bar_smoke, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_bar_smoke, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_bar_smoke, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_bar_smoke, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_bar_smoke, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_bar_smoke, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Firefighting_bar_smoke, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_bar_smoke, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_bar_smoke, lv_color_hex(0x5aff00), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_bar_smoke, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_bar_smoke, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_8
    ui->Firefighting_label_8 = lv_label_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_label_8, 32, 77);
    lv_obj_set_size(ui->Firefighting_label_8, 86, 15);
    lv_label_set_text(ui->Firefighting_label_8, "Smorking Alert");
    lv_label_set_long_mode(ui->Firefighting_label_8, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_8, lv_color_hex(0xeeeeee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_8, &lv_font_LiberationSans_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_8, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_9
    ui->Firefighting_label_9 = lv_label_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_label_9, 32, 102);
    lv_obj_set_size(ui->Firefighting_label_9, 86, 15);
    lv_label_set_text(ui->Firefighting_label_9, "Auto Alert");
    lv_label_set_long_mode(ui->Firefighting_label_9, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_9, lv_color_hex(0xeeeeee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_9, &lv_font_LiberationSans_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_bar_alert
    ui->Firefighting_bar_alert = lv_bar_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_bar_alert, 123, 106);
    lv_obj_set_size(ui->Firefighting_bar_alert, 220, 4);
    lv_obj_set_style_anim_duration(ui->Firefighting_bar_alert, 1000, 0);
    lv_bar_set_mode(ui->Firefighting_bar_alert, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->Firefighting_bar_alert, 0, 200);
    lv_bar_set_value(ui->Firefighting_bar_alert, 90, LV_ANIM_OFF);

    //Write style for Firefighting_bar_alert, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_bar_alert, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_bar_alert, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_bar_alert, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_bar_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_bar_alert, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Firefighting_bar_alert, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_bar_alert, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_bar_alert, lv_color_hex(0xfe0087), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_bar_alert, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_bar_alert, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes Firefighting_bar_other
    ui->Firefighting_bar_other = lv_bar_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_bar_other, 123, 131);
    lv_obj_set_size(ui->Firefighting_bar_other, 220, 4);
    lv_obj_set_style_anim_duration(ui->Firefighting_bar_other, 1000, 0);
    lv_bar_set_mode(ui->Firefighting_bar_other, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->Firefighting_bar_other, 0, 200);
    lv_bar_set_value(ui->Firefighting_bar_other, 80, LV_ANIM_OFF);

    //Write style for Firefighting_bar_other, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_bar_other, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_bar_other, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_bar_other, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_bar_other, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_bar_other, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Firefighting_bar_other, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_bar_other, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Firefighting_bar_other, lv_color_hex(0xdeff09), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Firefighting_bar_other, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_bar_other, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_10
    ui->Firefighting_label_10 = lv_label_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_label_10, 32, 127);
    lv_obj_set_size(ui->Firefighting_label_10, 86, 15);
    lv_label_set_text(ui->Firefighting_label_10, "Other");
    lv_label_set_long_mode(ui->Firefighting_label_10, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_10, lv_color_hex(0xeeeeee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_10, &lv_font_LiberationSans_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_11
    ui->Firefighting_label_11 = lv_label_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_label_11, 26, 161);
    lv_obj_set_size(ui->Firefighting_label_11, 195, 20);
    lv_label_set_text(ui->Firefighting_label_11, "Water Power Monitoring");
    lv_label_set_long_mode(ui->Firefighting_label_11, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_11, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_11, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_chart_power
    ui->Firefighting_chart_power = lv_chart_create(ui->Firefighting_cont_1);
    lv_obj_set_pos(ui->Firefighting_chart_power, 43, 189);
    lv_obj_set_size(ui->Firefighting_chart_power, 275, 143);
    lv_obj_set_scrollbar_mode(ui->Firefighting_chart_power, LV_SCROLLBAR_MODE_OFF);
    lv_chart_set_type(ui->Firefighting_chart_power, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->Firefighting_chart_power, 3, 6);
    lv_chart_set_point_count(ui->Firefighting_chart_power, 40);
    lv_chart_set_range(ui->Firefighting_chart_power, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
    lv_chart_set_range(ui->Firefighting_chart_power, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_obj_set_style_size(ui->Firefighting_chart_power, 0, 0, LV_PART_INDICATOR);
    ui->Firefighting_chart_power_0 = lv_chart_add_series(ui->Firefighting_chart_power, lv_color_hex(0xae3d3d), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 1);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 20);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 30);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 40);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 5);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_0, 0);
#endif
    ui->Firefighting_chart_power_1 = lv_chart_add_series(ui->Firefighting_chart_power, lv_color_hex(0x6ab53d), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 30);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 60);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 80);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_1, 0);
#endif
    ui->Firefighting_chart_power_2 = lv_chart_add_series(ui->Firefighting_chart_power, lv_color_hex(0x3db1b5), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 30);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 4);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 80);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 70);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
    lv_chart_set_next_value(ui->Firefighting_chart_power, ui->Firefighting_chart_power_2, 0);
#endif

    //Write style for Firefighting_chart_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_chart_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Firefighting_chart_power, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Firefighting_chart_power, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Firefighting_chart_power, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Firefighting_chart_power, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_chart_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->Firefighting_chart_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_chart_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_btn_home
    ui->Firefighting_btn_home = lv_button_create(ui->Firefighting);
    lv_obj_set_pos(ui->Firefighting_btn_home, -2, 196);
    lv_obj_set_size(ui->Firefighting_btn_home, 43, 84);
    ui->Firefighting_btn_home_label = lv_label_create(ui->Firefighting_btn_home);
    lv_label_set_text(ui->Firefighting_btn_home_label, "" LV_SYMBOL_HOME "   ");
    lv_label_set_long_mode(ui->Firefighting_btn_home_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Firefighting_btn_home_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Firefighting_btn_home, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Firefighting_btn_home_label, LV_PCT(100));

    //Write style for Firefighting_btn_home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Firefighting_btn_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Firefighting_btn_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_btn_home, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_btn_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Firefighting_btn_home, &_home_bak_RGB565A8_43x84, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Firefighting_btn_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Firefighting_btn_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_btn_home, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_btn_home, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_btn_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_btn_home, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_label_title
    ui->Firefighting_label_title = lv_label_create(ui->Firefighting);
    lv_obj_set_pos(ui->Firefighting_label_title, 220, 15);
    lv_obj_set_size(ui->Firefighting_label_title, 360, 39);
    lv_label_set_text(ui->Firefighting_label_title, "Building Security Monitoring");
    lv_label_set_long_mode(ui->Firefighting_label_title, LV_LABEL_LONG_WRAP);

    //Write style for Firefighting_label_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Firefighting_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_label_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_label_title, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_label_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_label_title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Firefighting_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_label_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_label_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_digital_clock_time
    static bool Firefighting_digital_clock_time_timer_enabled = false;
    ui->Firefighting_digital_clock_time = lv_label_create(ui->Firefighting);
    lv_obj_set_pos(ui->Firefighting_digital_clock_time, 691, 10);
    lv_obj_set_size(ui->Firefighting_digital_clock_time, 98, 31);
    lv_label_set_text(ui->Firefighting_digital_clock_time, "11:25:50");
    if (!Firefighting_digital_clock_time_timer_enabled) {
        lv_timer_create(Firefighting_digital_clock_time_timer, 1000, NULL);
        Firefighting_digital_clock_time_timer_enabled = true;
    }

    //Write style for Firefighting_digital_clock_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->Firefighting_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Firefighting_digital_clock_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_digital_clock_time, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_digital_clock_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_digital_clock_time, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_digital_clock_time, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Firefighting_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Firefighting_datetext_date
    ui->Firefighting_datetext_date = lv_label_create(ui->Firefighting);
    lv_obj_set_pos(ui->Firefighting_datetext_date, 628, 10);
    lv_obj_set_size(ui->Firefighting_datetext_date, 98, 36);
    lv_label_set_text(ui->Firefighting_datetext_date, "2024/04/22");
    lv_obj_set_style_text_align(ui->Firefighting_datetext_date, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_flag(ui->Firefighting_datetext_date, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(ui->Firefighting_datetext_date, Firefighting_datetext_date_event_handler, LV_EVENT_ALL, NULL);

    //Write style for Firefighting_datetext_date, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->Firefighting_datetext_date, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Firefighting_datetext_date, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Firefighting_datetext_date, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Firefighting_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Firefighting_datetext_date, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Firefighting_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Firefighting_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Firefighting_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Firefighting_datetext_date, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Firefighting_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Firefighting_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Firefighting_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Firefighting.


    //Update current screen layout.
    lv_obj_update_layout(ui->Firefighting);

    //Init events for screen.
    events_init_Firefighting(ui);
}
