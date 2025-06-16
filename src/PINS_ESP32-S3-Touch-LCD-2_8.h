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
#define BAT_ADC 8

// SD card
#define SD_SUPPORTED
#define SD_SCK 14
#define SD_MOSI 17 // CMD
#define SD_MISO 16 // D0
// #define SD_D1 18
// #define SD_D2 15
#define SD_CS 21 // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 5
Arduino_DataBus *bus = new Arduino_ESP32SPI(41 /* DC */, 42 /* CS */, 40 /* SCK */, 45 /* MOSI */, -1 /* MISO */);
Arduino_ST7789 *gfx = new Arduino_ST7789(bus, 39 /* RST */, 1 /* rotation */, true /* IPS */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 11
#define I2C_SCL 10
#define I2C_FREQ 400000UL

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_CST_SELF // GT911 / CST_SELF / CST_MUTUAL / ZTW622 / L58 / FT3267 / FT5x06
#define TOUCH_MODULE_ADDR CTS328_SLAVE_ADDRESS // CTS328_SLAVE_ADDRESS / L58_SLAVE_ADDRESS / CTS826_SLAVE_ADDRESS / CTS820_SLAVE_ADDRESS / CTS816S_SLAVE_ADDRESS / FT3267_SLAVE_ADDRESS / FT5x06_ADDR / GT911_SLAVE_ADDRESS1 / GT911_SLAVE_ADDRESS2 / ZTW622_SLAVE1_ADDRESS / ZTW622_SLAVE2_ADDRESS
#define TOUCH_SCL 3
#define TOUCH_SDA 1
#define TOUCH_RES 2
#define TOUCH_INT 4

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 2.0
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK -1
#define I2S_BCLK 48
#define I2S_LRCK 38
#define I2S_DOUT 47
#define I2S_DIN -1
