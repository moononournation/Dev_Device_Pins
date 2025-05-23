#pragma once

// Check if selected correct board
#if !defined(ESP32) || !defined(CONFIG_IDF_TARGET_ESP32C6)
#error "Please select Board: ESP32C6"
#endif

#define DEV_DEVICE_PINS

// Dev Device init macro
#define DEV_DEVICE_INIT()      \
  {                            \
    pinMode(SD_CS, OUTPUT);    \
    digitalWrite(SD_CS, HIGH); \
  }

// Button
#define BTN_A 9

// SPI
#define SPI_SHARED
#define SPI_SCK 7
#define SPI_MOSI 6
#define SPI_MISO 5

// SD card
#define SD_SUPPORTED
#define SD_CS 4

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 22
Arduino_DataBus *bus = new Arduino_HWSPI(15 /* DC */, 14 /* CS */, 7 /* SCK */, 6 /* MOSI */, 5 /* MISO */);
Arduino_GFX *gfx = new Arduino_ST7789(bus, 21 /* RST */, 1 /* rotation */, true /* IPS */, 172 /* width */, 320 /* height */, 34 /* col offset 1 */, 0 /* row offset 1 */, 34 /* col offset 2 */, 0 /* row offset 2 */);
#define GFX_SPEED 80000000UL

// NeoPixel
#define NEOPIXEL_SUPPORTED
#define NEOPIXEL_PIN 8
#define NEOPIXEL_DEFAULT_BRIGHTNESS 4 // 1-255
#define NEOPIXEL_WIDTH 1
#define NEOPIXEL_HEIGHT 1
