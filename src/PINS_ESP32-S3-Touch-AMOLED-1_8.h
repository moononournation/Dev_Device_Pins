#pragma once

// Check if selected right Board
#if !defined(ESP32) || !CONFIG_IDF_TARGET_ESP32S3
#error "Please select Board: ESP32S3"
#endif
// Check if enabled USB CDC On Boot
#if !ARDUINO_USB_CDC_ON_BOOT
#error "Please select USB CDC On Boot: Enabled"
#endif

#define DEV_DEVICE_PINS

// Button
#define BTN_A 0

// SD card
#define SD_SUPPORTED
#define SD_SCK 2
#define SD_MOSI 1 // CMD
#define SD_MISO 3 // D0
#define SD_CS -1  // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
Arduino_DataBus *bus = new Arduino_ESP32QSPI(12 /* CS */, 11 /* SCK */, 4 /* D0 */, 5 /* D1 */, 6 /* D2 */, 7 /* D3 */);
Arduino_SH8601 *gfx = new Arduino_SH8601(bus, GFX_NOT_DEFINED /* RST */, 0 /* rotation */, 368 /* width */, 448 /* height */, 0 /* col offset 1 */, 0 /* row offset 1 */, 0 /* col_offset2 */, 0 /* row_offset2 */);
#define CANVAS_PREFERRED
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 15
#define I2C_SCL 14
#define I2C_FREQ 100000UL

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_FT3267                   // GT911 / CST_SELF / CST_MUTUAL / ZTW622 / L58 / FT3267 / FT5x06
#define TOUCH_MODULE_ADDR FT3267_SLAVE_ADDRESS // CTS328_SLAVE_ADDRESS / L58_SLAVE_ADDRESS / CTS826_SLAVE_ADDRESS / CTS820_SLAVE_ADDRESS / CTS816S_SLAVE_ADDRESS / FT3267_SLAVE_ADDRESS / FT5x06_ADDR / GT911_SLAVE_ADDRESS1 / GT911_SLAVE_ADDRESS2 / ZTW622_SLAVE1_ADDRESS / ZTW622_SLAVE2_ADDRESS
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES -1
#define TOUCH_INT 21

#if __has_include("es8311.h")
// Audio
#include <Wire.h>
#define AUDIO_EXTRA_PRE_INIT()                  \
  {                                             \
    pinMode(46 /* PA CTRL */, OUTPUT);          \
    digitalWrite(46 /* PA CTRL */, HIGH);       \
    Wire.begin(I2C_SDA, I2C_SCL);               \
    es8311_codec_config(AUDIO_HAL_44K_SAMPLES); \
    es8311_codec_set_voice_volume(80);          \
  }

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 0.5
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK 16
#define I2S_BCLK 9
#define I2S_LRCK 45
#define I2S_DOUT 8
#define I2S_DIN 10
#endif // __has_include("es8311.h")