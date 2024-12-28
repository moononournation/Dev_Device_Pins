#pragma once

#define DEV_DEVICE_PINS

// LED
#define LED_A 38

// Button
#define BTN_A 0
#define BTN_B 21

// Battery ADC
#define BAT_ADC 4


// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
Arduino_DataBus *bus = new Arduino_ESP32QSPI(
    6 /* cs */, 47 /* sck */, 18 /* d0 */, 7 /* d1 */, 48 /* d2 */, 5 /* d3 */);
Arduino_GFX *gfx = new Arduino_RM67162(bus, 17 /* RST */, 3 /* rotation */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 43
#define I2C_SCL 44
#define I2C_FREQ 400000UL
