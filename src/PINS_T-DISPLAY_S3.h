#pragma once

#define DEV_DEVICE_PINS

// The Dev Device peripheral power control pin needs to be set to HIGH when using the peripheral
#define PERI_POWER 15

// Dev Device init macro
#define DEV_DEVICE_INIT()           \
  {                                 \
    pinMode(PERI_POWER, OUTPUT);    \
    digitalWrite(PERI_POWER, HIGH); \
  }

// Button
#define BTN_A 0
#define BTN_B 14

// Battery ADC
#define BAT_ADC 4

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 38
Arduino_DataBus *bus = new Arduino_ESP32PAR8Q(
    7 /* DC */, 6 /* CS */, 8 /* WR */, 9 /* RD */,
    39 /* D0 */, 40 /* D1 */, 41 /* D2 */, 42 /* D3 */, 45 /* D4 */, 46 /* D5 */, 47 /* D6 */, 48 /* D7 */);
Arduino_GFX *gfx = new Arduino_ST7789(bus, 5 /* RST */, 3 /* rotation */, true /* IPS */, 170 /* width */, 320 /* height */, 35 /* col offset 1 */, 0 /* row offset 1 */, 35 /* col offset 2 */, 0 /* row offset 2 */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 43
#define I2C_SCL 44
#define I2C_FREQ 400000UL
