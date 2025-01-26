#pragma once

#define DEV_DEVICE_PINS

// Dev Device init macro
#include <Wire.h>
#include <Adafruit_AW9523.h>
Adafruit_AW9523 aw;
#define DEV_DEVICE_INIT()                      \
  {                                            \
    Wire.begin(6 /* SDA */, 5 /* SCL */);      \
    aw.begin(0x59);                            \
    aw.pinMode(8, OUTPUT);     /* LCD_LEDK */  \
    aw.pinMode(9, OUTPUT);     /* LCD_LEDK */  \
    aw.pinMode(10, OUTPUT);    /* LCD_LEDK */  \
    aw.pinMode(11, OUTPUT);    /* LCD_LEDK */  \
    aw.pinMode(14, OUTPUT);    /* LCD_RST */   \
    aw.digitalWrite(8, LOW);   /* LCD_LEDK */  \
    aw.digitalWrite(9, LOW);   /* LCD_LEDK */  \
    aw.digitalWrite(10, LOW);  /* LCD_LEDK */  \
    aw.digitalWrite(11, LOW);  /* LCD_LEDK */  \
    aw.digitalWrite(14, LOW);  /* LCD_RST */   \
    delay(200);                /* RST delay */ \
    aw.digitalWrite(14, HIGH); /* LCD_RST */   \
  }
// Button
#define BTN_A 0

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
Arduino_DataBus *bus = new Arduino_ESP32LCD8(
    45 /* DC */, GFX_NOT_DEFINED /* CS */, 10 /* WR */, GFX_NOT_DEFINED /* RD */,
    9 /* D0 */, 4 /* D1 */, 3 /* D2 */, 8 /* D3 */, 18 /* D4 */, 17 /* D5 */, 16 /* D6 */, 15 /* D7 */);
Arduino_ST7796 *gfx = new Arduino_ST7796(bus, GFX_NOT_DEFINED /* RST */, 3 /* rotation */, true /* IPS */);
#define GFX_SPEED 40000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 6
#define I2C_SCL 5
#define I2C_FREQ 400000UL

// Touchscreen
// #define TOUCH_SUPPORTED
#define TOUCH_MODULES_FT5x06
#define TOUCH_MODULE_ADDR FT5x06_ADDR
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES -1
#define TOUCH_INT 7

// Audio
#include <es8311.h>
#define AUDIO_EXTRA_PRE_INIT()                  \
  {                                             \
    aw.pinMode(13, OUTPUT);    /* ES_CTRL */    \
    aw.digitalWrite(13, HIGH); /* ES_CTRL */    \
    es8311_codec_config(AUDIO_HAL_44K_SAMPLES); \
    es8311_codec_set_voice_volume(60);          \
  }

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 0.5
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK 41
#define I2S_BCLK 21
#define I2S_LRCK 14
#define I2S_DOUT 12
#define I2S_DIN 13
