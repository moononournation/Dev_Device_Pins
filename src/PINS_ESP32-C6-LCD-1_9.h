#pragma once

// Check if selected right Board
#if !defined(ESP32) || !defined(CONFIG_IDF_TARGET_ESP32C6)
#error "Please select Board: ESP32C6"
#endif
// Check if enabled USB CDC On Boot
#if !ARDUINO_USB_CDC_ON_BOOT
#error "Please select USB CDC On Boot: Enabled"
#endif

#define DEV_DEVICE_PINS

// Dev Device init macro
#define DEV_DEVICE_INIT()                   \
    {                                       \
        pinMode(15 /* LCD_BL */, OUTPUT);   \
        digitalWrite(15 /* LCD_BL */, LOW); \
    }

// Button
#define BTN_A 9

// Battery ADC
#define BAT_ADC 0

// SPI
#define SPI_SHARED
#define SPI_SCK 5
#define SPI_MOSI 4
#define SPI_MISO 19

// SD card
#define SD_SUPPORTED
#define SD_CS 20

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
Arduino_DataBus *bus = new Arduino_HWSPI(6 /* DC */, 7 /* CS */, 5 /* SCK */, 4 /* MOSI */, 19 /* MISO */);
Arduino_ST7789 *gfx = new Arduino_ST7789(bus, 14 /* RST */, 1 /* rotation */, true /* IPS */, 170 /* width */, 320 /* height */, 35 /* col offset 1 */, 0 /* row offset 1 */, 35 /* col offset 2 */, 0 /* row offset 2 */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 18
#define I2C_SCL 8
#define I2C_FREQ 400000UL

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_CST_SELF // GT911 / CST_SELF / CST_MUTUAL / ZTW622 / L58 / FT3267 / FT5x06
#define TOUCH_MODULE_ADDR CTS816S_SLAVE_ADDRESS // CTS328_SLAVE_ADDRESS / L58_SLAVE_ADDRESS / CTS826_SLAVE_ADDRESS / CTS820_SLAVE_ADDRESS / CTS816S_SLAVE_ADDRESS / FT3267_SLAVE_ADDRESS / FT5x06_ADDR / GT911_SLAVE_ADDRESS1 / GT911_SLAVE_ADDRESS2 / ZTW622_SLAVE1_ADDRESS / ZTW622_SLAVE2_ADDRESS
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES -1
#define TOUCH_INT -1

// NeoPixel
#define NEOPIXEL_SUPPORTED
#define NEOPIXEL_PIN 3
#define NEOPIXEL_DEFAULT_BRIGHTNESS 4 // 1-255
#define NEOPIXEL_WIDTH 1
#define NEOPIXEL_HEIGHT 2
