#pragma once

// Check if selected right Board
#if !defined(ESP32) || !CONFIG_IDF_TARGET_ESP32S3
#error "Please select Board: ESP32S3"
#endif
// Check if disabled USB CDC On Boot
#if ARDUINO_USB_CDC_ON_BOOT
#error "Please select USB CDC On Boot: Disabled"
#endif

#define DEV_DEVICE_PINS

// Button
#define BTN_A 0

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 14
Arduino_DataBus *bus = new Arduino_ESP32SPI(11 /* DC */, 10 /* CS */, 12 /* SCK */, 13 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
Arduino_ST7789 *gfx = new Arduino_ST7789(bus, 1 /* RST */, 0 /* rotation */, true /* IPS */, 170 /* width */, 320 /* height */, 35 /* col offset 1 */, 0 /* row offset 1 */, 35 /* col offset 2 */, 0 /* row offset 2 */);
#define GFX_SPEED 80000000UL
