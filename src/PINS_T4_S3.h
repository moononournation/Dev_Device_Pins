#pragma once

#define DEV_DEVICE_PINS

// The Dev Device peripheral power control pin needs to be set to HIGH when using the peripheral
#define PERI_POWER 9

// Dev Device init macro
#define DEV_DEVICE_INIT()           \
  {                                 \
    pinMode(PERI_POWER, OUTPUT);    \
    digitalWrite(PERI_POWER, HIGH); \
  }

// LED
// #define LED_A 99

// Button
#define BTN_A 0

// Battery ADC
// #define BAT_ADC 4

// SD card
#define SD_SUPPORTED
#define SD_SCK 3
#define SD_MOSI 2 // CMD
#define SD_MISO 4 // D0
#define SD_CS 1   // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
Arduino_DataBus *bus = new Arduino_ESP32QSPI(
    11 /* CS */, 15 /* SCK */, 14 /* D0 */, 10 /* D1 */, 16 /* D2 */, 12 /* D3 */);
Arduino_RM690B0 *gfx = new Arduino_RM690B0(bus, 13 /* RST */, 0 /* rotation */, 450 /* width */, 600 /* height */, 16 /* col offset 1 */, 0 /* row offset 1 */, 16 /* col offset 2 */, 0 /* row offset 2 */);
#define CANVAS_PREFERRED
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 6
#define I2C_SCL 7
#define I2C_FREQ 400000UL

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_CST_MUTUAL            // GT911 / CST_SELF / CST_MUTUAL / ZTW622 / L58 / FT3267 / FT5x06
#define TOUCH_MODULE_ADDR L58_SLAVE_ADDRESS // CTS328_SLAVE_ADDRESS / L58_SLAVE_ADDRESS / CTS826_SLAVE_ADDRESS / CTS820_SLAVE_ADDRESS / CTS816S_SLAVE_ADDRESS / FT3267_SLAVE_ADDRESS / FT5x06_ADDR / GT911_SLAVE_ADDRESS1 / GT911_SLAVE_ADDRESS2 / ZTW622_SLAVE1_ADDRESS / ZTW622_SLAVE2_ADDRESS
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES 17
#define TOUCH_INT 8
