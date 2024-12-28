#pragma once

#define DEV_DEVICE_PINS

// Dev Device init macro
#define DEV_DEVICE_INIT()                \
  {                                      \
    pinMode(16 /* LCD_EN */, OUTPUT);    \
    digitalWrite(16 /* LCD_EN */, HIGH); \
  }

// Button
#define BTN_A 0

// Battery ADC
#define BAT_ADC 4

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
Arduino_DataBus *bus = new Arduino_ESP32QSPI(
    10 /* CS */, 12 /* SCK */, 11 /* D0 */, 13 /* D1 */, 14 /* D2 */, 15 /* D3 */);
Arduino_CO5300 *g = new Arduino_CO5300(bus, 17 /* RST */, 0 /* rotation */, false /* IPS */, 280, 456,
                                       20 /* col offset 1 */, 0 /* row offset 1 */, 180 /* col_offset2 */, 24 /* row_offset2 */);
#define CANVAS
Arduino_Canvas *gfx = new Arduino_Canvas(280 /* width */, 456 /* height */, g, 0 /* output_x */, 0 /* output_y */, 1 /* rotation */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 7
#define I2C_SCL 6
#define I2C_FREQ 400000UL
