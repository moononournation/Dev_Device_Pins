#pragma once

// Check if selected right Board
#if !defined(ESP32) || !CONFIG_IDF_TARGET_ESP32S3
#error "Please select Board: ESP32S3"
#endif

// Check if selected right PSRAM option
#if !defined(BOARD_HAS_PSRAM) || !defined(CONFIG_SPIRAM_MODE_OCT)
#error "Please select PSRAM: OPI PSRAM"
#endif

#define DEV_DEVICE_PINS

// The Dev Device peripheral power control pin needs to be set to HIGH when using the peripheral
// #define PERI_POWER 99

// Battery Enable pin
// #define BAT_EN 99

// Dev Device init macro
// #define DEV_DEVICE_INIT()           \
//   {                                 \
//     pinMode(PERI_POWER, OUTPUT);    \
//     digitalWrite(PERI_POWER, HIGH); \
//   }

// LED
// #define LED_A 99

// Button
#define BTN_A 0

// Battery ADC
// #define BAT_ADC 99
// #define BAT_ADC_EN 99

// SPI
// #define SPI_SHARED
// #define SPI_SCK 99
// #define SPI_MOSI 99
// #define SPI_MISO 99

// SD card
#define SD_SUPPORTED
#define SD_SCK 12
#define SD_MOSI 11 // CMD
#define SD_MISO 13 // D0
// #define SD_D1 99
// #define SD_D2 99
#define SD_CS 10 // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 44
Arduino_DataBus *bus = new Arduino_SWSPI(
    GFX_NOT_DEFINED /* DC */, 1 /* CS */,
    12 /* SCK */, 11 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
#define RGB_PANEL
Arduino_ESP32RGBPanel *rgbpanel = new Arduino_ESP32RGBPanel(
    45 /* DE */, 4 /* VSYNC */, 5 /* HSYNC */, 21 /* PCLK */,
    39 /* R0 */, 40 /* R1 */, 41 /* R2 */, 42 /* R3 */, 2 /* R4 */,
    0 /* G0 */, 9 /* G1 */, 14 /* G2 */, 47 /* G3 */, 48 /* G4 */, 3 /* G5 */,
    6 /* B0 */, 7 /* B1 */, 15 /* B2 */, 16 /* B3 */, 8 /* B4 */,
    1 /* hsync_polarity */, 10 /* hsync_front_porch */, 8 /* hsync_pulse_width */, 50 /* hsync_back_porch */,
    1 /* vsync_polarity */, 10 /* vsync_front_porch */, 8 /* vsync_pulse_width */, 20 /* vsync_back_porch */,
    0 /* pclk_active_neg */, 12000000 /* prefer_speed */, false /* useBigEndian */,
    0 /* de_idle_high */, 0 /* pclk_idle_high */, 0 /* bounce_buffer_size_px */);
Arduino_RGB_Display *gfx = new Arduino_RGB_Display(
    480 /* width */, 480 /* height */, rgbpanel, 0 /* rotation */, true /* auto_flush */,
    bus, GFX_NOT_DEFINED /* RST */, st7701_type1_init_operations, sizeof(st7701_type1_init_operations));

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 99
#define I2C_SCL 99
#define I2C_FREQ 400000UL

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_GT911 // GT911 / CST_SELF / CST_MUTUAL / ZTW622 / L58 / FT3267 / FT5x06
#define TOUCH_MODULE_ADDR GT911_SLAVE_ADDRESS1 // CTS328_SLAVE_ADDRESS / L58_SLAVE_ADDRESS / CTS826_SLAVE_ADDRESS / CTS820_SLAVE_ADDRESS / CTS816S_SLAVE_ADDRESS / FT3267_SLAVE_ADDRESS / FT5x06_ADDR / GT911_SLAVE_ADDRESS1 / GT911_SLAVE_ADDRESS2 / ZTW622_SLAVE1_ADDRESS / ZTW622_SLAVE2_ADDRESS
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES -1
#define TOUCH_INT -1

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 0.5
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK -1
#define I2S_BCLK 20
#define I2S_LRCK 46
#define I2S_DOUT 19
#define I2S_DIN -1
