#pragma once

#define DEV_DEVICE_PINS

// Button
#define BTN_A 0

// SD card
#define SD_SUPPORTED
#define SD_SCK 4
#define SD_MOSI 3 // CMD
#define SD_MISO 5 // D0
#define SD_D1 6
#define SD_D2 1
#define SD_CS 2 // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 17
Arduino_DataBus *bus = new Arduino_ESP32SPI(8 /* DC */, 9 /* CS */, 10 /* SCK */, 11 /* MOSI */, GFX_NOT_DEFINED /* MISO */, HSPI /* spi_num */);
Arduino_ST7789 *gfx = new Arduino_ST7789(bus, 12 /* RST */, 1 /* rotation */, true /* IPS */, 240 /* width */, 288 /* height */, 0 /* col offset 1 */, 20 /* row offset 1 */, 0 /* col offset 2 */, 12 /* row offset 2 */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 14
#define I2C_SCL 13
#define I2C_FREQ 400000UL

// Touchscreen
// #define TOUCH_SUPPORTED
#define TOUCH_MODULES_CST_SELF
#define TOUCH_MODULE_ADDR CTS826_SLAVE_ADDRESS
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES 15
#define TOUCH_INT 16

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 0.5
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK -1
#define I2S_BCLK 34
#define I2S_LRCK 35
#define I2S_DOUT 33
#define I2S_DIN -1
