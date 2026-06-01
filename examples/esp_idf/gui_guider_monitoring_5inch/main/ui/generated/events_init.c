/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif

#include "custom.h"
static lv_timer_t  * home_task;
static lv_timer_t * chart_timer;
static lv_timer_t * firefighting_timer;

static void Home_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        lv_image_set_pivot(guider_ui.Home_img_fan, 18, 19);
        ui_animation(guider_ui.Home_img_fan, 1000, 0, lv_image_get_rotation(guider_ui.Home_img_fan), 360*10, &lv_anim_path_linear, -1, 0, 0, 0, (lv_anim_exec_xcb_t)lv_image_set_rotation, NULL, NULL, NULL);
        home_task = lv_timer_create(home_timer_cb, 80, &guider_ui);
        ui_anim_pause(guider_ui.Home_img_fan, (lv_anim_exec_xcb_t)lv_img_set_angle);
        ui_anim_pause(guider_ui.Home_img_snow, (lv_anim_exec_xcb_t)lv_obj_set_y);
        ui_anim_pause(guider_ui.Home_img_snow_1, (lv_anim_exec_xcb_t)lv_obj_set_y);
        ui_anim_pause(guider_ui.Home_img_snow_2, (lv_anim_exec_xcb_t)lv_obj_set_y);

        break;
    }
    case LV_EVENT_SCREEN_UNLOADED:
    {
        lv_timer_del(home_task);
        break;
    }
    default:
        break;
    }
}

static void Home_sw_air_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_t * status_obj = lv_event_get_target(e);
        int status = lv_obj_has_state(status_obj, LV_STATE_CHECKED) ? true : false;

        switch (status) {
        case (true):
        {
            lv_obj_set_style_image_recolor(guider_ui.Home_img_air, lv_color_hex(0x0ae687), LV_PART_MAIN);
            lv_obj_set_style_image_recolor(guider_ui.Home_img_fan, lv_color_hex(0xbefd12), LV_PART_MAIN);
            ui_anim_resume(guider_ui.Home_img_fan, (lv_anim_exec_xcb_t)lv_img_set_angle);
            ui_anim_resume(guider_ui.Home_img_snow, (lv_anim_exec_xcb_t)lv_obj_set_y);
            ui_anim_resume(guider_ui.Home_img_snow_1, (lv_anim_exec_xcb_t)lv_obj_set_y);
            ui_anim_resume(guider_ui.Home_img_snow_2, (lv_anim_exec_xcb_t)lv_obj_set_y);
            ui_animation(guider_ui.Home_img_snow, 1000, 0, lv_obj_get_y(guider_ui.Home_img_snow), 160, &lv_anim_path_linear, -1, 0, 1000, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
            lv_obj_set_style_image_recolor(guider_ui.Home_img_snow, lv_color_hex(0xc7f0cf), LV_PART_MAIN);
            ui_animation(guider_ui.Home_img_snow_2, 800, 0, lv_obj_get_y(guider_ui.Home_img_snow_2), 170, &lv_anim_path_linear, -1, 0, 800, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
            lv_obj_set_style_image_recolor(guider_ui.Home_img_snow_2, lv_color_hex(0x8deca0), LV_PART_MAIN);
            ui_animation(guider_ui.Home_img_snow_1, 2000, 0, lv_obj_get_y(guider_ui.Home_img_snow_1), 182, &lv_anim_path_linear, -1, 0, 2000, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
            lv_obj_set_style_image_recolor(guider_ui.Home_img_snow_1, lv_color_hex(0x5dee9c), LV_PART_MAIN);
            break;
        }
        case (false):
        {
            lv_obj_set_style_image_recolor(guider_ui.Home_img_fan, lv_color_hex(0xb1aaaa), LV_PART_MAIN);
            lv_obj_set_style_image_recolor(guider_ui.Home_img_air, lv_color_hex(0xc1b8b8), LV_PART_MAIN);
            ui_anim_pause(guider_ui.Home_img_fan, (lv_anim_exec_xcb_t)lv_img_set_angle);
            ui_anim_pause(guider_ui.Home_img_snow, (lv_anim_exec_xcb_t)lv_obj_set_y);
            ui_anim_pause(guider_ui.Home_img_snow_1, (lv_anim_exec_xcb_t)lv_obj_set_y);
            ui_anim_pause(guider_ui.Home_img_snow_2, (lv_anim_exec_xcb_t)lv_obj_set_y);
            lv_obj_set_y(guider_ui.Home_img_snow, 175);
            lv_obj_set_y(guider_ui.Home_img_snow_1, 162);
            lv_obj_set_y(guider_ui.Home_img_snow_2, 177);
            lv_obj_set_style_image_recolor(guider_ui.Home_img_snow, lv_color_hex(0xa7aaa7), LV_PART_MAIN);
            lv_obj_set_style_image_recolor(guider_ui.Home_img_snow_2, lv_color_hex(0x959796), LV_PART_MAIN);
            lv_obj_set_style_image_recolor(guider_ui.Home_img_snow_1, lv_color_hex(0xa7a9a9), LV_PART_MAIN);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

static void Home_sw_light_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        lv_obj_t * status_obj = lv_event_get_target(e);
        int status = lv_obj_has_state(status_obj, LV_STATE_CHECKED) ? true : false;

        switch (status) {
        case (true):
        {
            lv_obj_set_style_image_recolor(guider_ui.Home_img_light, lv_color_hex(0x05ff93), LV_PART_MAIN);
            lv_label_set_text(guider_ui.Home_label_light, "42");
            lv_obj_set_style_text_color(guider_ui.Home_label_light, lv_color_hex(0x4ef979), LV_PART_MAIN|LV_STATE_DEFAULT);
            break;
        }
        case (false):
        {
            lv_obj_set_style_image_recolor(guider_ui.Home_img_light, lv_color_hex(0xa0aba6), LV_PART_MAIN);
            lv_label_set_text(guider_ui.Home_label_light, "38");
            lv_obj_set_style_text_color(guider_ui.Home_label_light, lv_color_hex(0xb8b2b2), LV_PART_MAIN|LV_STATE_DEFAULT);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

static void Home_btn_menu_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_remove_flag(guider_ui.Home_cont_menu, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void Home_cont_menu_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_add_flag(guider_ui.Home_cont_menu, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void Home_btn_7_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Firefighting, guider_ui.Firefighting_del, &guider_ui.Home_del, setup_scr_Firefighting, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Home_btn_6_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Firefighting, guider_ui.Firefighting_del, &guider_ui.Home_del, setup_scr_Firefighting, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Home_btn_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Firefighting, guider_ui.Firefighting_del, &guider_ui.Home_del, setup_scr_Firefighting, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Home_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Electricity, guider_ui.Electricity_del, &guider_ui.Home_del, setup_scr_Electricity, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Home_btn_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Electricity, guider_ui.Electricity_del, &guider_ui.Home_del, setup_scr_Electricity, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Home_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Electricity, guider_ui.Electricity_del, &guider_ui.Home_del, setup_scr_Electricity, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Home_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Electricity, guider_ui.Electricity_del, &guider_ui.Home_del, setup_scr_Electricity, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_Home (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Home, Home_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_sw_air, Home_sw_air_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_sw_light, Home_sw_light_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_btn_menu, Home_btn_menu_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_cont_menu, Home_cont_menu_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_btn_7, Home_btn_7_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_btn_6, Home_btn_6_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_btn_5, Home_btn_5_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_btn_4, Home_btn_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_btn_3, Home_btn_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_btn_2, Home_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Home_btn_1, Home_btn_1_event_handler, LV_EVENT_ALL, ui);
}

static void Firefighting_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        firefighting_timer = lv_timer_create(firefighting_timer_cb, 100, &guider_ui);
        chart_timer = lv_timer_create(chart_line_timer_cb, 100, &guider_ui);
        break;
    }
    case LV_EVENT_SCREEN_UNLOADED:
    {
        lv_timer_del(firefighting_timer);
        lv_timer_del(chart_timer);
        break;
    }
    default:
        break;
    }
}

static void Firefighting_btn_home_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Home, guider_ui.Home_del, &guider_ui.Firefighting_del, setup_scr_Home, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_Firefighting (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Firefighting, Firefighting_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Firefighting_btn_home, Firefighting_btn_home_event_handler, LV_EVENT_ALL, ui);
}

static void Electricity_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        ui_animation(guider_ui.Electricity_cont_1, 600, 0, lv_obj_get_y(guider_ui.Electricity_cont_1), 80, &lv_anim_path_bounce, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.Electricity_cont_5, 1500, 800, lv_obj_get_y(guider_ui.Electricity_cont_5), 380, &lv_anim_path_bounce, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.Electricity_cont_4, 1000, 1900, lv_obj_get_y(guider_ui.Electricity_cont_4), 70, &lv_anim_path_bounce, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.Electricity_cont_3, 1200, 900, lv_obj_get_y(guider_ui.Electricity_cont_3), 140, &lv_anim_path_bounce, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        ui_animation(guider_ui.Electricity_cont_2, 1000, 1000, lv_obj_get_y(guider_ui.Electricity_cont_2), 230, &lv_anim_path_bounce, 0, 0, 0, 0, (lv_anim_exec_xcb_t)lv_obj_set_y, NULL, NULL, NULL);
        break;
    }
    default:
        break;
    }
}

static void Electricity_btn_home_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.Home, guider_ui.Home_del, &guider_ui.Electricity_del, setup_scr_Home, LV_SCR_LOAD_ANIM_OVER_RIGHT, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void Electricity_cont_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_remove_flag(guider_ui.Electricity_cont_info_box, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void Electricity_cont_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_remove_flag(guider_ui.Electricity_cont_info_box, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void Electricity_cont_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_remove_flag(guider_ui.Electricity_cont_info_box, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void Electricity_cont_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_remove_flag(guider_ui.Electricity_cont_info_box, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void Electricity_cont_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_remove_flag(guider_ui.Electricity_cont_info_box, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void Electricity_cont_info_box_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_add_flag(guider_ui.Electricity_cont_info_box, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

void events_init_Electricity (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->Electricity, Electricity_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Electricity_btn_home, Electricity_btn_home_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Electricity_cont_1, Electricity_cont_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Electricity_cont_2, Electricity_cont_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Electricity_cont_3, Electricity_cont_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Electricity_cont_4, Electricity_cont_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Electricity_cont_5, Electricity_cont_5_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->Electricity_cont_info_box, Electricity_cont_info_box_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
