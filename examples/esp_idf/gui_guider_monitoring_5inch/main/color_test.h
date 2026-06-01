/**
 * @brief 测试界面：红/绿/蓝/黑/白纯色 + 红绿蓝黑白竖条；GPIO0 与主界面切换；触摸单击停止/切页，双击恢复顺序播放
 */
#pragma once

#include "lvgl.h"
#include "hw_init.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @param widgets_screen 调用 lv_demo_widgets() 后通过 lv_screen_active() 传入
 */
void color_test_init(lv_obj_t *widgets_screen);

/**
 * 在 GPIO0 单击时调用，用于主界面与纯色界面切换。
 * 必须在已持有 esp_lv_adapter_lock 的上下文中调用。
 */
void color_test_toggle(void);

#ifdef __cplusplus
}
#endif
