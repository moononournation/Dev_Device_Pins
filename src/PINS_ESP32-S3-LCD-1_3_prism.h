#pragma once

// Check if selected right Board
#if !defined(ESP32) || !defined(CONFIG_IDF_TARGET_ESP32S3)
#error "Please select Board: ESP32S3"
#endif
// Check if disabled USB CDC On Boot
#if ARDUINO_USB_CDC_ON_BOOT
#error "Please select USB CDC On Boot: Disabled"
#endif

#define DEV_DEVICE_PINS

// Battery ADC
#define BAT_ADC 6

// SD card
#define SD_SUPPORTED
#define SD_SCK 21
#define SD_MOSI 18 // CMD
#define SD_MISO 16 // D0
#define SD_CS 17 // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 20
Arduino_DataBus *bus = new Arduino_ESP32SPI(38 /* DC */, 39 /* CS */, 40 /* SCK */, 41 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
Arduino_ST7789 *gfx = new Arduino_ST7789(bus, 42 /* RST */, 6 /* rotation */, true /* IPS */, 240 /* width */, 240 /* height */, 0 /* col offset 1 */, 0 /* row offset 1 */, 0 /* col offset 2 */, 80 /* row offset 2 */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 47
#define I2C_SCL 48
#define I2C_FREQ 400000UL

// NeoPixel
#define NEOPIXEL_SUPPORTED
#define NEOPIXEL_PIN 15
#define NEOPIXEL_DEFAULT_BRIGHTNESS 4 // 1-255
#define NEOPIXEL_WIDTH 1
#define NEOPIXEL_HEIGHT 1
