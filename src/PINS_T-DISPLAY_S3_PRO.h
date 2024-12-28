#pragma once

#define DEV_DEVICE_PINS

// T-Display-S3-Pro-MVSRBoard
// RT9080
#define RT9080_EN 42

// AW8624
#define AW8624_TRIG_INT 40

// Vibration Motor
#define VIBRATINO_MOTOR_PWM 45

// MAX98357A
#define MAX98357A_BCLK 4
#define MAX98357A_LRCLK 15
#define MAX98357A_DIN 11
#define MAX98357A_SD_MODE 41

// MSM261
#define MSM261_WS 10
#define MSM261_BCLK 1
#define MSM261_DOUT 2
#define MSM261_EN 3

// CST226SE
#define TOUCH_RST 13
#define TOUCH_INT 21

// PCF85063
#define PCF85063_INT 7

// SY6970
#define SY6970_Address 0x6A
#define SY6970_INT 21

// Dev Device init macro
#define DEV_DEVICE_INIT()          \
  {                                \
    pinMode(RT9080_EN, OUTPUT);    \
    digitalWrite(RT9080_EN, HIGH); \
  }

// Button
#define BTN_A 0
#define BTN_B 12
#define BTN_C 16

// SPI
#define SPI_SHARED
#define SPI_SCK 18
#define SPI_MOSI 17
#define SPI_MISO 8

// SD card
#define SD_CS 14 // D3

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 48
Arduino_DataBus *bus = new Arduino_HWSPI(9 /* DC */, 39 /* CS */, SPI_SCK /* SCK */, SPI_MOSI /* MOSI */, SPI_MISO /* MISO */);
Arduino_GFX *gfx = new Arduino_ST7796(bus, 47 /* RST */, 3 /* rotation */, true /* IPS */, 222 /* width */, 480 /* height */, 49 /* col offset 1 */, 0 /* row offset 1 */, 49 /* col offset 2 */, 0 /* row offset 2 */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 5
#define I2C_SCL 6
#define I2C_FREQ 400000UL

// I2S enable pin
#define I2S_EN MAX98357A_SD_MODE // HIGH for enable, LOW for mute

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 0.5
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK -1
#define I2S_BCLK MAX98357A_BCLK
#define I2S_LRCK MAX98357A_LRCLK
#define I2S_DOUT MAX98357A_DIN
#define I2S_DIN -1
