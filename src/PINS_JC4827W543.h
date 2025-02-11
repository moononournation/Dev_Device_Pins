#pragma once

#define DEV_DEVICE_PINS

// Button
#define BTN_A 0

// SD card
#define SD_SUPPORTED
#define SD_SCK 12
#define SD_MOSI 11 // CMD
#define SD_MISO 13 // D0
#define SD_CS 10 // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 1
Arduino_DataBus *bus = new Arduino_ESP32QSPI(
    45 /* cs */, 47 /* sck */, 21 /* d0 */, 48 /* d1 */, 40 /* d2 */, 39 /* d3 */);
Arduino_NV3041A *gfx = new Arduino_NV3041A(bus, GFX_NOT_DEFINED /* RST */, 0 /* rotation */, true /* IPS */);
#define GFX_SPEED 32000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 8
#define I2C_SCL 4
#define I2C_FREQ 400000UL

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_GT911
#define TOUCH_MODULE_ADDR GT911_SLAVE_ADDRESS1
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES 38
#define TOUCH_INT 3

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 0.5
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK -1
#define I2S_BCLK 42
#define I2S_LRCK 2
#define I2S_DOUT 41
#define I2S_DIN -1
