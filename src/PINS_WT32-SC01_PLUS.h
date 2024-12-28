#pragma once

#define DEV_DEVICE_PINS

// SD card
#define SD_SUPPORTED
#define SD_SCK 39
#define SD_MOSI 40 // CMD
#define SD_MISO 38 // D0
#define SD_CS 41 // D3


// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 45
Arduino_DataBus *bus = new Arduino_ESP32LCD8(
    0 /* DC */, GFX_NOT_DEFINED /* CS */, 47 /* WR */, GFX_NOT_DEFINED /* RD */,
    9 /* D0 */, 46 /* D1 */, 3 /* D2 */, 8 /* D3 */, 18 /* D4 */, 17 /* D5 */, 16 /* D6 */, 15 /* D7 */);
Arduino_GFX *gfx = new Arduino_ST7796(bus, 4 /* RST */, 3 /* rotation */, true /* IPS */);
#define GFX_SPEED 40000000UL

// I2C
#define I2C_SDA 6
#define I2C_SCL 5

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_FT5x06
#define TOUCH_MODULE_ADDR FT5x06_ADDR
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES -1
#define TOUCH_INT -1

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 0.01
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK -1
#define I2S_BCLK 36
#define I2S_LRCK 35
#define I2S_DOUT 37
#define I2S_DIN -1
