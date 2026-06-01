/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/
#define CHART_POINTS 40
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */

static int32_t temperature = 5;
static int32_t power = 40;
static bool is_increase = true;
static int32_t point = 0;

void home_timer_cb(lv_timer_t * t)
{
    lv_ui * gui = lv_timer_get_user_data(t);

    lv_color_t temp_color = lv_color_hex(0x0eff85);
    lv_color_t temp_color_1 = lv_color_hex(0x0eff85);
    lv_color_t temp_color_2 = lv_color_hex(0x0eff85);

    if (temperature >= 40) is_increase = false;
    if (temperature <= 2) is_increase = true;

    lv_arc_set_value(gui->Home_arc_temp, temperature);
    lv_label_set_text_fmt(gui->Home_label_temp_val, "%"LV_PRId32, temperature);
    lv_arc_set_value(gui->Home_arc_humi, temperature - 1);
    lv_label_set_text_fmt(gui->Home_label_wet_val, "%"LV_PRId32, temperature - 1);
    lv_bar_set_value(gui->Home_bar_1F, temperature - 5, LV_ANIM_OFF);
    lv_label_set_text_fmt(gui->Home_label_1F_usage, "%"LV_PRId32, temperature - 1);
    lv_bar_set_value(gui->Home_bar_2F, temperature + 5, LV_ANIM_OFF);
    lv_label_set_text_fmt(gui->Home_label_2F_usage, "%"LV_PRId32, temperature + 4);
    lv_bar_set_value(gui->Home_bar_3F, temperature - 8, LV_ANIM_OFF);
    lv_label_set_text_fmt(gui->Home_label_3F_usage, "%"LV_PRId32, temperature - 1);

    lv_label_set_text_fmt(gui->Home_label_ele_1, "%"LV_PRId32, temperature - 1);
    lv_label_set_text_fmt(gui->Home_label_ele_2, "%"LV_PRId32, temperature + 2);
    lv_label_set_text_fmt(gui->Home_label_ele_3, "%"LV_PRId32, temperature - 1);

    
    if (is_increase) {
        temperature += 1;
    } else {
        temperature -= 1;
    }
    if (temperature <= 5) {
        temp_color = lv_color_hex(0x16cfa1);
        temp_color_1 = lv_color_hex(0x08b65e);
        temp_color_2 = lv_color_hex(0x0a81dd);
    } else if (temperature > 5 && temperature <= 20){
        temp_color = lv_color_hex(0xc2dd0a);
        temp_color_1 = lv_color_hex(0xc59810);
        temp_color_2 = lv_color_hex(0xe4870d);
    } else if (temperature > 20 && temperature <= 40) {
        temp_color = lv_color_hex(0xe4400d);
        temp_color_1 = lv_color_hex(0xe40d68);
        temp_color_2 = lv_color_hex(0xd20de4);
    }
    lv_obj_set_style_arc_color(gui->Home_arc_temp, temp_color, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(gui->Home_arc_temp, temp_color, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(gui->Home_arc_humi, temp_color_1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(gui->Home_arc_humi, temp_color_1, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Home_label_temp_val, temp_color, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Home_label_wet_val, temp_color, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(gui->Home_bar_1F, temp_color, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(gui->Home_bar_2F, temp_color_1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(gui->Home_bar_3F, temp_color_2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Home_label_1F_usage, temp_color, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Home_label_2F_usage, temp_color_1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Home_label_3F_usage, temp_color_2, LV_PART_MAIN|LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(gui->Home_label_ele_1, temp_color, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Home_label_ele_2, temp_color_1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Home_label_ele_3, temp_color_2, LV_PART_MAIN|LV_STATE_DEFAULT);
}

void firefighting_timer_cb(lv_timer_t * t)
{
    lv_ui * gui = lv_timer_get_user_data(t);
    
    lv_color_t temp_color = lv_color_hex(0x0eff85);
    lv_color_t temp_color_1 = lv_color_hex(0x0eff85);
    lv_color_t temp_color_2 = lv_color_hex(0x0eff85);

    if (power >= 100) is_increase = false;
    if (power <= 10) is_increase = true;

    lv_bar_set_value(gui->Firefighting_bar_temp, power, LV_ANIM_OFF);
    lv_bar_set_value(gui->Firefighting_bar_smoke, power - 2, LV_ANIM_OFF);
    lv_bar_set_value(gui->Firefighting_bar_alert, power - 4, LV_ANIM_OFF);
    lv_bar_set_value(gui->Firefighting_bar_other, power + 10, LV_ANIM_OFF);
    lv_label_set_text_fmt(gui->Firefighting_label_warning, "%"LV_PRId32, power);
    lv_label_set_text_fmt(gui->Firefighting_label_alert, "%"LV_PRId32, power - 5);
    lv_label_set_text_fmt(gui->Firefighting_label_heigh, "%"LV_PRId32, power - 3);
    lv_label_set_text_fmt(gui->Firefighting_label_low, "%"LV_PRId32, power - 2);
    
    if (is_increase) {
        power += power / 5;
    } else {
        power -= power / 2;
    }
    if (power <= 10) {
        temp_color = lv_color_hex(0x1fdd98);
        temp_color_1 = lv_color_hex(0x1bc7e0);
        temp_color_2 = lv_color_hex(0x2cb112);
    } else if (power > 10 && power <= 80){
        temp_color = lv_color_hex(0xb1f70b);
        temp_color_1 = lv_color_hex(0xec8e08);
        temp_color_2 = lv_color_hex(0xa9f01f);
    } else {
        temp_color = lv_color_hex(0xf54e13);
        temp_color_1 = lv_color_hex(0xf51393);
        temp_color_2 = lv_color_hex(0xac129c);
    }
    lv_obj_set_style_bg_color(gui->Firefighting_bar_temp, temp_color, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(gui->Firefighting_bar_smoke, temp_color_1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(gui->Firefighting_bar_alert, temp_color_2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(gui->Firefighting_bar_other, temp_color, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(gui->Firefighting_label_warning, temp_color_1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Firefighting_label_alert, temp_color_2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Firefighting_label_heigh, temp_color, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(gui->Firefighting_label_low, temp_color_1, LV_PART_MAIN|LV_STATE_DEFAULT);
}

void chart_line_timer_cb (lv_timer_t * t) {

    lv_ui * gui = lv_timer_get_user_data(t);
    
    lv_chart_series_t * ser = lv_chart_get_series_next(gui->Firefighting_chart_power, NULL);
    lv_coord_t * ser_array = lv_chart_get_y_array(gui->Firefighting_chart_power, ser);

    lv_chart_series_t * ser1 = lv_chart_get_series_next(gui->Firefighting_chart_power, ser);
    lv_coord_t * ser_array_1 = lv_chart_get_y_array(gui->Firefighting_chart_power, ser1);

    lv_chart_series_t * ser2 = lv_chart_get_series_next(gui->Firefighting_chart_power, ser1);
    lv_coord_t * ser_array_2 = lv_chart_get_y_array(gui->Firefighting_chart_power, ser2);

    for (int i = 0; i < CHART_POINTS - 1; i++) {
        ser_array[i] = ser_array[i+1];
        ser_array_1[i] = ser_array_1[i+1];
        ser_array_2[i] = ser_array_2[i+1];
    }

    ser_array[CHART_POINTS - 1] = lv_rand(10, 30);
    ser_array_1[CHART_POINTS - 1] = lv_rand(40, 60);
    ser_array_2[CHART_POINTS - 1] = lv_rand(80, 90);

    lv_chart_refresh(gui->Firefighting_chart_power);
}

void custom_init(lv_ui *ui)
{
    /* Add your codes here */
}

