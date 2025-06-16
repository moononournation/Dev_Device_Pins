#pragma once

// Check if selected right Board
#if !defined(ESP32) || !defined(CONFIG_IDF_TARGET_ESP32S3)
#error "Please select Board: ESP32S3"
#endif

#define DEV_DEVICE_PINS

// Button
#define BTN_A 0

// NeoPixel
#define NEOPIXEL_SUPPORTED
#define NEOPIXEL_PIN 14
#define NEOPIXEL_DEFAULT_BRIGHTNESS 7 // 1-255
#define NEOPIXEL_WIDTH 8
#define NEOPIXEL_HEIGHT 8
