#pragma once

#define DEV_DEVICE_PINS

// Button
#define BTN_A 0

// SD card
#define SD_SUPPORTED
#define SD_SCK 14
#define SD_MOSI 15 // CMD
#define SD_MISO 16 // D0
#define SD_D1 18
#define SD_D2 17
#define SD_CS 21 // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 48
Arduino_DataBus *bus = new Arduino_ESP32SPI(41 /* DC */, 42 /* CS */, 40 /* SCK */, 45 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
Arduino_ST7789 *gfx = new Arduino_ST7789(
    bus, 39 /* RST */, 0 /* rotation */, true /* IPS */, 172 /* width */, 320 /* height */,
    34 /* col offset 1 */, 0 /* row offset 1 */, 34 /* col offset 2 */, 0 /* row offset 2 */);
#define GFX_SPEED 80000000UL

// NeoPixel
#define NEOPIXEL_SUPPORTED
#define NEOPIXEL_PIN 38
#define NEOPIXEL_DEFAULT_BRIGHTNESS 4 // 1-255
#define NEOPIXEL_WIDTH 1
#define NEOPIXEL_HEIGHT 1
