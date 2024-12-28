#pragma once

#define DEV_DEVICE_PINS

// Button
#define BTN_A 0
#define BTN_B 47

// Battery ADC
#define BAT_ADC 4

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 10
Arduino_DataBus *bus = new Arduino_ESP32SPI(6 /* DC */, 5 /* CS */, 3 /* SCK */, 2 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
Arduino_GFX *gfx = new Arduino_GC9107(bus, 1 /* RST */, 2 /* rotation */, true /* IPS */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 44
#define I2C_SCL 43
#define I2C_FREQ 400000UL
