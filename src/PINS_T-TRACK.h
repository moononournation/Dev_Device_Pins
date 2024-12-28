#pragma once

#define DEV_DEVICE_PINS

// The Dev Device peripheral power control pin needs to be set to HIGH when using the peripheral
#define PERI_POWER 4

#define DEV_DEVICE_INIT()           \
  {                                 \
    pinMode(PERI_POWER, OUTPUT);    \
    digitalWrite(PERI_POWER, HIGH); \
  }

// Button
#define BTN_A 0
#define BTN_B 1
#define BTN_C 2
#define BTN_D 3
#define BTN_E 10

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
Arduino_DataBus *bus = new Arduino_ESP32SPIDMA(7 /* DC */, 9 /* CS */, 5 /* SCK */, 6 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
Arduino_G *g = new Arduino_JD9613(bus, 8 /* RST */);
#define CANVAS
Arduino_Canvas *gfx = new Arduino_Canvas(126 /* width */, 294 /* height */, g, 0, 0, 3);

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 43
#define I2C_SCL 44
#define I2C_FREQ 400000UL
