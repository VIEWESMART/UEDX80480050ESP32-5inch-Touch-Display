/*
 * SPDX-FileCopyrightText: 2024-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

// *INDENT-OFF*

#include "drivers/esp_panel_drivers_conf_internal.h"

#ifndef ESP_PANEL_DRIVERS_INCLUDE_INSIDE
    /*
    * Define the driver configuration
    */
    #ifndef ESP_PANEL_DRIVERS_LCD_USE_ALL
        #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ALL
            #define ESP_PANEL_DRIVERS_LCD_USE_ALL CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ALL
        #else
            #define ESP_PANEL_DRIVERS_LCD_USE_ALL (0)
        #endif
    #endif

    #if ESP_PANEL_DRIVERS_LCD_USE_ALL
        #define ESP_PANEL_DRIVERS_LCD_USE_AXS15231B (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_EK9716B (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_EK79007 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_GC9A01 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_GC9B71 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_GC9503 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_HX8399 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ILI9341 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ILI9881C (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_JD9165 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_JD9365 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_NV3022B (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_SH8601 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_SPD2010 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ST7262 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ST7701 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ST7703 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ST7789 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ST7796 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ST77903 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ST77916 (1)
        #define ESP_PANEL_DRIVERS_LCD_USE_ST77922 (1)
    #else
        #ifndef ESP_PANEL_DRIVERS_LCD_USE_AXS15231B
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_AXS15231B
                #define ESP_PANEL_DRIVERS_LCD_USE_AXS15231B CONFIG_ESP_PANEL_DRIVERS_LCD_USE_AXS15231B
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_AXS15231B (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_EK9716B
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_EK9716B
                #define ESP_PANEL_DRIVERS_LCD_USE_EK9716B CONFIG_ESP_PANEL_DRIVERS_LCD_USE_EK9716B
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_EK9716B (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_EK79007
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_EK79007
                #define ESP_PANEL_DRIVERS_LCD_USE_EK79007 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_EK79007
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_EK79007 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_GC9A01
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_GC9A01
                #define ESP_PANEL_DRIVERS_LCD_USE_GC9A01 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_GC9A01
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_GC9A01 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_GC9B71
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_GC9B71
                #define ESP_PANEL_DRIVERS_LCD_USE_GC9B71 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_GC9B71
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_GC9B71 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_GC9503
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_GC9503
                #define ESP_PANEL_DRIVERS_LCD_USE_GC9503 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_GC9503
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_GC9503 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_HX8399
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_HX8399
                #define ESP_PANEL_DRIVERS_LCD_USE_HX8399 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_HX8399
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_HX8399 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ILI9341
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ILI9341
                #define ESP_PANEL_DRIVERS_LCD_USE_ILI9341 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ILI9341
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ILI9341 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ILI9881C
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ILI9881C
                #define ESP_PANEL_DRIVERS_LCD_USE_ILI9881C CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ILI9881C
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ILI9881C (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_JD9165
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_JD9165
                #define ESP_PANEL_DRIVERS_LCD_USE_JD9165 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_JD9165
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_JD9165 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_JD9365
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_JD9365
                #define ESP_PANEL_DRIVERS_LCD_USE_JD9365 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_JD9365
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_JD9365 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_NV3022B
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_NV3022B
                #define ESP_PANEL_DRIVERS_LCD_USE_NV3022B CONFIG_ESP_PANEL_DRIVERS_LCD_USE_NV3022B
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_NV3022B (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_SH8601
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_SH8601
                #define ESP_PANEL_DRIVERS_LCD_USE_SH8601 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_SH8601
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_SH8601 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_SPD2010
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_SPD2010
                #define ESP_PANEL_DRIVERS_LCD_USE_SPD2010 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_SPD2010
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_SPD2010 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ST7262
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7262
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7262 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7262
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7262 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ST7701
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7701
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7701 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7701
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7701 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ST7703
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7703
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7703 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7703
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7703 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ST7789
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7789
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7789 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7789
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7789 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ST7796
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7796
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7796 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST7796
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ST7796 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ST77903
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST77903
                #define ESP_PANEL_DRIVERS_LCD_USE_ST77903 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST77903
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ST77903 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ST77916
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST77916
                #define ESP_PANEL_DRIVERS_LCD_USE_ST77916 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST77916
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ST77916 (0)
            #endif
        #endif

        #ifndef ESP_PANEL_DRIVERS_LCD_USE_ST77922
            #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST77922
                #define ESP_PANEL_DRIVERS_LCD_USE_ST77922 CONFIG_ESP_PANEL_DRIVERS_LCD_USE_ST77922
            #else
                #define ESP_PANEL_DRIVERS_LCD_USE_ST77922 (0)
            #endif
        #endif
    #endif // ESP_PANEL_DRIVERS_LCD_USE_ALL

    #ifndef ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS
        #ifdef CONFIG_ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS
            #define ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS CONFIG_ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS
        #else
            #define ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS (0)
        #endif
    #endif
#endif

/*
 * Enable the driver if it is used or if the compile unused drivers is enabled
 */
#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_AXS15231B
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_AXS15231B
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_AXS15231B  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_AXS15231B  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_EK9716B
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_EK9716B
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_EK9716B  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_EK9716B  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_EK79007
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_EK79007
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_EK79007  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_EK79007  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_GC9A01
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_GC9A01
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_GC9A01  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_GC9A01  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_GC9B71
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_GC9B71
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_GC9B71  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_GC9B71  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_GC9503
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_GC9503
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_GC9503  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_GC9503  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_HX8399
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_HX8399
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_HX8399  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_HX8399  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ILI9341
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ILI9341
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ILI9341  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ILI9341  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ILI9881C
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ILI9881C
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ILI9881C  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ILI9881C  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_JD9165
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_JD9165
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_JD9165  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_JD9165  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_JD9365
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_JD9365
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_JD9365  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_JD9365  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_NV3022B
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_NV3022B
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_NV3022B  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_NV3022B  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_SH8601
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_SH8601
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_SH8601  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_SH8601  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_SPD2010
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_SPD2010
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_SPD2010  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_SPD2010  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ST7262
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ST7262
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7262  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7262  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ST7701
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ST7701
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7701  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7701  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ST7703
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ST7703
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7703  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7703  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ST7789
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ST7789
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7789  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7789  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ST7796
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ST7796
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7796  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST7796  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ST77903
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ST77903
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST77903  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST77903  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ST77916
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ST77916
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST77916  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST77916  (0)
    #endif
#endif

#ifndef ESP_PANEL_DRIVERS_LCD_ENABLE_ST77922
    #if ESP_PANEL_DRIVERS_LCD_COMPILE_UNUSED_DRIVERS || ESP_PANEL_DRIVERS_LCD_USE_ST77922
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST77922  (1)
    #else
        #define ESP_PANEL_DRIVERS_LCD_ENABLE_ST77922  (0)
    #endif
#endif

// *INDENT-ON*
