#pragma once

// Check if selected right Board
#if !defined(PICO_RP2350)
#error "Please select Board: RP2350"
#endif

#define DEV_DEVICE_PINS

// LED
#define LED_A 25

// Button
#define BTN_A 21
#define BTN_B 20
#define BTN_SELECT 16
#define BTN_START 17
#define BTN_UP 0
#define BTN_DOWN 1
#define BTN_LEFT 2
#define BTN_RIGHT 3

// Battery ADC
#define BAT_ADC 29
#define BAT_ADC_EN 19

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 12
Arduino_DataBus *bus = new Arduino_RPiPicoSPI(9 /* DC */, 5 /* CS */, 6 /* SCK */, 7 /* MOSI */, GFX_NOT_DEFINED /* MISO */, spi0 /* spi */);
Arduino_GFX *gfx = new Arduino_ST7789(bus, 4 /* RST */, 0 /* rotation */, true /* IPS */, 240 /* width */, 240 /* height */, 0 /* col offset 1 */, 0 /* row offset 1 */, 0 /* col offset 2 */, 80 /* row offset 2 */);
#define GFX_SPEED 80000000UL

// NeoPixel
#define NEOPIXEL_SUPPORTED
#define NEOPIXEL_PIN 22
#define NEOPIXEL_DEFAULT_BRIGHTNESS 4 // 1-255
#define NEOPIXEL_WIDTH 1
#define NEOPIXEL_HEIGHT 1
