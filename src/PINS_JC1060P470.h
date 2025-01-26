#pragma once

#define DEV_DEVICE_PINS

// LED
// #define LED_A 99

// Button
#define BTN_A 0

// Battery ADC
#define BAT_ADC 52

// SD card
#define SD_SUPPORTED
#define SD_SCK 43
#define SD_MOSI 44 // CMD
#define SD_MISO 39 // D0
#define SD_D1 40
#define SD_D2 41
#define SD_CS 42 // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 23
#define DSI_PANEL
Arduino_ESP32DSIPanel *dsipanel = new Arduino_ESP32DSIPanel(
    40 /* hsync_pulse_width */, 160 /* hsync_back_porch */, 160 /* hsync_front_porch */,
    10 /* vsync_pulse_width */, 23 /*vsync_back_porch  */, 12 /* vsync_front_porch */);
Arduino_DSI_Display *gfx = new Arduino_DSI_Display(
    1024 /* width */, 600 /* height */, dsipanel, 0 /* rotation */, true /* auto_flush */,
    27 /* RST */, jd9165_init_operations, sizeof(jd9165_init_operations) / sizeof(lcd_init_cmd_t));
#define GFX_SPEED 48000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 7
#define I2C_SCL 8
#define I2C_FREQ 400000UL

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_GT911                    // GT911 / CST_SELF / CST_MUTUAL / ZTW622 / L58 / FT3267 / FT5x06
#define TOUCH_MODULE_ADDR GT911_SLAVE_ADDRESS1 // CTS328_SLAVE_ADDRESS / L58_SLAVE_ADDRESS / CTS826_SLAVE_ADDRESS / CTS820_SLAVE_ADDRESS / CTS816S_SLAVE_ADDRESS / FT3267_SLAVE_ADDRESS / FT5x06_ADDR / GT911_SLAVE_ADDRESS1 / GT911_SLAVE_ADDRESS2 / ZTW622_SLAVE1_ADDRESS / ZTW622_SLAVE2_ADDRESS
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES 22
#define TOUCH_INT 21

// NeoPixel
#define NEOPIXEL 26

// Audio
#define AUDIO_MUTE 20 // HIGH for unmute
#include <Wire.h>
#include <es8311.h>
#define AUDIO_EXTRA_PRE_INIT()                  \
  {                                             \
    Wire.begin(I2C_SDA, I2C_SCL);               \
    es8311_codec_config(AUDIO_HAL_44K_SAMPLES); \
    es8311_codec_set_voice_volume(60);          \
  }

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 0.5
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK 13
#define I2S_BCLK 12
#define I2S_LRCK 10
#define I2S_DOUT 9
#define I2S_DIN 11

// SDIO
#define SDIO_SUPPORT
#define SDIO_SCK 18
#define SDIO_CMD 19
#define SDIO_D0 14
#define SDIO_D1 15
#define SDIO_D2 16
#define SDIO_D3 17

// SDIO WiFi
#define SDIO_WIFI_SUPPORT
#define SDIO_WIFI_EN 54
