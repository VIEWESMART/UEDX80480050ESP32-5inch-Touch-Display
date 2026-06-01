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



int Home_digital_clock_time_min_value = 25;
int Home_digital_clock_time_hour_value = 11;
int Home_digital_clock_time_sec_value = 50;
void setup_scr_Home(lv_ui *ui)
{
    //Write codes Home
    ui->Home = lv_obj_create(NULL);
    lv_obj_set_size(ui->Home, 800, 480);
    lv_obj_set_scrollbar_mode(ui->Home, LV_SCROLLBAR_MODE_OFF);

    //Write style for Home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home, &_sub_page_bak_RGB565A8_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_cont_dev_control
    ui->Home_cont_dev_control = lv_obj_create(ui->Home);
    lv_obj_set_pos(ui->Home_cont_dev_control, 313, 78);
    lv_obj_set_size(ui->Home_cont_dev_control, 460, 380);
    lv_obj_set_scrollbar_mode(ui->Home_cont_dev_control, LV_SCROLLBAR_MODE_OFF);

    //Write style for Home_cont_dev_control, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_cont_dev_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_cont_dev_control, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_cont_dev_control, 181, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_cont_dev_control, lv_color_hex(0x154870), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_cont_dev_control, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_cont_dev_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_cont_dev_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_cont_dev_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_cont_dev_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_cont_dev_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_dev
    ui->Home_label_dev = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_dev, 0, 0);
    lv_obj_set_size(ui->Home_label_dev, 460, 40);
    lv_label_set_text(ui->Home_label_dev, "Device Control");
    lv_label_set_long_mode(ui->Home_label_dev, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_dev, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_dev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_dev, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_dev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_dev, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_dev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_dev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_dev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_dev, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_dev, 59, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_label_dev, lv_color_hex(0x1e1e1e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_label_dev, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_dev, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_dev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_dev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_dev, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_dev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_air_control
    ui->Home_label_air_control = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_air_control, 23, 54);
    lv_obj_set_size(ui->Home_label_air_control, 123, 20);
    lv_label_set_text(ui->Home_label_air_control, "Air Condition");
    lv_label_set_long_mode(ui->Home_label_air_control, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_air_control, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_air_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_air_control, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_air_control, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_air_control, &lv_font_montserratMedium_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_air_control, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_air_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_air_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_air_control, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_air_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_air_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_air_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_air_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_air_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_air_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_light_control
    ui->Home_label_light_control = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_light_control, 21, 242);
    lv_obj_set_size(ui->Home_label_light_control, 119, 17);
    lv_label_set_text(ui->Home_label_light_control, "Light Control");
    lv_label_set_long_mode(ui->Home_label_light_control, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_light_control, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_light_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_light_control, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_light_control, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_light_control, &lv_font_montserratMedium_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_light_control, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_light_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_light_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_light_control, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_light_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_light_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_light_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_light_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_light_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_light_control, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_air
    ui->Home_img_air = lv_image_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_img_air, 31, 98);
    lv_obj_set_size(ui->Home_img_air, 134, 57);
    lv_obj_add_flag(ui->Home_img_air, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_air, &_air_RGB565A8_134x57);
    lv_image_set_pivot(ui->Home_img_air, 50,50);
    lv_image_set_rotation(ui->Home_img_air, 0);

    //Write style for Home_img_air, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_air, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->Home_img_air, lv_color_hex(0xb1b1b1), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_air, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_fan
    ui->Home_img_fan = lv_image_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_img_fan, 116, 163);
    lv_obj_set_size(ui->Home_img_fan, 36, 38);
    lv_obj_add_flag(ui->Home_img_fan, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_fan, &_air_fan_RGB565A8_36x38);
    lv_image_set_pivot(ui->Home_img_fan, 50,50);
    lv_image_set_rotation(ui->Home_img_fan, 0);

    //Write style for Home_img_fan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_fan, 245, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->Home_img_fan, lv_color_hex(0xc1c1c1), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_fan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_electricity_usage
    ui->Home_label_electricity_usage = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_electricity_usage, 213, 52);
    lv_obj_set_size(ui->Home_label_electricity_usage, 213, 19);
    lv_label_set_text(ui->Home_label_electricity_usage, "Electricy Usage        Top 3");
    lv_label_set_long_mode(ui->Home_label_electricity_usage, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_electricity_usage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_electricity_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_electricity_usage, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_electricity_usage, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_electricity_usage, &lv_font_montserratMedium_15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_electricity_usage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_electricity_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_electricity_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_electricity_usage, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_electricity_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_electricity_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_electricity_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_electricity_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_electricity_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_electricity_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_1F
    ui->Home_label_1F = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_1F, 211, 94);
    lv_obj_set_size(ui->Home_label_1F, 47, 13);
    lv_label_set_text(ui->Home_label_1F, "#001");
    lv_label_set_long_mode(ui->Home_label_1F, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_1F, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_1F, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_1F, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_1F, &lv_font_Alatsi_Regular_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_1F, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_1F, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_1F_usage
    ui->Home_label_1F_usage = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_1F_usage, 391, 93);
    lv_obj_set_size(ui->Home_label_1F_usage, 63, 14);
    lv_label_set_text(ui->Home_label_1F_usage, "244kw/h");
    lv_label_set_long_mode(ui->Home_label_1F_usage, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_1F_usage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_1F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_1F_usage, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_1F_usage, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_1F_usage, &lv_font_Alatsi_Regular_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_1F_usage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_1F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_1F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_1F_usage, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_1F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_1F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_1F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_1F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_1F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_1F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_bar_1F
    ui->Home_bar_1F = lv_bar_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_bar_1F, 213, 113);
    lv_obj_set_size(ui->Home_bar_1F, 240, 4);
    lv_obj_set_style_anim_duration(ui->Home_bar_1F, 1000, 0);
    lv_bar_set_mode(ui->Home_bar_1F, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->Home_bar_1F, 0, 40);
    lv_bar_set_value(ui->Home_bar_1F, 40, LV_ANIM_OFF);

    //Write style for Home_bar_1F, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_bar_1F, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_bar_1F, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_bar_1F, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_bar_1F, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_bar_1F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Home_bar_1F, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_bar_1F, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_bar_1F, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_bar_1F, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_bar_1F, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes Home_bar_2F
    ui->Home_bar_2F = lv_bar_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_bar_2F, 213, 154);
    lv_obj_set_size(ui->Home_bar_2F, 240, 4);
    lv_obj_set_style_anim_duration(ui->Home_bar_2F, 1000, 0);
    lv_bar_set_mode(ui->Home_bar_2F, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->Home_bar_2F, 0, 40);
    lv_bar_set_value(ui->Home_bar_2F, 40, LV_ANIM_OFF);

    //Write style for Home_bar_2F, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_bar_2F, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_bar_2F, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_bar_2F, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_bar_2F, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_bar_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Home_bar_2F, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_bar_2F, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_bar_2F, lv_color_hex(0x00ff2b), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_bar_2F, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_bar_2F, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes Home_label_2F
    ui->Home_label_2F = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_2F, 211, 135);
    lv_obj_set_size(ui->Home_label_2F, 53, 13);
    lv_label_set_text(ui->Home_label_2F, "#002");
    lv_label_set_long_mode(ui->Home_label_2F, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_2F, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_2F, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_2F, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_2F, &lv_font_Alatsi_Regular_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_2F, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_2F, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_2F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_2F_usage
    ui->Home_label_2F_usage = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_2F_usage, 391, 132);
    lv_obj_set_size(ui->Home_label_2F_usage, 63, 14);
    lv_label_set_text(ui->Home_label_2F_usage, "244kw/h");
    lv_label_set_long_mode(ui->Home_label_2F_usage, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_2F_usage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_2F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_2F_usage, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_2F_usage, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_2F_usage, &lv_font_Alatsi_Regular_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_2F_usage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_2F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_2F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_2F_usage, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_2F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_2F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_2F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_2F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_2F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_2F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_bar_3F
    ui->Home_bar_3F = lv_bar_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_bar_3F, 213, 194);
    lv_obj_set_size(ui->Home_bar_3F, 240, 4);
    lv_obj_set_style_anim_duration(ui->Home_bar_3F, 1000, 0);
    lv_bar_set_mode(ui->Home_bar_3F, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->Home_bar_3F, 0, 40);
    lv_bar_set_value(ui->Home_bar_3F, 40, LV_ANIM_OFF);

    //Write style for Home_bar_3F, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_bar_3F, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_bar_3F, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_bar_3F, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_bar_3F, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_bar_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Home_bar_3F, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_bar_3F, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_bar_3F, lv_color_hex(0xffcd00), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_bar_3F, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_bar_3F, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes Home_label_3F
    ui->Home_label_3F = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_3F, 211, 174);
    lv_obj_set_size(ui->Home_label_3F, 50, 13);
    lv_label_set_text(ui->Home_label_3F, "#003");
    lv_label_set_long_mode(ui->Home_label_3F, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_3F, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_3F, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_3F, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_3F, &lv_font_Alatsi_Regular_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_3F, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_3F, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_3F, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_3F_usage
    ui->Home_label_3F_usage = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_3F_usage, 391, 171);
    lv_obj_set_size(ui->Home_label_3F_usage, 63, 14);
    lv_label_set_text(ui->Home_label_3F_usage, "244kw/h");
    lv_label_set_long_mode(ui->Home_label_3F_usage, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_3F_usage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_3F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_3F_usage, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_3F_usage, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_3F_usage, &lv_font_Alatsi_Regular_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_3F_usage, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_3F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_3F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_3F_usage, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_3F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_3F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_3F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_3F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_3F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_3F_usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_light
    ui->Home_img_light = lv_image_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_img_light, 13, 281);
    lv_obj_set_size(ui->Home_img_light, 70, 69);
    lv_obj_add_flag(ui->Home_img_light, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_light, &_menu_light_RGB565A8_70x69);
    lv_image_set_pivot(ui->Home_img_light, 50,50);
    lv_image_set_rotation(ui->Home_img_light, 0);

    //Write style for Home_img_light, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_light, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->Home_img_light, lv_color_hex(0xf1f1f1), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_light, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_light
    ui->Home_label_light = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_light, 77, 308);
    lv_obj_set_size(ui->Home_label_light, 62, 30);
    lv_label_set_text(ui->Home_label_light, "38");
    lv_label_set_long_mode(ui->Home_label_light, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_light, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_light, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_light, lv_color_hex(0x90918f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_light, &lv_font_Alatsi_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_light, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_light, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_17
    ui->Home_label_17 = lv_label_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_label_17, 133, 321);
    lv_obj_set_size(ui->Home_label_17, 37, 18);
    lv_label_set_text(ui->Home_label_17, "kw / h");
    lv_label_set_long_mode(ui->Home_label_17, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_17, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_17, lv_color_hex(0x969696), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_17, &lv_font_Alatsi_Regular_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_17, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_sw_air
    ui->Home_sw_air = lv_switch_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_sw_air, 155, 52);
    lv_obj_set_size(ui->Home_sw_air, 28, 15);

    //Write style for Home_sw_air, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_sw_air, 83, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_sw_air, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_sw_air, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_sw_air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_sw_air, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_sw_air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Home_sw_air, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->Home_sw_air, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->Home_sw_air, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->Home_sw_air, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->Home_sw_air, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for Home_sw_air, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_sw_air, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_sw_air, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_sw_air, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_sw_air, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_sw_air, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes Home_img_snow
    ui->Home_img_snow = lv_image_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_img_snow, 41, 175);
    lv_obj_set_size(ui->Home_img_snow, 20, 20);
    lv_obj_add_flag(ui->Home_img_snow, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_snow, &_air_snow_RGB565A8_20x20);
    lv_image_set_pivot(ui->Home_img_snow, 10,10);
    lv_image_set_rotation(ui->Home_img_snow, 0);

    //Write style for Home_img_snow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_snow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->Home_img_snow, lv_color_hex(0xb3b3b3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_snow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_snow_1
    ui->Home_img_snow_1 = lv_image_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_img_snow_1, 64, 162);
    lv_obj_set_size(ui->Home_img_snow_1, 16, 16);
    lv_obj_add_flag(ui->Home_img_snow_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_snow_1, &_air_snow_RGB565A8_16x16);
    lv_image_set_pivot(ui->Home_img_snow_1, 8,8);
    lv_image_set_rotation(ui->Home_img_snow_1, 0);

    //Write style for Home_img_snow_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_snow_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->Home_img_snow_1, lv_color_hex(0xb3b3b3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_snow_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_snow_2
    ui->Home_img_snow_2 = lv_image_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_img_snow_2, 86, 177);
    lv_obj_set_size(ui->Home_img_snow_2, 12, 12);
    lv_obj_add_flag(ui->Home_img_snow_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_snow_2, &_air_snow_RGB565A8_12x12);
    lv_image_set_pivot(ui->Home_img_snow_2, 6,6);
    lv_image_set_rotation(ui->Home_img_snow_2, 0);

    //Write style for Home_img_snow_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_snow_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->Home_img_snow_2, lv_color_hex(0xb3b3b3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_snow_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_sw_light
    ui->Home_sw_light = lv_switch_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_sw_light, 150, 242);
    lv_obj_set_size(ui->Home_sw_light, 28, 15);

    //Write style for Home_sw_light, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_sw_light, 83, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_sw_light, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_sw_light, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_sw_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_sw_light, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_sw_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Home_sw_light, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->Home_sw_light, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->Home_sw_light, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->Home_sw_light, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->Home_sw_light, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for Home_sw_light, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_sw_light, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_sw_light, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_sw_light, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_sw_light, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_sw_light, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes Home_cont_1
    ui->Home_cont_1 = lv_obj_create(ui->Home_cont_dev_control);
    lv_obj_set_pos(ui->Home_cont_1, 214, 240);
    lv_obj_set_size(ui->Home_cont_1, 225, 105);
    lv_obj_set_scrollbar_mode(ui->Home_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for Home_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_cont_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->Home_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->Home_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->Home_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_cont_1, 64, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_cont_1, lv_color_hex(0x065c9b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_line_1
    ui->Home_line_1 = lv_line_create(ui->Home_cont_1);
    lv_obj_set_pos(ui->Home_line_1, 108, 15);
    lv_obj_set_size(ui->Home_line_1, 10, 78);
    static lv_point_precise_t Home_line_1[] = {{0, 0},{0, 80}};
    lv_line_set_points(ui->Home_line_1, Home_line_1, 2);

    //Write style for Home_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->Home_line_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->Home_line_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->Home_line_1, 173, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->Home_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_20
    ui->Home_label_20 = lv_label_create(ui->Home_cont_1);
    lv_obj_set_pos(ui->Home_label_20, 9, 13);
    lv_obj_set_size(ui->Home_label_20, 95, 18);
    lv_label_set_text(ui->Home_label_20, "Total");
    lv_label_set_long_mode(ui->Home_label_20, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_20, lv_color_hex(0xe6f7ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_20, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_20, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_21
    ui->Home_label_21 = lv_label_create(ui->Home_cont_1);
    lv_obj_set_pos(ui->Home_label_21, 124, 12);
    lv_obj_set_size(ui->Home_label_21, 95, 18);
    lv_label_set_text(ui->Home_label_21, "Normal");
    lv_label_set_long_mode(ui->Home_label_21, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_21, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_21, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_21, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_22
    ui->Home_label_22 = lv_label_create(ui->Home_cont_1);
    lv_obj_set_pos(ui->Home_label_22, 16, 48);
    lv_obj_set_size(ui->Home_label_22, 61, 41);
    lv_label_set_text(ui->Home_label_22, "20");
    lv_label_set_long_mode(ui->Home_label_22, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_22, lv_color_hex(0x00bdff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_22, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_22, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_23
    ui->Home_label_23 = lv_label_create(ui->Home_cont_1);
    lv_obj_set_pos(ui->Home_label_23, 133, 45);
    lv_obj_set_size(ui->Home_label_23, 64, 41);
    lv_label_set_text(ui->Home_label_23, "20");
    lv_label_set_long_mode(ui->Home_label_23, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_23, lv_color_hex(0x00ff6a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_23, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_23, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_24
    ui->Home_label_24 = lv_label_create(ui->Home_cont_1);
    lv_obj_set_pos(ui->Home_label_24, 56, 66);
    lv_obj_set_size(ui->Home_label_24, 38, 16);
    lv_label_set_text(ui->Home_label_24, "Num");
    lv_label_set_long_mode(ui->Home_label_24, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_24, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_24, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_24, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_25
    ui->Home_label_25 = lv_label_create(ui->Home_cont_1);
    lv_obj_set_pos(ui->Home_label_25, 180, 66);
    lv_obj_set_size(ui->Home_label_25, 38, 16);
    lv_label_set_text(ui->Home_label_25, "Num");
    lv_label_set_long_mode(ui->Home_label_25, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_25, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_25, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_25, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_cont_temp
    ui->Home_cont_temp = lv_obj_create(ui->Home);
    lv_obj_set_pos(ui->Home_cont_temp, 57, 78);
    lv_obj_set_size(ui->Home_cont_temp, 240, 180);
    lv_obj_set_scrollbar_mode(ui->Home_cont_temp, LV_SCROLLBAR_MODE_OFF);

    //Write style for Home_cont_temp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_cont_temp, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_cont_temp, 181, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_cont_temp, lv_color_hex(0x154870), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_cont_temp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_cont_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_temp_tit
    ui->Home_label_temp_tit = lv_label_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_label_temp_tit, 0, 0);
    lv_obj_set_size(ui->Home_label_temp_tit, 240, 40);
    lv_label_set_text(ui->Home_label_temp_tit, "Temperature Monitor");
    lv_label_set_long_mode(ui->Home_label_temp_tit, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_temp_tit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_temp_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_temp_tit, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_temp_tit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_temp_tit, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_temp_tit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_temp_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_temp_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_temp_tit, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_temp_tit, 59, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_label_temp_tit, lv_color_hex(0x1e1e1e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_label_temp_tit, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_temp_tit, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_temp_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_temp_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_temp_tit, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_temp_tit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_arc_temp
    ui->Home_arc_temp = lv_arc_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_arc_temp, 11, 56);
    lv_obj_set_size(ui->Home_arc_temp, 100, 100);
    lv_arc_set_mode(ui->Home_arc_temp, LV_ARC_MODE_NORMAL);
    lv_arc_set_range(ui->Home_arc_temp, 0, 40);
    lv_arc_set_bg_angles(ui->Home_arc_temp, 0, 360);
    lv_arc_set_value(ui->Home_arc_temp, 20);
    lv_arc_set_rotation(ui->Home_arc_temp, 90);

    //Write style for Home_arc_temp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_arc_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_arc_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui->Home_arc_temp, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->Home_arc_temp, 45, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->Home_arc_temp, lv_color_hex(0xe7e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui->Home_arc_temp, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_arc_temp, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_arc_temp, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_arc_temp, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_arc_temp, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_arc_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_arc_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Home_arc_temp, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_arc_width(ui->Home_arc_temp, 8, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->Home_arc_temp, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->Home_arc_temp, lv_color_hex(0x0eff85), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui->Home_arc_temp, true, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for Home_arc_temp, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_arc_temp, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_arc_temp, lv_color_hex(0x0eff85), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_arc_temp, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(ui->Home_arc_temp, 4, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes Home_arc_humi
    ui->Home_arc_humi = lv_arc_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_arc_humi, 126, 56);
    lv_obj_set_size(ui->Home_arc_humi, 100, 100);
    lv_arc_set_mode(ui->Home_arc_humi, LV_ARC_MODE_NORMAL);
    lv_arc_set_range(ui->Home_arc_humi, 0, 40);
    lv_arc_set_bg_angles(ui->Home_arc_humi, 0, 360);
    lv_arc_set_value(ui->Home_arc_humi, 10);
    lv_arc_set_rotation(ui->Home_arc_humi, 90);

    //Write style for Home_arc_humi, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_arc_humi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_arc_humi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui->Home_arc_humi, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->Home_arc_humi, 45, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->Home_arc_humi, lv_color_hex(0xe7e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui->Home_arc_humi, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_arc_humi, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_arc_humi, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_arc_humi, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_arc_humi, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_arc_humi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_arc_humi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for Home_arc_humi, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_arc_width(ui->Home_arc_humi, 8, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->Home_arc_humi, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->Home_arc_humi, lv_color_hex(0x00c8eb), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui->Home_arc_humi, true, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for Home_arc_humi, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_arc_humi, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_arc_humi, lv_color_hex(0x00c8eb), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_arc_humi, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(ui->Home_arc_humi, 4, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes Home_label_temp_con
    ui->Home_label_temp_con = lv_label_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_label_temp_con, 49, 88);
    lv_obj_set_size(ui->Home_label_temp_con, 41, 23);
    lv_label_set_text(ui->Home_label_temp_con, "1F");
    lv_label_set_long_mode(ui->Home_label_temp_con, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_temp_con, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_temp_con, lv_color_hex(0xfafafa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_temp_con, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_temp_con, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_temp_con, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_temp_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_temp_val
    ui->Home_label_temp_val = lv_label_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_label_temp_val, 36, 119);
    lv_obj_set_size(ui->Home_label_temp_val, 37, 21);
    lv_label_set_text(ui->Home_label_temp_val, "28");
    lv_label_set_long_mode(ui->Home_label_temp_val, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_temp_val, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_temp_val, lv_color_hex(0xa8cb11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_temp_val, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_temp_val, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_temp_val, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_temp_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_wet_val
    ui->Home_label_wet_val = lv_label_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_label_wet_val, 151, 113);
    lv_obj_set_size(ui->Home_label_wet_val, 34, 22);
    lv_label_set_text(ui->Home_label_wet_val, "50");
    lv_label_set_long_mode(ui->Home_label_wet_val, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_wet_val, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_wet_val, lv_color_hex(0xa8cb11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_wet_val, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_wet_val, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_wet_val, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_wet_val, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_wet_con
    ui->Home_label_wet_con = lv_label_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_label_wet_con, 172, 82);
    lv_obj_set_size(ui->Home_label_wet_con, 35, 24);
    lv_label_set_text(ui->Home_label_wet_con, "1F");
    lv_label_set_long_mode(ui->Home_label_wet_con, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_wet_con, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_wet_con, lv_color_hex(0xfafafa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_wet_con, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_wet_con, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_wet_con, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_wet_con, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_temp
    ui->Home_img_temp = lv_image_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_img_temp, 25, 77);
    lv_obj_set_size(ui->Home_img_temp, 43, 43);
    lv_obj_add_flag(ui->Home_img_temp, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_temp, &_temp_RGB565A8_43x43);
    lv_image_set_pivot(ui->Home_img_temp, 50,50);
    lv_image_set_rotation(ui->Home_img_temp, 0);

    //Write style for Home_img_temp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_temp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_1
    ui->Home_img_1 = lv_image_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_img_1, 148, 74);
    lv_obj_set_size(ui->Home_img_1, 33, 36);
    lv_obj_add_flag(ui->Home_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_1, &_Humidity_RGB565A8_33x36);
    lv_image_set_pivot(ui->Home_img_1, 50,50);
    lv_image_set_rotation(ui->Home_img_1, 0);

    //Write style for Home_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_15
    ui->Home_label_15 = lv_label_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_label_15, 58, 118);
    lv_obj_set_size(ui->Home_label_15, 26, 19);
    lv_label_set_text(ui->Home_label_15, "℃");
    lv_label_set_long_mode(ui->Home_label_15, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_15, lv_color_hex(0xdbff54), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_15, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_16
    ui->Home_label_16 = lv_label_create(ui->Home_cont_temp);
    lv_obj_set_pos(ui->Home_label_16, 172, 113);
    lv_obj_set_size(ui->Home_label_16, 36, 23);
    lv_label_set_text(ui->Home_label_16, "%");
    lv_label_set_long_mode(ui->Home_label_16, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_16, lv_color_hex(0xa8cb11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_16, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_cont_electricity
    ui->Home_cont_electricity = lv_obj_create(ui->Home);
    lv_obj_set_pos(ui->Home_cont_electricity, 60, 271);
    lv_obj_set_size(ui->Home_cont_electricity, 240, 180);
    lv_obj_set_scrollbar_mode(ui->Home_cont_electricity, LV_SCROLLBAR_MODE_OFF);

    //Write style for Home_cont_electricity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_cont_electricity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_cont_electricity, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_cont_electricity, 181, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_cont_electricity, lv_color_hex(0x154870), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_cont_electricity, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_cont_electricity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_cont_electricity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_cont_electricity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_cont_electricity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_cont_electricity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_8
    ui->Home_label_8 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_8, 0, 0);
    lv_obj_set_size(ui->Home_label_8, 240, 40);
    lv_label_set_text(ui->Home_label_8, "Electricity Monitor");
    lv_label_set_long_mode(ui->Home_label_8, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_8, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_8, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_8, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_8, 59, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->Home_label_8, lv_color_hex(0x1e1e1e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->Home_label_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_8, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_8, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_3
    ui->Home_img_3 = lv_image_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_img_3, 6, 49);
    lv_obj_set_size(ui->Home_img_3, 90, 90);
    lv_obj_add_flag(ui->Home_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_3, &_menu_icon_bak_RGB565A8_90x90);
    lv_image_set_pivot(ui->Home_img_3, 50,50);
    lv_image_set_rotation(ui->Home_img_3, 0);

    //Write style for Home_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_4
    ui->Home_img_4 = lv_image_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_img_4, 80, 49);
    lv_obj_set_size(ui->Home_img_4, 90, 90);
    lv_obj_add_flag(ui->Home_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_4, &_menu_icon_bak_RGB565A8_90x90);
    lv_image_set_pivot(ui->Home_img_4, 50,50);
    lv_image_set_rotation(ui->Home_img_4, 0);

    //Write style for Home_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_5
    ui->Home_img_5 = lv_image_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_img_5, 152, 49);
    lv_obj_set_size(ui->Home_img_5, 90, 90);
    lv_obj_add_flag(ui->Home_img_5, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_5, &_menu_icon_bak_RGB565A8_90x90);
    lv_image_set_pivot(ui->Home_img_5, 50,50);
    lv_image_set_rotation(ui->Home_img_5, 0);

    //Write style for Home_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_7
    ui->Home_label_7 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_7, 23, 146);
    lv_obj_set_size(ui->Home_label_7, 50, 23);
    lv_label_set_text(ui->Home_label_7, "#001");
    lv_label_set_long_mode(ui->Home_label_7, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_7, lv_color_hex(0xfafafa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_7, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_ele_1
    ui->Home_label_ele_1 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_ele_1, 25, 76);
    lv_obj_set_size(ui->Home_label_ele_1, 51, 23);
    lv_label_set_text(ui->Home_label_ele_1, "28");
    lv_label_set_long_mode(ui->Home_label_ele_1, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_ele_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_ele_1, lv_color_hex(0xa8cb11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_ele_1, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_ele_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_ele_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_ele_2
    ui->Home_label_ele_2 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_ele_2, 104, 78);
    lv_obj_set_size(ui->Home_label_ele_2, 36, 25);
    lv_label_set_text(ui->Home_label_ele_2, "28");
    lv_label_set_long_mode(ui->Home_label_ele_2, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_ele_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_ele_2, lv_color_hex(0xa8cb11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_ele_2, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_ele_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_ele_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_4
    ui->Home_label_4 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_4, 98, 146);
    lv_obj_set_size(ui->Home_label_4, 50, 23);
    lv_label_set_text(ui->Home_label_4, "#002");
    lv_label_set_long_mode(ui->Home_label_4, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_4, lv_color_hex(0xfafafa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_9
    ui->Home_label_9 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_9, 173, 146);
    lv_obj_set_size(ui->Home_label_9, 50, 23);
    lv_label_set_text(ui->Home_label_9, "#003");
    lv_label_set_long_mode(ui->Home_label_9, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_9, lv_color_hex(0xfafafa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_9, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_ele_3
    ui->Home_label_ele_3 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_ele_3, 173, 78);
    lv_obj_set_size(ui->Home_label_ele_3, 51, 23);
    lv_label_set_text(ui->Home_label_ele_3, "28");
    lv_label_set_long_mode(ui->Home_label_ele_3, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_ele_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_ele_3, lv_color_hex(0xa8cb11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_ele_3, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_ele_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_ele_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_12
    ui->Home_label_12 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_12, 106, 105);
    lv_obj_set_size(ui->Home_label_12, 36, 25);
    lv_label_set_text(ui->Home_label_12, "kw/h");
    lv_label_set_long_mode(ui->Home_label_12, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_12, lv_color_hex(0xacacab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_12, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_13
    ui->Home_label_13 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_13, 180, 105);
    lv_obj_set_size(ui->Home_label_13, 36, 25);
    lv_label_set_text(ui->Home_label_13, "kw/h");
    lv_label_set_long_mode(ui->Home_label_13, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_13, lv_color_hex(0xacacab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_13, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_14
    ui->Home_label_14 = lv_label_create(ui->Home_cont_electricity);
    lv_obj_set_pos(ui->Home_label_14, 32, 103);
    lv_obj_set_size(ui->Home_label_14, 36, 25);
    lv_label_set_text(ui->Home_label_14, "kw/h");
    lv_label_set_long_mode(ui->Home_label_14, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_14, lv_color_hex(0xacacab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_14, &lv_font_montserratMedium_13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_home_title
    ui->Home_label_home_title = lv_label_create(ui->Home);
    lv_obj_set_pos(ui->Home_label_home_title, 226, 18);
    lv_obj_set_size(ui->Home_label_home_title, 350, 31);
    lv_label_set_text(ui->Home_label_home_title, "Smart Building Monitoring");
    lv_label_set_long_mode(ui->Home_label_home_title, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_home_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_home_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_home_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_home_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_home_title, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_home_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_home_title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_home_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_home_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_home_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_home_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_home_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_home_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_home_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_home_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_btn_menu
    ui->Home_btn_menu = lv_button_create(ui->Home);
    lv_obj_set_pos(ui->Home_btn_menu, 0, 196);
    lv_obj_set_size(ui->Home_btn_menu, 45, 84);
    ui->Home_btn_menu_label = lv_label_create(ui->Home_btn_menu);
    lv_label_set_text(ui->Home_btn_menu_label, "" LV_SYMBOL_RIGHT "  ");
    lv_label_set_long_mode(ui->Home_btn_menu_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Home_btn_menu_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Home_btn_menu, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Home_btn_menu_label, LV_PCT(100));

    //Write style for Home_btn_menu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_btn_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_btn_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_btn_menu, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_btn_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home_btn_menu, &_home_bak_RGB565A8_45x84, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home_btn_menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home_btn_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_btn_menu, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_btn_menu, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_btn_menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_btn_menu, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_datetext_date
    ui->Home_datetext_date = lv_label_create(ui->Home);
    lv_obj_set_pos(ui->Home_datetext_date, 628, 10);
    lv_obj_set_size(ui->Home_datetext_date, 98, 36);
    lv_label_set_text(ui->Home_datetext_date, "2024/04/22");
    lv_obj_set_style_text_align(ui->Home_datetext_date, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_flag(ui->Home_datetext_date, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(ui->Home_datetext_date, Home_datetext_date_event_handler, LV_EVENT_ALL, NULL);

    //Write style for Home_datetext_date, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->Home_datetext_date, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_datetext_date, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_datetext_date, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_datetext_date, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_datetext_date, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_datetext_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_digital_clock_time
    static bool Home_digital_clock_time_timer_enabled = false;
    ui->Home_digital_clock_time = lv_label_create(ui->Home);
    lv_obj_set_pos(ui->Home_digital_clock_time, 691, 10);
    lv_obj_set_size(ui->Home_digital_clock_time, 98, 31);
    lv_label_set_text(ui->Home_digital_clock_time, "11:25:50");
    if (!Home_digital_clock_time_timer_enabled) {
        lv_timer_create(Home_digital_clock_time_timer, 1000, NULL);
        Home_digital_clock_time_timer_enabled = true;
    }

    //Write style for Home_digital_clock_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->Home_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_digital_clock_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_digital_clock_time, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_digital_clock_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_digital_clock_time, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_digital_clock_time, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_digital_clock_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_cont_menu
    ui->Home_cont_menu = lv_obj_create(ui->Home);
    lv_obj_set_pos(ui->Home_cont_menu, 0, 0);
    lv_obj_set_size(ui->Home_cont_menu, 800, 480);
    lv_obj_set_scrollbar_mode(ui->Home_cont_menu, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->Home_cont_menu, LV_OBJ_FLAG_HIDDEN);

    //Write style for Home_cont_menu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_cont_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_cont_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_cont_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_cont_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_cont_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_cont_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_cont_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home_cont_menu, &_menu_bak_RGB565A8_800x480, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home_cont_menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home_cont_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_cont_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_img_6
    ui->Home_img_6 = lv_image_create(ui->Home_cont_menu);
    lv_obj_set_pos(ui->Home_img_6, -160, 80);
    lv_obj_set_size(ui->Home_img_6, 320, 320);
    lv_obj_add_flag(ui->Home_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->Home_img_6, &_menu_bal_RGB565A8_320x320);
    lv_image_set_pivot(ui->Home_img_6, 50,50);
    lv_image_set_rotation(ui->Home_img_6, 0);

    //Write style for Home_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->Home_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->Home_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_btn_7
    ui->Home_btn_7 = lv_button_create(ui->Home_cont_menu);
    lv_obj_set_pos(ui->Home_btn_7, 14, 2);
    lv_obj_set_size(ui->Home_btn_7, 90, 90);
    ui->Home_btn_7_label = lv_label_create(ui->Home_btn_7);
    lv_label_set_text(ui->Home_btn_7_label, "");
    lv_label_set_long_mode(ui->Home_btn_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Home_btn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Home_btn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Home_btn_7_label, LV_PCT(100));

    //Write style for Home_btn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_btn_7, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home_btn_7, &_menu_air_RGB565A8_90x90, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_btn_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_btn_7, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_btn_6
    ui->Home_btn_6 = lv_button_create(ui->Home_cont_menu);
    lv_obj_set_pos(ui->Home_btn_6, 94, 40);
    lv_obj_set_size(ui->Home_btn_6, 90, 90);
    ui->Home_btn_6_label = lv_label_create(ui->Home_btn_6);
    lv_label_set_text(ui->Home_btn_6_label, "");
    lv_label_set_long_mode(ui->Home_btn_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Home_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Home_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Home_btn_6_label, LV_PCT(100));

    //Write style for Home_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_btn_6, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home_btn_6, &_menu_anfang_RGB565A8_90x90, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_btn_6, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_btn_5
    ui->Home_btn_5 = lv_button_create(ui->Home_cont_menu);
    lv_obj_set_pos(ui->Home_btn_5, 141, 113);
    lv_obj_set_size(ui->Home_btn_5, 90, 90);
    ui->Home_btn_5_label = lv_label_create(ui->Home_btn_5);
    lv_label_set_text(ui->Home_btn_5_label, "");
    lv_label_set_long_mode(ui->Home_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Home_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Home_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Home_btn_5_label, LV_PCT(100));

    //Write style for Home_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home_btn_5, &_menu_elevator_RGB565A8_90x90, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_btn_5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_btn_4
    ui->Home_btn_4 = lv_button_create(ui->Home_cont_menu);
    lv_obj_set_pos(ui->Home_btn_4, 160, 198);
    lv_obj_set_size(ui->Home_btn_4, 90, 90);
    ui->Home_btn_4_label = lv_label_create(ui->Home_btn_4);
    lv_label_set_text(ui->Home_btn_4_label, "");
    lv_label_set_long_mode(ui->Home_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Home_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Home_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Home_btn_4_label, LV_PCT(100));

    //Write style for Home_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home_btn_4, &_menu_tem_RGB565A8_90x90, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor(ui->Home_btn_4, lv_color_hex(0xe5ff00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home_btn_4, 216, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_btn_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_btn_3
    ui->Home_btn_3 = lv_button_create(ui->Home_cont_menu);
    lv_obj_set_pos(ui->Home_btn_3, 14, 381);
    lv_obj_set_size(ui->Home_btn_3, 90, 90);
    ui->Home_btn_3_label = lv_label_create(ui->Home_btn_3);
    lv_label_set_text(ui->Home_btn_3_label, "");
    lv_label_set_long_mode(ui->Home_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Home_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Home_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Home_btn_3_label, LV_PCT(100));

    //Write style for Home_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home_btn_3, &_menu_xiaofang_RGB565A8_90x90, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_btn_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_btn_2
    ui->Home_btn_2 = lv_button_create(ui->Home_cont_menu);
    lv_obj_set_pos(ui->Home_btn_2, 94, 347);
    lv_obj_set_size(ui->Home_btn_2, 90, 90);
    ui->Home_btn_2_label = lv_label_create(ui->Home_btn_2);
    lv_label_set_text(ui->Home_btn_2_label, "");
    lv_label_set_long_mode(ui->Home_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Home_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Home_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Home_btn_2_label, LV_PCT(100));

    //Write style for Home_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home_btn_2, &_menu_electricity_RGB565A8_90x90, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_btn_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_btn_1
    ui->Home_btn_1 = lv_button_create(ui->Home_cont_menu);
    lv_obj_set_pos(ui->Home_btn_1, 141, 277);
    lv_obj_set_size(ui->Home_btn_1, 90, 90);
    ui->Home_btn_1_label = lv_label_create(ui->Home_btn_1);
    lv_label_set_text(ui->Home_btn_1_label, "");
    lv_label_set_long_mode(ui->Home_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->Home_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->Home_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->Home_btn_1_label, LV_PCT(100));

    //Write style for Home_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->Home_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->Home_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->Home_btn_1, &_menu_light_RGB565A8_90x90, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->Home_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->Home_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes Home_label_19
    ui->Home_label_19 = lv_label_create(ui->Home_cont_menu);
    lv_obj_set_pos(ui->Home_label_19, 8, 229);
    lv_obj_set_size(ui->Home_label_19, 110, 42);
    lv_label_set_text(ui->Home_label_19, "Monitoring");
    lv_label_set_long_mode(ui->Home_label_19, LV_LABEL_LONG_WRAP);

    //Write style for Home_label_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->Home_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->Home_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->Home_label_19, lv_color_hex(0xbbff00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->Home_label_19, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->Home_label_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->Home_label_19, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->Home_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->Home_label_19, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->Home_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->Home_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->Home_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->Home_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->Home_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->Home_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of Home.


    //Update current screen layout.
    lv_obj_update_layout(ui->Home);

    //Init events for screen.
    events_init_Home(ui);
}
