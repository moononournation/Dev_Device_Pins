#pragma once

// Check if selected right Board
#if !defined(ESP32) || !defined(CONFIG_IDF_TARGET_ESP32S3)
#error "Please select Board: ESP32S3"
#endif
// Check if enabled USB CDC On Boot
#if !ARDUINO_USB_CDC_ON_BOOT
#error "Please select USB CDC On Boot: Enabled"
#endif

#define DEV_DEVICE_PINS

// Button
#define BTN_A 0

// Battery ADC
#define BAT_ADC 4

// SD card
#define SD_SUPPORTED
#define SD_SCK 41
#define SD_MOSI 39 // CMD
#define SD_MISO 40 // D0
#define SD_CS 38   // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
Arduino_DataBus *bus = new Arduino_ESP32QSPI(9 /* CS */, 10 /* SCK */, 11 /* D0 */, 12 /* D1 */, 13 /* D2 */, 14 /* D3 */);
Arduino_CO5300 *gfx = new Arduino_CO5300(bus, 21 /* RST */, 0 /* rotation */, false /* IPS */, 280, 456, 20 /* col offset 1 */, 0 /* row offset 1 */, 180 /* col_offset2 */, 24 /* row_offset2 */);
#define CANVAS_PREFERRED
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 47
#define I2C_SCL 48
#define I2C_FREQ 400000UL

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_FT5x06          // GT911 / CST_SELF / CST_MUTUAL / ZTW622 / L58 / FT3267 / FT5x06
#define TOUCH_MODULE_ADDR FT5x06_ADDR // CTS328_SLAVE_ADDRESS / L58_SLAVE_ADDRESS / CTS826_SLAVE_ADDRESS / CTS820_SLAVE_ADDRESS / CTS816S_SLAVE_ADDRESS / FT3267_SLAVE_ADDRESS / FT5x06_ADDR / GT911_SLAVE_ADDRESS1 / GT911_SLAVE_ADDRESS2 / ZTW622_SLAVE1_ADDRESS / ZTW622_SLAVE2_ADDRESS
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES -1
#define TOUCH_INT -1
