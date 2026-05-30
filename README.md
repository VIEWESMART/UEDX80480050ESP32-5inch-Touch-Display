<h1 align = "center">VIEWE 5.0" 800*480 ESP32-S3 Smart Display Quick Guide </h1>

* **[中文版](./README_CN.md)**
  
<p align="center">
    <img src="image/Main_Image.png" alt="">
</p>

---

## 1. Introduction

UEDX80480050E-WB-B is a high-performance smart display development board based on the ESP32-S3, featuring a 5-inch RGB touch screen (800x480). It is designed by VIEWE and is suitable for IoT and HMI applications requiring rich peripheral interfaces and Wi-Fi/BLE connectivity.

> [!NOTE]
> The UEDX80480050E-WB-A development board will be gradually phased out and replaced by the UEDX80480050E-WB-B development board.
> New designs are recommended to migrate to this version.

### 1.1 Product Features

**CPU:**
- **Processor**
  - Equipped with an Xtensa 32-bit LX7 dual-core processor, with a main frequency up to 240 MHz.
  - Integrated Wi-Fi 2.4GHz (802.11 b/g/n) and Bluetooth 5 (LE) & BLE Mesh.
- **Memory**
  - 8 MB PSRAM.
  - 16 MB Flash.
- **Peripheral Interfaces**
  - Two 2\*20 Pin Headers are on-board, breaking out multiple programmable GPIOs, supporting SPI, UART, I2C, I2S, LCD, Camera, USB OTG, and other interfaces.
  - On-board USB Type-C port for power supply, programming, and serial debugging (CH340C).
  - On-board Micro SD card slot (SPI interface).
  - Reset and Boot buttons.

**Display:**
- Size: 5.0 Inch
- Resolution: 800 * 480
- Pixel Arrangement：RGB Vertical Stripe
- Interface Mode：40PIN RGB 24bits
- Driver IC： ST7262/ST72611
- Touch IC: GT911
- Brightness: 400/500 cd/m²
- Touch: CTP
> [!NOTE]
> We have two types of screens. They are identical except for the different lengths of the touch cables in hardware. We will select and match the screens based on available inventory.

**Other:**
- Operation Temperature：-20~70℃
- Storage Temperature：-30~80℃

### 1.2 Applications

With rich connectivity and powerful processing capabilities, the UEDX80480050E-WB-B is an ideal choice for IoT devices in the following areas:

- Smart Home Control Panels
- Industrial Automation HMI
- Smart Appliances
- Consumer Electronics
- Wireless Data Loggers
- Touch Screen Interfaces
- Educational Learning Platforms

---

## 2. Product information

### 2.1 Interface Description

![Board Layout](image/Layout.jpg)

1. **Main Control Chip:** ESP32S3-MCN16R8  
   Dual-core processor, up to 240MHz operating frequency.

2. **Display Interface:**  
   40-Pin RGB 24-bit display output, supporting R0-R7, G0-G7, B0-B7. However, only RGB565 can be used due to chip limitations. Please refer to the following Display Interface table for specific I/O details and descriptions.

3. **SD Card Slot**  
   SPI interface connected for external storage expansion.

4. **Touch interface**  
   I2C interface (SDA/SCL), plus interrupt and reset pins for GT911 CTP. Please refer to the following TP Interface table for specific I/O details and descriptions.

5. **USB Type-C interface**  
   Used for 5V DC power supply.

6. **UART Serial port**  
   Standard TX/RX connectivity for debugging or communication.

7. **RGB-LED (WS2812B)**

8. **Boot Buttons**  
   BOOT button (GPIO0) for firmware download mode.

9. **Reset Buttons**  
   RESET button (CHIP-EN) for resetting the board.

10. **4-pin 1.25mm**  
    You can choose to use I2C, UART and other interfaces according to your actual situation. If you are worried about interference, you can remove the RGB lights on the development board.

11. & 12. **External GPIO Headers**  
    Dual-row 2\*21 headers providing access to a wide range of GPIOs, including ADC, touch sensors, and standard digital I/O.
> [!NOTE]
> Our company will select one of the two touch interfaces according to the actual screen configuration, and both will not be equipped simultaneously.

#### Display Interface

| Pin No. | Symbol | I/O | Description |
|---------|--------|-----|-------------|
| 1       | LEDK   | P   | Power supply for backlight cathode |
| 2       | LEDA   | P   | Power supply for backlight anode |
| 3       | GND    | P   | Power Ground |
| 4       | VDD    | P   | Power supply to the internal logic power regulator (3.3V) |
| 5-12    | R0-R7  | I   | Red data input. |
| 13-20   | G0-G7  | I   | Green data input. |
| 21-28   | B0-B7  | I   | Blue data input. |
| 29      | GND    | P   | Power Ground |
| 30      | CLK    | I   | Pixel clock input pin, Negative polarity |
| 31      | DISP   | I   | Standby mode. Normally pulled high. |
| 32      | HSYNC  | I   | Horizontal sync signal, Negative polarity |
| 33      | VSYNC  | I   | Vertical sync signal, Negative polarity |
| 34      | DEN    | I   | Data input enable. Display access is enabled when DE is “H” |
| 35      | NC     | I   | Dummy |
| 36      | GND    | P   | Power Ground |
| 37      | XR     | -   | Dummy |
| 38      | YD     | -   | Dummy |
| 39      | XL     | -   | Dummy |
| 40      | YU     | -   | Dummy |

*I：Input；O：Output；P：Power*

#### TP Interface

| Pin No. | Symbol  | I/O | Description |
|---------|---------|-----|-------------|
| 1       | GPIO20  | P   | TP SCL |
| 2       | GPIO19  | P   | TP SDA |
| 3       | GPIO18  | P   | INT (It's not actually used) |
| 4       | GND     | P   | Power Ground |
| 5       | VDD     | I   | Power supply to the internal logic power regulator (3.3V) |
| 6       | GPIO38  | I   | RTP-csb-CTP-rst |
| 7       | GND     | P   | Power Ground |
| 8       | GND     | P   | Power Ground |

### 2.2 GPIO Definition

![Pin Introduction](image/GPIO.png)

> [!NOTE]
> By default, IO18 is a common idle GPIO port. To use it as a touch interrupt pin, move the resistor from R28 to R33.

---

## 3. Functional Block Diagram

![Pin Introduction](image/Functional.png)

> **Note:** The ESP32-S3 features a 2.4 GHz radio that supports Wi-Fi (802.11 b/g/n) and Bluetooth 5 (LE). Because they share the same RF front-end, Wi-Fi and BLE cannot transmit or receive simultaneously; the radio switches between protocols as needed. This is indicated by “Shared Radio” in the block.

---

## 4. Software

We provide comprehensive support for **Arduino**, **PlatformIO**, and **ESP-IDF** frameworks, with pre-ported **LVGL** examples.

> [!TIP]
> There is no software difference between UEDX80480050E-WB-A and UEDX80480050E-WB-B. Therefore, we will use them uniformly and refer to UEDX80480050E-WB-A as the name of the development board hereinafter.

### 4.1 Software Examples
Examples are available in the [GitHub Repository(examples)](/examples).

| Framework | Example Path | Description |
| :--- | :--- | :--- |
| **Arduino** | `examples/arduino/gui/lvgl_v8` | **LVGL Benchmark**: Demonstrates 800x480 UI rendering. It can also be directly opened in the Arduino IDE. |
| **esp-idf** | `examples/esp_idf/lvgl_v9_demo_4_3inch` | **lvgl port**: Example of porting and using lvgl in esp-idf |
| **esp-idf** | `examples/esp_idf/squareline_coffee_4_3inch` | **lvgl port**: Example of porting and using squareline in esp-idf |
| **esp-idf** | `examples/esp_idf/sd_card_spi` | **sd_card**: Examples of using an SD card on a device |
| **PlatformIO**| `examples/platformio/lvgl_v8_port` | **lvgl v8 port**: Usage example of lvgl v8. |

### 4.2 Getting Started

#### 4.2.1 Preparation
* **Hardware**: UEDX80480050E-WB-A or UEDX80480050E-WB-B Board, USB-C Cable.
* **Software**: VS Code (ESP-IDF v5.3+) or Arduino IDE (v2.0+) or VS Code (PlatformIO).
* **Library**: The following libraries are needed for Arduino IDE and PlatformIO

    |Libraries|version|Description|
    | :--- | :--- | :--- |
    |`ESP32_Display_Panel`| `1.0.3+` |by Espressif, This is necessary to drive the screen.|
    |`ESP32_IO_Expander`| `Arduino automatic selection` |The dependency library of `ESP32_Display_Panel` should be selected for installation together during the installation process.|
    |`esp-lib-utils`| `Arduino automatic selection` |The dependency library of `ESP32_Display_Panel` should be selected for installation together during the installation process.|
    |`lvgl`| `8.4.0` | A free and open-source embedded graphics library. |

#### 4.2.2  ESP-IDF Setup
1.  **Open platformio example**
    * go to GitHub to download the program. You can download the main branch by clicking on the "<> Code" with green text
    * Open the example using VS Code(ESP-IDF)
2.  **Compile and upload**:
    * Click `build` in the upper right corner to compile.
    * connect the microcontroller to the computer.If the compilation is correct.
    * Click `upload` in the upper right corner to download.

#### 4.2.3 Arduino Setup([Novice tutorial](https://github.com/VIEWESMART/VIEWE-Tutorial/blob/main/Arduino%20Tutorial/Arduino%20Getting%20Started%20Tutorial.md))
1.  **Install ESP32 Board Package**:
    * Go to *Tools > Board > Boards Manager*.
    * Search `esp32` by Espressif and install version **3.0.0+**.
2.  **Install Libraries**:
    * Go to *Sketch > Include Library > Library Manager*.
    * Search `ESP32_Display_Panel` by Espressif and install version **1.0.3+**. You will be prompted whether to install its dependencies, please click **INSTALL ALL** to install all.
    * Install `lvgl` (v8.4.0 recommended).
3.  **Open example**:
    * Navigate to `File` > `Examples` > `ESP32_Display_Panel`
    * Select `Arduino` > `gui` > `lvgl_v8` > `simple_port`
4.  **Select Board**:
    * Target: `ESP32S3 Dev Module`.
    * Settings:
        * **Flash Size**: 16MB (128Mb)
        * **Partition Scheme**: 16M Flash (3MB APP/9.9MB FATFS)
        * **PSRAM**: **OPI PSRAM** (Crucial!)
5.  **config esp supported panel board**:
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
    // #define BOARD_VIEWE_UEDX25020024E_WB_A
    // #define BOARD_VIEWE_UEDX25020028E_WB_A
    // #define BOARD_VIEWE_UEDX25020035E_WB_A
    // #define BOARD_VIEWE_UEDX32480035E_WB_A
    // #define BOARD_VIEWE_UEDX46460015_MD50ET
    // #define BOARD_VIEWE_UEDX48270050E_WB_A
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
6.  **Configure the example**:
    - [Optional] Edit the macro definitions in the `lvgl_v8_port.h` file
        - **If using `RGB/MIPI-DSI` interface**, change the `LVGL_PORT_AVOID_TEARING_MODE` macro definition to `1`/`2`/`3` to enable the avoid tearing function. After that, change the `LVGL_PORT_ROTATION_DEGREE` macro definition to the target rotation degree
        - **If using other interfaces**, please don't modify the `LVGL_PORT_AVOID_TEARING_MODE` and `LVGL_PORT_ROTATION_DEGREE` macro definitions
    - [Optional] Edit the macro definitions in the `lv_conf.h` file
        - **If using `SPI/QSPI` interface**, change the `LV_COLOR_16_SWAP` macro definition to `1`.
7.  **Select the correct port**:
    * Connect to the device.
    * Go to *Tools > Port*, Select the corresponding port.
8.  **Compile and upload**:
    * Click `√` in the upper right corner to compile.
    * connect the microcontroller to the computer.If the compilation is correct.
    * Click `→` in the upper right corner to download.


> [!TIP]
> **Configuration**: In `esp_panel_board_supported_conf.h`, ensure you uncomment:
> `#define BOARD_VIEWE_UEDX80480050E_WB_A`
> Do not enable both `ESP_PANEL_BOARD_DEFAULT_USE_SUPPORTED` and `ESP_PANEL_BOARD_DEFAULT_USE_CUSTOM`
> You cannot enable multiple esp supported panel boards at the same time.

#### 4.2.4 PlatformIO Setup
1.  **Open platformio example**
    * go to GitHub to download the program. You can download the main branch by clicking on the "<> Code" with green text
    * Open the example using VS Code(PlatformIO)
2.  **Configure PlatformIO**:
    * This example uses the `BOARD_ESPRESSIF_ESP32_S3_LCD_EV_BOARD_2_V1_5` board as default. Choose `BOARD_VIEWE_UEDX80480050E_WB_A` in the `[platformio]:default_envs` of the `platformio.ini` file.
3.  **Configure the example**:
    - [Optional] Edit the macro definitions in the `lvgl_v8_port.h` file
        - **If using `RGB/MIPI-DSI` interface**, change the `LVGL_PORT_AVOID_TEARING_MODE` macro definition to `1`/`2`/`3` to enable the avoid tearing function. After that, change the `LVGL_PORT_ROTATION_DEGREE` macro definition to the target rotation degree
        - **If using other interfaces**, please don't modify the `LVGL_PORT_AVOID_TEARING_MODE` and `LVGL_PORT_ROTATION_DEGREE` macro definitions
4.  **Compile and upload the project**
    - Click the `√`(Compile) button
    - Connect the board to your computer.If the compilation is correct.
    - Click the `→`(upload) button
---

## 5. Related Documents

- [products specification(WB-A)](datasheet/UEDX80480050E-WB-A%20V3.2%20SPEC.pdf)
- [products specification(WB-B)](datasheet/UEDX80480050E-WB-B%20V1.0%20SPEC.pdf)
- [UEDX80480050E-WB-A Schematic Diagram (PDF)](Schematic/UEDX48480050E-WB-A%20V1.3.SCH.pdf)
- [UEDX80480050E-WB-B Schematic Diagram (PDF)](Schematic/UEDX80480050E-WB-B.pdf)
- [2D Drawing (dwg)](2D%20drawings/PLCM-DX80480050E-WB-B.dwg)
- [Display Specification (PDF)](datasheet/UE050WV-RB40-A070A_V1.0.pdf)
- [Display Chip Specification (PDF)](datasheet/ST7262.pdf)
- [Touch Chip Specification (Chinese)](datasheet/n/GT911_CN_Datasheet.pdf)
- [Touch Chip Specification (English)](datasheet//GT911_EN_Datasheet.pdf)
- [ESP32-S3-WROOM-1 Datasheet (Chinese)](datasheet/esp32-s3-wroom-1_wroom-1u_datasheet_cn.pdf)
- [ESP32-S3-WROOM-1 Datasheet (English)](datasheet/esp32-s3-wroom-1_wroom-1u_datasheet_en.pdf)

---

## 6. firmware download
1. Open the project file "tools" and locate the ESP32 burning tool. Open it.

2. Select the correct burning chip and burning method, then click "OK." As shown in the picture, follow steps 1->2->3->4->5 to burn the program. If the burning is not successful, press and hold the "BOOT-0" button and then download and burn again.

3. Burn the file in the root directory of the project file "[firmware](./firmware/)" file,There is a description of the firmware file version inside, just choose the appropriate version to download.

<p align="center" width="100%">
    <img src="image/10.png" alt="example">
    <img src="image/11.png" alt="example">
</p>

---

## 7. FAQ

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









