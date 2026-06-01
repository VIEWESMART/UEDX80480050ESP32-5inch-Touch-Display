#include "hw_init.h"

#if CONFIG_EXAMPLE_LCD_INTERFACE_RGB

#include "esp_lcd_panel_rgb.h"
#include "driver/gpio.h"

static const char *TAG = "hw_lcd_init";
#define HW_LCD_PIXEL_CLOCK_HZ                   (19 * 1000 * 1000)
#define HW_LCD_HSYNC                            (1)
#define HW_LCD_HBP                              (42)
#define HW_LCD_HFP                              (20)
#define HW_LCD_VSYNC                            (10)
#define HW_LCD_VBP                              (12)
#define HW_LCD_VFP                              (4)


#define HW_LCD_RGB_BL                           (GPIO_NUM_2)
#define HW_LCD_RGB_VSYNC                        (GPIO_NUM_41)
#define HW_LCD_RGB_HSYNC                        (GPIO_NUM_39)
#define HW_LCD_RGB_DE                           (GPIO_NUM_40)
#define HW_LCD_RGB_PCLK                         (GPIO_NUM_42)
#define HW_LCD_RGB_DISP                         (GPIO_NUM_NC)
#define HW_LCD_RGB_DATA0                        (GPIO_NUM_8)
#define HW_LCD_RGB_DATA1                        (GPIO_NUM_3)
#define HW_LCD_RGB_DATA2                        (GPIO_NUM_46)
#define HW_LCD_RGB_DATA3                        (GPIO_NUM_9)
#define HW_LCD_RGB_DATA4                        (GPIO_NUM_1)
#define HW_LCD_RGB_DATA5                        (GPIO_NUM_5)
#define HW_LCD_RGB_DATA6                        (GPIO_NUM_6)
#define HW_LCD_RGB_DATA7                        (GPIO_NUM_7)
#define HW_LCD_RGB_DATA8                        (GPIO_NUM_15)
#define HW_LCD_RGB_DATA9                        (GPIO_NUM_16)
#define HW_LCD_RGB_DATA10                       (GPIO_NUM_4)
#define HW_LCD_RGB_DATA11                       (GPIO_NUM_45)
#define HW_LCD_RGB_DATA12                       (GPIO_NUM_48)
#define HW_LCD_RGB_DATA13                       (GPIO_NUM_47)
#define HW_LCD_RGB_DATA14                       (GPIO_NUM_21)
#define HW_LCD_RGB_DATA15                       (GPIO_NUM_14)

#define HW_LCD_DATA_WIDTH                       (16)
#define HW_LCD_BIT_PER_PIXEL                    (16)
#define HW_LCD_BOUNCE_BUFFER_HEIGHT             (20)

static esp_lcd_panel_handle_t s_panel_handle;

esp_err_t hw_lcd_init(esp_lcd_panel_handle_t *panel_handle, esp_lcd_panel_io_handle_t *io_handle, esp_lv_adapter_tear_avoid_mode_t tear_avoid_mode, esp_lv_adapter_rotation_t rotation)
{
    ESP_LOGI(TAG, "Initialize RGB panel");
    gpio_config_t bk_gpio_config = {
        .mode = GPIO_MODE_OUTPUT,
        .pin_bit_mask = 1ULL << HW_LCD_RGB_BL};
    ESP_ERROR_CHECK(gpio_config(&bk_gpio_config));

    esp_lcd_rgb_panel_config_t panel_conf = {
        .clk_src = LCD_CLK_SRC_DEFAULT,
        .dma_burst_size = 64,
        .data_width = HW_LCD_DATA_WIDTH,
        .bits_per_pixel = HW_LCD_BIT_PER_PIXEL,
        .de_gpio_num = HW_LCD_RGB_DE,
        .pclk_gpio_num = HW_LCD_RGB_PCLK,
        .vsync_gpio_num = HW_LCD_RGB_VSYNC,
        .hsync_gpio_num = HW_LCD_RGB_HSYNC,
        .disp_gpio_num = HW_LCD_RGB_DISP,
        .data_gpio_nums = {
            HW_LCD_RGB_DATA0,
            HW_LCD_RGB_DATA1,
            HW_LCD_RGB_DATA2,
            HW_LCD_RGB_DATA3,
            HW_LCD_RGB_DATA4,
            HW_LCD_RGB_DATA5,
            HW_LCD_RGB_DATA6,
            HW_LCD_RGB_DATA7,
            HW_LCD_RGB_DATA8,
            HW_LCD_RGB_DATA9,
            HW_LCD_RGB_DATA10,
            HW_LCD_RGB_DATA11,
            HW_LCD_RGB_DATA12,
            HW_LCD_RGB_DATA13,
            HW_LCD_RGB_DATA14,
            HW_LCD_RGB_DATA15,
        },
        .timings = {
            .pclk_hz = HW_LCD_PIXEL_CLOCK_HZ,
            .h_res = HW_LCD_H_RES,
            .v_res = HW_LCD_V_RES,
            .hsync_back_porch = HW_LCD_HBP,
            .hsync_front_porch = HW_LCD_HFP,
            .hsync_pulse_width = HW_LCD_HSYNC,
            .vsync_back_porch = HW_LCD_VBP,
            .vsync_front_porch = HW_LCD_VFP,
            .vsync_pulse_width = HW_LCD_VSYNC,
            .flags = {
                .pclk_active_neg = true,
            },
        },
        .flags.fb_in_psram = 1,
        .num_fbs = esp_lv_adapter_get_required_frame_buffer_count(tear_avoid_mode, rotation),
        .bounce_buffer_size_px = HW_LCD_H_RES * HW_LCD_BOUNCE_BUFFER_HEIGHT,
    };
    ESP_ERROR_CHECK(esp_lcd_new_rgb_panel(&panel_conf, &s_panel_handle));
    ESP_ERROR_CHECK(esp_lcd_panel_reset(s_panel_handle));
    ESP_ERROR_CHECK(esp_lcd_panel_init(s_panel_handle));

    *panel_handle = s_panel_handle;
    if (io_handle) {
        *io_handle = NULL;
    }
    gpio_set_level(HW_LCD_RGB_BL, 1);

    return ESP_OK;
}

#endif
