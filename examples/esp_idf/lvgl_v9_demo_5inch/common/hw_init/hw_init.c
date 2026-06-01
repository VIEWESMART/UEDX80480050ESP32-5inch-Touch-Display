#include "hw_init.h"
#if !CONFIG_EXAMPLE_LCD_INTERFACE_MIPI_DSI && \
    !CONFIG_EXAMPLE_LCD_INTERFACE_QSPI && \
    !CONFIG_EXAMPLE_LCD_INTERFACE_RGB && \
    !CONFIG_EXAMPLE_LCD_INTERFACE_SPI_WITH_PSRAM && \
    !CONFIG_EXAMPLE_LCD_INTERFACE_SPI_WITHOUT_PSRAM
#error "No LCD interface selected! Please select one in menuconfig."
#endif

#if !HW_USE_TOUCH && !HW_USE_ENCODER
#error "No input device configured!"
#endif
