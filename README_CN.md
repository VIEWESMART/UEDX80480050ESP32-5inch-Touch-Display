# VIEWE ESP32-S3 智能显示屏 快速上手指南
* **[英文版](./README.md)**

<div align="center">
    <img src="image/Main_Image.png" alt="产品主图">
</div>

## 购买链接
| 产品型号                | 主控芯片    | 闪存   | 伪静态随机存储器 | 购买链接                                                                 |
| ----------------------- | ----------- | ------ | ---------------- | ------------------------------------------------------------------------ |
| UEDX80480050E-WB-A V1.1 | ESP32S3R8   | 16M    | 8M（八线SPI）| [微视显商城](https://viewedisplay.com/product/esp32-5-inch-800x480-rgb-ips-tft-display-touch-screen-arduino-lvgl-uart/) |

## 一、产品介绍
**UEDX80480050E-WB-A** 是一款高性能人机交互智能显示模组，搭载5英寸RGB显示屏（分辨率800x480），基于**ESP32-S3-WROOM-1-N16R8** 模组开发，集成2.4GHz Wi-Fi和蓝牙5（低功耗）无线通信能力。

模组采用高速**RGB接口**驱动显示屏，保障人机界面流畅运行，搭载GT911电容触摸面板，提供丰富的GPIO扩展接口，同时兼容**Arduino**、**ESP-IDF**、**PlatformIO** 主流开发框架。

### 1.1 产品核心特性
* **处理器**：
  * **ESP32-S3**：Xtensa® 双核32位LX7微控制器，主频240MHz。
  * 集成2.4GHz Wi-Fi（802.11 b/g/n）及蓝牙5（低功耗）双模通信。
* **存储**：
  * 16MB 四线SPI闪存（Flash）。
  * 8MB 八线SPI伪静态随机存储器（PSRAM）。
* **显示与触摸**：
  * 屏幕：5.0英寸TFT LCD液晶显示屏，分辨率800x480。
  * 接口：16位RGB接口，支持高刷新率。
  * 驱动芯片：ST7262E43-G4。
  * 触摸：GT911电容多点触摸，通过I2C总线通信。
* **外设接口**：
  * 通信：USB-C（UART下载/调试）、RS485、CAN、RS232（可选/扩展）。
  * 存储：TF卡卡槽，支持SDIO/SPI模式。
  * 扩展：GPIO排针，包含UART、I2C、SPI及通用IO口，支持外接传感器。

### 1.2 典型应用场景
* 工业人机交互控制面板
* 智能家居控制中心
* 医疗设备与仪器显示
* 物联网数据可视化仪表盘

## 二、硬件说明
### 2.1 模组整体布局
模组元器件详细布局如下：
![电路板布局](image/overview.png)

| 序号 | 元器件                | 功能说明                     |
| ---- | --------------------- | ---------------------------- |
| ①    | ESP32-S3-N16R8        | 主控制芯片（16MB Flash/8MB PSRAM） |
| ②    | USB-C 接口            | 5V供电、固件下载、UART调试（CH340C） |
| ③    | 显示接口              | 40针RGB接口FPC连接器         |
| ④    | 触摸接口              | 6针电容触摸排针（I2C总线）|
| ⑤    | TF卡卡槽              | 外接存储，用于存放图片/日志等 |
| ⑥    | UART/RS485 接口       | 工业串行通信预留焊盘/排针     |
| ⑦    | BOOT 按键             | 上电时按下进入下载模式       |
| ⑧    | RESET 按键            | 硬件系统复位                 |
| ⑨    | 扩展排针              | 提供GPIO、5V、3.3V、GND，支持外接传感器 |

### 2.2 GPIO引脚定义
以下为显示屏、触摸及外设的引脚映射关系：
#### 显示屏（RGB接口）
| 引脚名   | ESP32-S3引脚 | 功能说明       |
| -------- | ------------ | -------------- |
| DE       | IO40         | 数据使能       |
| VSYNC    | IO41         | 垂直同步       |
| HSYNC    | IO39         | 水平同步       |
| PCLK     | IO42         | 像素时钟       |
| R0 - R4  | IO45、48、47、21、14 | 红色数据线路 |
| G0 - G5  | IO5、6、7、15、16、4  | 绿色数据线路 |
| B0 - B4  | IO8、3、46、9、1      | 蓝色数据线路 |
| BL       | IO2          | 背光PWM调节    |

#### 触摸（GT911）
| 引脚名   | ESP32-S3引脚 | 功能说明       |
| -------- | ------------ | -------------- |
| SDA      | IO19         | I2C数据        |
| SCL      | IO20         | I2C时钟        |
| INT      | -       | 中断信号       |
| RST      | IO38         | 复位信号       |

#### 外设接口
| 接口类型 | ESP32-S3引脚          | 功能说明               |
| -------- | --------------------- | ---------------------- |
| UART0    | IO43（TX）、IO44（RX） | USB转UART（调试/下载） |
| SD卡     | IO10（CS）、IO11（MOSI）、IO12（CLK）、IO13（MISO） | SPI/SDIO模式 |
| RGB LED  | IO0                   | WS2812B（可选）|

## 三、软件支持
本产品全面支持**Arduino**、**PlatformIO**、**ESP-IDF** 开发框架，已完成**LVGL** 图形库的移植并提供示例工程。

### 3.1 软件示例工程
示例工程均存放于[GitHub代码仓库](examples)，各框架对应工程如下：

| 开发框架   | 示例工程路径                  | 功能说明                                   |
| ---------- | ----------------------------- | ------------------------------------------ |
| Arduino    | `examples/arduino/gui/lvgl_v8` | LVGL性能测试：演示800x480分辨率界面渲染，可直接在Arduino IDE中打开 |
| ESP-IDF    | `examples/esp_idf/lvgl_port`  | LVGL移植：ESP-IDF框架下LVGL图形库的移植与使用示例 |
| ESP-IDF    | `examples/esp_idf/sd_card_spi`| SD卡使用：设备端SD卡的SPI模式操作示例       |
| PlatformIO | `examples/platformio/lvgl_v8_port` | LVGL v8移植：PlatformIO框架下LVGL v8的使用示例 |

### 3.2 快速上手步骤
#### 3.2.1 准备工作
* 硬件：UEDX80480050E-WB-A 模组、USB-C数据线。
* 软件：VS Code（搭配ESP-IDF v5.3+）、Arduino IDE（v2.0+）或VS Code（搭配PlatformIO）。
* 库文件：Arduino IDE和PlatformIO需安装以下库文件，版本要求如下：

| 库文件名称            | 版本要求                | 功能说明                                   |
| --------------------- | ----------------------- | ------------------------------------------ |
| `ESP32_Display_Panel` | `1.0.3及以上`           | 乐鑫官方库，显示屏驱动必备                 |
| `ESP32_IO_Expander`   | Arduino自动匹配         | `ESP32_Display_Panel`的依赖库，安装时需一并选择 |
| `esp-lib-utils`       | Arduino自动匹配         | `ESP32_Display_Panel`的依赖库，安装时需一并选择 |
| `lvgl`                | `8.4.0`                 | 开源嵌入式图形库                           |

#### 3.2.2 ESP-IDF 环境搭建与使用
1. **打开示例工程**
   * 前往GitHub下载工程代码，点击绿色的「<> Code」按钮下载主分支代码。
   * 使用搭载ESP-IDF插件的VS Code打开示例工程。
2. **编译与烧录**
   * 点击右上角「build」按钮进行代码编译。
   * 将模组通过USB-C线连接至电脑，编译通过后，点击右上角「upload」按钮进行固件烧录。

#### 3.2.3 Arduino 环境搭建与使用（[新手教程](https://github.com/VIEWESMART/VIEWE-Tutorial/blob/main/Arduino%20Tutorial/Arduino%20Getting%20Started%20Tutorial.md)）
1. **安装[Arduino IDE](https://www.arduino.cc/en/software)**
   * 根据操作系统选择对应版本安装。
   * 新手可参考上述新手教程完成基础环境配置。
2. **安装ESP32开发板包**
   * 打开Arduino IDE，进入「文件」>「首选项」。
   * 在「附加开发板管理器网址」中添加以下地址：
   ```
   https://espressif.github.io/arduino-esp32/package_esp32_index.json
   ```
   * 进入「工具」>「开发板」>「开发板管理器」，搜索乐鑫官方的`esp32`，安装**3.0.0及以上**版本。
3. **安装库文件**
   * 进入「项目」>「导入库」>「库管理器」。
   * 搜索乐鑫官方的`ESP32_Display_Panel`，安装**1.0.3及以上**版本，安装时会提示安装依赖库，点击「INSTALL ALL」一键安装。
   * 搜索并安装`lvgl`库，推荐版本**8.4.0**。
4. **打开示例工程**
   * 进入「文件」>「示例」>「ESP32_Display_Panel」。
   * 依次选择「Arduino」>「gui」>「lvgl_v8」>「simple_port」。
5. **选择开发板与参数配置**
   * 开发板：`ESP32S3 Dev Module`。
   * 关键参数设置：
     * 闪存大小（Flash Size）：16MB (128Mb)
     * 分区方案（Partition Scheme）：16M Flash (3MB APP/9.9MB FATFS)
     * 伪静态随机存储器（PSRAM）：**OPI PSRAM**（此项为关键配置，必须正确选择）
6. **配置模组型号宏定义**
   * 打开示例工程中的`esp_panel_board_supported_conf.h`文件。
   * 启用该配置文件：将宏定义`ESP_PANEL_BOARD_DEFAULT_USE_SUPPORTED`修改为`1`。
   * 取消目标模组型号的注释：开启`#define BOARD_VIEWE_UEDX80480050E_WB_A`
   ```c
   ...
   /**
   * @brief 启用已支持的开发板配置标志（0/1）
   *
   * 设置为1启用，设置为0禁用
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
7. **示例工程个性化配置（可选）**
   * 编辑`lvgl_v8_port.h`文件中的宏定义：
     * 若使用**RGB/MIPI-DSI接口**，将`LVGL_PORT_AVOID_TEARING_MODE`修改为`1/2/3`启用防撕裂功能，再将`LVGL_PORT_ROTATION_DEGREE`修改为目标屏幕旋转角度。
     * 若使用其他接口，请勿修改上述两个宏定义。
   * 编辑`lv_conf.h`文件中的宏定义：
     * 若使用**SPI/QSPI接口**，将`LV_COLOR_16_SWAP`修改为`1`。
8. **选择串口端口**
   * 将模组通过USB-C线连接至电脑，等待电脑识别串口。
   * 进入「工具」>「端口」，选择模组对应的串口。
9. **编译与烧录**
   * 点击右上角「√」按钮进行代码编译。
   * 编译通过后，点击右上角「→」按钮进行固件烧录。

> **提示**
> 1. 配置关键：在`esp_panel_board_supported_conf.h`中，务必取消`#define BOARD_VIEWE_UEDX80480050E_WB_A`的注释。
> 2. 互斥配置：不可同时启用`ESP_PANEL_BOARD_DEFAULT_USE_SUPPORTED`和`ESP_PANEL_BOARD_DEFAULT_USE_CUSTOM`。
> 3. 单一配置：不可同时启用多个已支持的模组型号宏定义。

#### 3.2.4 PlatformIO 环境搭建与使用
1. **打开示例工程**
   * 前往GitHub下载工程代码，点击绿色的「<> Code」按钮下载主分支代码。
   * 使用搭载PlatformIO插件的VS Code打开示例工程。
2. **配置PlatformIO工程环境**
   * 示例工程默认使用`BOARD_ESPRESSIF_ESP32_S3_LCD_EV_BOARD_2_V1_5`开发板，需在`platformio.ini`文件的`[platformio]:default_envs`中修改为`BOARD_VIEWE_UEDX80480050E_WB_A`。
3. **示例工程个性化配置（可选）**
   * 编辑`lvgl_v8_port.h`文件中的宏定义：
     * 若使用**RGB/MIPI-DSI接口**，将`LVGL_PORT_AVOID_TEARING_MODE`修改为`1/2/3`启用防撕裂功能，再将`LVGL_PORT_ROTATION_DEGREE`修改为目标屏幕旋转角度。
     * 若使用其他接口，请勿修改上述两个宏定义。
4. **编译与烧录**
   * 点击左侧栏「√」（编译）按钮进行代码编译。
   * 将模组通过USB-C线连接至电脑，编译通过后，点击左侧栏「→」（烧录）按钮进行固件烧录。

## 四、相关文档与资源
* [产品规格书](information/UEDX80480050E-WB-A%20V3.3%20SPEC.pdf)
* [硬件原理图](https://github.com/VIEWESMART/UEDX80480050ESP32-5inch-Touch-Display/blob/main/Schematic/5.0.png)
* [显示屏规格书](information/UE050WV-RB40-L070A.pdf)
* [触摸芯片英文规格书](information/GT911_EN_Datasheet.pdf)
* [触摸芯片中文规格书](information/GT911_CN_Datasheet.pdf)
* [RGB-LED规格书](information/C2843785_RGB%2BLED(Built-in%20IC)_XL-5050RGBC-WS2812B_specification_WJ1123912.PDF)
* [CH340C芯片规格书](information/C84681_USB%20Conversion%20chip_CH340C_specification_WJ1187874.PDF)

## 六、固件烧录（直接下载预编译固件）
1. 打开工程文件中的「tools」文件夹，找到ESP32烧录工具并打开。
2. 选择正确的烧录芯片型号和烧录方式，点击「确定」。按照下图步骤1→2→3→4→5完成固件烧录；若烧录失败，按住模组上的「BOOT-0」按键后重新点击烧录。
3. 烧录文件选择工程文件根目录下「[firmware](./firmware/)」文件夹中的固件，文件夹内有固件版本说明，选择对应版本即可。

<div align="center" width="100%">
    <img src="image/10.png" alt="烧录步骤1">
    <img src="image/11.png" alt="烧录步骤2">
</div>

## 常见问题解答（FAQ）
### Q1：阅读上述教程后，仍不清楚如何搭建编程环境，该如何处理？
### A1：若阅读教程后仍无法完成环境搭建，可参考[VIEWE-FAQ]()文档的详细说明进行配置。

### Q2：打开Arduino IDE时，提示更新库文件，是否需要更新？
### A2：**选择不更新**。不同版本的库文件可能存在兼容性问题，为保证工程正常运行，不建议随意更新库文件。

### Q3：模组上的Uart接口无串口数据输出，是否是模组故障？
### A3：并非故障。工程默认配置将USB接口作为Uart0进行调试输出，板载Uart接口与Uart0共用引脚，未单独配置时无数据输出。

* PlatformIO用户：打开工程的`platformio.ini`文件，将`build_flags = xxx`中的`-D ARDUINO_USB_CDC_ON_BOOT=true`修改为`-D ARDUINO_USB_CDC_ON_BOOT=false`，即可启用板载Uart接口。
  
* Arduino用户：进入「工具」菜单，将「USB CDC On Boot」设置为「Disabled」，即可启用板载Uart接口。

### Q4：模组反复烧录固件失败，该如何解决？
### A4：烧录前**按住模组上的BOOT按键**，保持按键按下状态并点击烧录按钮，即可完成固件烧录。

我可以帮你将这份中文版README的**格式进一步优化**，适配GitHub的显示规范，同时修正文中的小细节，需要吗？
