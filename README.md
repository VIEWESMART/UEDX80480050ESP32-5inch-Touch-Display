<h1 align = "center">VIEWE ESP32-S3 Smart Display Quick Guide </h1>
<p align="center">
    <img src="image/Main_Image.png" alt="">
    <h1 align = "center" style="font-size: 18px;">Model: UEDX80480050E-WB-A</h1>
</p>

* **[中文版](./README_CN.md)**


## PurchaseLink

| Product                     | SOC           |  FLASH  |  PSRAM   | Link                   |
| :------------------------: | :-----------: |:-------: | :---------: | :------------------: |
| UEDX80480050E-WB-A V1.1   | ESP32S3R8 |   16M   | 8M (Octal SPI) | [VIEWE Mall](https://viewedisplay.com/product/esp32-7-inch-800x480-rgb-ips-tft-display-touch-screen-arduino-lvgl-uart/)  |

## 1. Introduction

The **UEDX80480050E-WB-A** is a high-performance HMI smart display module equipped with a 5-inch RGB screen (800x480). Powered by the **ESP32-S3-WROOM-1-N16R8** module, it integrates 2.4GHz Wi-Fi and Bluetooth 5 (LE) capabilities.

The board features a high-speed **RGB Interface** for the display, ensuring smooth UI performance . It also includes a Capacitive Touch Panel (GT911), rich GPIO expansion, and supports popular frameworks like **Arduino**, **ESP-IDF**, and **PlatformIO**.

### 1.1 Product Features
* **Processor**:
    * **ESP32-S3**: Xtensa® Dual-Core 32-bit LX7 MCU @ 240MHz.
    * Integrated 2.4 GHz Wi-Fi (802.11 b/g/n) & Bluetooth 5 (LE).
* **Memory**:
    * **16MB** Quad SPI Flash.
    * **8MB** Octal SPI PSRAM.
* **Display & Touch**:
    * **Screen**: 5.0-inch TFT LCD (800x480 Resolution).
    * **Interface**: 16-bit RGB Interface (High Refresh Rate).
    * **Driver IC**: ST7262E43-G4.
    * **Touch**: Capacitive Multi-Touch (GT911) via I2C.
* **Peripherals**:
    * **Connectivity**: USB-C (UART/Program), RS485, CAN, RS232 (Optional/Expansion).
    * **Storage**: TF Card Slot (SDIO/SPI).
    * **Audio**: Onboard Speaker Connector & Buzzer.
    * **Expansion**: GPIO Header (UART, I2C, SPI, IOs).

### 1.2 Applications
* Industrial HMI Control Panels
* Smart Home Automation Centers
* Medical Devices & Instruments
* IoT Data Dashboards

## 2. Hardware Description

### 2.1 Module Overview
The detailed component layout is shown below:

![Board Layout](image/overview.png)

| No. | Component | Description |
| :--- | :--- | :--- |
| **①** | **ESP32-S3-N16R8** | Main SoC (16MB Flash / 8MB PSRAM). |
| **②** | **USB-C Port** | **Power (5V)** / Firmware Download / UART Debug (CH340C). |
| **③** | **Display Interface** | 40-Pin RGB Interface FPC Connector. |
| **④** | **Touch Interface** | 6-Pin Capacitive Touch Header (I2C). |
| **⑤** | **TF Card Slot** | For external storage (Images/Logs). |
| **⑥** | **UART/RS485** | Reserved pads/header for Industrial Serial communication. |
| **⑦** | **BOOT Button** | Press during power-on to enter Download Mode. |
| **⑧** | **RESET Button** | Hardware System Reset. |
| **⑨** | **Expansion Header** | GPIOs, 5V, 3.3V, GND for external sensors. |

### 2.2 GPIO Definition (Pinout)
The mapping for the Display and Touch interfaces:
#### **Display (RGB Interface)**
| Pin Name | ESP32-S3 Pin | Function |
| :--- | :--- | :--- |
| **DE** | IO40 | Data Enable |
| **VSYNC** | IO41 | Vertical Sync |
| **HSYNC** | IO39 | Horizontal Sync |
| **PCLK** | IO42 | Pixel Clock |
| **R0 - R4** | IO45, 48, 47, 21, 14 | Red Data Lines |
| **G0 - G5** | IO5, 6, 7, 15, 16, 4 | Green Data Lines |
| **B0 - B4** | IO8, 3, 46, 9, 1 | Blue Data Lines |
| **BL** | IO2 | Backlight PWM |

#### **Touch (GT911)**
| Pin Name | ESP32-S3 Pin | Function |
| :--- | :--- | :--- |
| **SDA** | IO19 | I2C Data |
| **SCL** | IO20 | I2C Clock |
| **INT** | IO18 | Interrupt |
| **RST** | IO38 | Reset |

#### **Peripherals**
| Interface | ESP32-S3 Pin | Description |
| :--- | :--- | :--- |
| **UART0** | IO43 (TX), IO44 (RX) | USB-to-UART (Debug/Upload) |
| **SD Card** | IO10 (CS), IO11 (MOSI), IO12 (CLK), IO13 (MISO) | SPI/SDIO Mode |
| **RGB LED** | IO0 | WS2812B (Optional) |

## 3. Software

We provide comprehensive support for **Arduino**, **PlatformIO**, and **ESP-IDF** frameworks, with pre-ported **LVGL** examples.

### 3.1 Software Examples
Examples are available in the [GitHub Repository](examples).

| Framework | Example Path | Description |
| :--- | :--- | :--- |
| **Arduino** | `examples/arduino/gui/lvgl_v8` | **LVGL Benchmark**: Demonstrates 800x480 UI rendering. It can also be directly opened in the Arduino IDE. |
| **esp-idf** | `examples/esp_idf/lvgl_port` | **lvgl port**: Example of porting and using lvgl in esp-idf |
| **esp-idf** | `examples/esp_idf/sd_card_spi` | **sd_card**: Examples of using an SD card on a device |
| **PlatformIO**| `examples/platformio/lvgl_v8_port` | **lvgl v8 port**: Usage example of lvgl v8. |

### 3.2 Getting Started

#### 3.2.1 Preparation
* **Hardware**: UEDX80480070E-WB-A Board, USB-C Cable.
* **Software**: VS Code (ESP-IDF v5.3+) or Arduino IDE (v2.0+) or VS Code (PlatformIO).
* **Library**: The following libraries are needed for Arduino IDE and PlatformIO

    |Libraries|version|Description|
    | :--- | :--- | :--- |
    |`ESP32_Display_Panel`| `1.0.3+` |by Espressif, This is necessary to drive the screen.|
    |`ESP32_IO_Expander`| `Arduino automatic selection` |The dependency library of `ESP32_Display_Panel` should be selected for installation together during the installation process.|
    |`esp-lib-utils`| `Arduino automatic selection` |The dependency library of `ESP32_Display_Panel` should be selected for installation together during the installation process.|
    |`lvgl`| `8.4.0` | A free and open-source embedded graphics library. |

#### 3.2.2  ESP-IDF Setup
1.  **Open platformio example**
    * go to GitHub to download the program. You can download the main branch by clicking on the "<> Code" with green text
    * Open the example using VS Code(ESP-IDF)
2.  **Compile and upload**:
    * Click `build` in the upper right corner to compile.
    * connect the microcontroller to the computer.If the compilation is correct.
    * Click `upload` in the upper right corner to download.

#### 3.2.3 Arduino Setup ([Novice tutorial](https://github.com/VIEWESMART/VIEWE-Tutorial/blob/main/Arduino%20Tutorial/Arduino%20Getting%20Started%20Tutorial.md))
1.  **Install[Arduino](https://www.arduino.cc/en/software)**
    - Choose installation based on your system type.
    - Newcomers please refer to the [beginner's tutorial](https://github.com/VIEWESMART/VIEWE-Tutorial/blob/main/Arduino%20Tutorial/Arduino%20Getting%20Started%20Tutorial.md).
2.  **Install ESP32 Board Package**:
    - Open Arduino IDE
    - Go to `File` > `Preferences`
    - Add to `Additional boards manager URLs`:
    ```
    https://espressif.github.io/arduino-esp32/package_esp32_index.json
    ```
    * Go to *Tools > Board > Boards Manager*.
    * Search `esp32` by Espressif and install version **3.0.0+**.
3.  **Install Libraries**:
    * Go to *Sketch > Include Library > Library Manager*.
    * Search `ESP32_Display_Panel` by Espressif and install version **1.0.3+**. You will be prompted whether to install its dependencies, please click **INSTALL ALL** to install all.
    * Install `lvgl` (v8.4.0 recommended).
4.  **Open example**:
    * Navigate to `File` > `Examples` > `ESP32_Display_Panel`
    * Select `Arduino` > `gui` > `lvgl_v8` > `simple_port`
5.  **Select Board**:
    * Target: `ESP32S3 Dev Module`.
    * Settings:
        * **Flash Size**: 16MB (128Mb)
        * **Partition Scheme**: 16M Flash (3MB APP/9.9MB FATFS)
        * **PSRAM**: **OPI PSRAM** (Crucial!)
6.  **config esp supported panel board**:
    * Open the `esp_panel_board_supported_conf.h` file in the example
    * Enable this file: change the `ESP_PANEL_BOARD_DEFAULT_USE_SUPPORTED` macro definition to `1`
    * ensure you uncomment: `#define BOARD_VIEWE_UEDX80480050E_WB_A`
    ```c
    ...
    /**
    * @brief Flag to enable supported board configuration (0/1)
    *
    * Set to `1` to enable supported board configuration, `0` to disable
    */
    #define ESP_PANEL_BOARD_DEFAULT_USE_SUPPORTED       (1)
    ...
    // #define BOARD_VIEWE_SMARTRING
    // #define BOARD_VIEWE_UEDX24240013_MD50E
    // #define BOARD_VIEWE_UEDX24320024E_WB_A
    // #define BOARD_VIEWE_UEDX24320028E_WB_A
    // #define BOARD_VIEWE_UEDX24320035E_WB_A
    // #define BOARD_VIEWE_UEDX32480035E_WB_A
    // #define BOARD_VIEWE_UEDX46460015_MD50ET
    // #define BOARD_VIEWE_UEDX48270043E_WB_A
    // #define BOARD_VIEWE_UEDX48480021_MD80E_V2
    // #define BOARD_VIEWE_UEDX48480021_MD80E
    // #define BOARD_VIEWE_UEDX48480021_MD80ET
    // #define BOARD_VIEWE_UEDX48480028_MD80ET
    // #define BOARD_VIEWE_UEDX48480040E_WB_A
    // #define BOARD_VIEWE_UEDX80480043E_WB_A
    // #define BOARD_VIEWE_UEDX80480050E_AC_A
    #define BOARD_VIEWE_UEDX80480050E_WB_A
    // #define BOARD_VIEWE_UEDX80480050E_WB_A_2
    // #define BOARD_VIEWE_UEDX80480070E_WB_A
    ...
    ```
7.  **Configure the example**:
    - [Optional] Edit the macro definitions in the `lvgl_v8_port.h` file
        - **If using `RGB/MIPI-DSI` interface**, change the `LVGL_PORT_AVOID_TEARING_MODE` macro definition to `1`/`2`/`3` to enable the avoid tearing function. After that, change the `LVGL_PORT_ROTATION_DEGREE` macro definition to the target rotation degree
        - **If using other interfaces**, please don't modify the `LVGL_PORT_AVOID_TEARING_MODE` and `LVGL_PORT_ROTATION_DEGREE` macro definitions
    - [Optional] Edit the macro definitions in the `lv_conf.h` file
        - **If using `SPI/QSPI` interface**, change the `LV_COLOR_16_SWAP` macro definition to `1`.
8.  **Select the correct port**:
    * Connect to the device.
    * Go to *Tools > Port*, Select the corresponding port.
9.  **Compile and upload**:
    * Click `√` in the upper right corner to compile.
    * connect the microcontroller to the computer.If the compilation is correct.
    * Click `→` in the upper right corner to download.


> [!TIP]
> **Configuration**: In `esp_panel_board_supported_conf.h`, ensure you uncomment:
> `#define BOARD_VIEWE_UEDX80480070E_WB_A`
> Do not enable both `ESP_PANEL_BOARD_DEFAULT_USE_SUPPORTED` and `ESP_PANEL_BOARD_DEFAULT_USE_CUSTOM`
> You cannot enable multiple esp supported panel boards at the same time.

#### 3.2.4 PlatformIO Setup
1.  **Open platformio example**
    * go to GitHub to download the program. You can download the main branch by clicking on the "<> Code" with green text
    * Open the example using VS Code(PlatformIO)
2.  **Configure PlatformIO**:
    * This example uses the `BOARD_ESPRESSIF_ESP32_S3_LCD_EV_BOARD_2_V1_5` board as default. Choose `BOARD_VIEWE_UEDX80480070E_WB_A` in the `[platformio]:default_envs` of the `platformio.ini` file.
3.  **Configure the example**:
    - [Optional] Edit the macro definitions in the `lvgl_v8_port.h` file
        - **If using `RGB/MIPI-DSI` interface**, change the `LVGL_PORT_AVOID_TEARING_MODE` macro definition to `1`/`2`/`3` to enable the avoid tearing function. After that, change the `LVGL_PORT_ROTATION_DEGREE` macro definition to the target rotation degree
        - **If using other interfaces**, please don't modify the `LVGL_PORT_AVOID_TEARING_MODE` and `LVGL_PORT_ROTATION_DEGREE` macro definitions
4.  **Compile and upload the project**
    - Click the `√`(Compile) button
    - Connect the board to your computer.If the compilation is correct.
    - Click the `→`(upload) button
---


## 4. Related Documents & Resources

* [products specification](information/UEDX80480050E-WB-A%20V3.3%20SPEC.pdf)
* [schematic](https://github.com/VIEWESMART/UEDX80480050ESP32-5inch-Touch-Display/blob/main/Schematic/5.0.png)
* [Display Datasheet](information/UE050WV-RB40-L070A.pdf)
* [Touch IC Datasheet_EN](information/GT911_EN_Datasheet.pdf)
* [Touch IC Datasheet_CN](information/GT911_CN_Datasheet.pdf)
* [5050RGB-LED](information/C2843785_RGB%2BLED(Built-in%20IC)_XL-5050RGBC-WS2812B_specification_WJ1123912.PDF)
* [CH340C](information/C84681_USB%20Conversion%20chip_CH340C_specification_WJ1187874.PDF)


## 6. firmware download
1. Open the project file "tools" and locate the ESP32 burning tool. Open it.

2. Select the correct burning chip and burning method, then click "OK." As shown in the picture, follow steps 1->2->3->4->5 to burn the program. If the burning is not successful, press and hold the "BOOT-0" button and then download and burn again.

3. Burn the file in the root directory of the project file "[firmware](./firmware/)" file,There is a description of the firmware file version inside, just choose the appropriate version to download.

<p align="center" width="100%">
    <img src="image/10.png" alt="example">
    <img src="image/11.png" alt="example">
</p>

## FAQ

* Q. After reading the above tutorials, I still don't know how to build a programming environment. What should I do?
* A. If you still don't understand how to build an environment after reading the above tutorials, you can refer to the [VIEWE-FAQ]() document instructions to build it.

<br />

* Q. Why does Arduino IDE prompt me to update library files when I open it? Should I update them or not?
* A. Choose not to update library files. Different versions of library files may not be mutually compatible, so it is not recommended to update library files.

<br />

* Q. Why is there no serial data output on the "Uart" interface on my board? Is it defective and unusable?
* A. The default project configuration uses the USB interface as Uart0 serial output for debugging purposes. The "Uart" interface is connected to Uart0, so it won't output any data without configuration.<br />For PlatformIO users, please open the project file "platformio.ini" and modify the option under "build_flags = xxx" from "-D ARDUINO_USB_CDC_ON_BOOT=true" to "-D ARDUINO_USB_CDC_ON_BOOT=false" to enable external "Uart" interface.<br />For Arduino users, open the "Tools" menu and select "USB CDC On Boot: Disabled" to enable the external "Uart" interface.

<br />

* Q. Why is my board continuously failing to download the program?
* A. Please hold down the "BOOT" button and try downloading the program again.




