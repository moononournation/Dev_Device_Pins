#pragma once

#define DEV_DEVICE_PINS

// The Dev Device peripheral power control pin needs to be set to HIGH when using the peripheral
#define PERI_POWER 10

// Dev Device init macro
#define DEV_DEVICE_INIT()           \
  {                                 \
    pinMode(SD_CS, OUTPUT);         \
    digitalWrite(SD_CS, HIGH);      \
    pinMode(LORA_CS, OUTPUT);       \
    digitalWrite(LORA_CS, HIGH);    \
    pinMode(GFX_CS, OUTPUT);        \
    digitalWrite(GFX_CS, HIGH);     \
    pinMode(PERI_POWER, OUTPUT);    \
    digitalWrite(PERI_POWER, HIGH); \
    delay(500);                     \
  }

// Button
#define BTN_A 0

// Battery ADC
#define BAT_ADC 4

// SPI
#define SPI_SHARED
#define SPI_SCK 40
#define SPI_MOSI 41
#define SPI_MISO 38

// SD card
#define SD_SUPPORTED
#define SD_CS 39 // D3

// Lora
#define LORA_SUPPORTED
#define LORA_CS 9
#define LORA_BUSY 13
#define LORA_RST 17
#define LORA_DIO1 45

// Display
#define GFX_SUPPORTED
#include <Arduino_GFX_Library.h>
#define GFX_BL 42
#define GFX_CS 12
Arduino_DataBus *bus = new Arduino_HWSPI(11 /* DC */, GFX_CS, SPI_SCK, SPI_MOSI, SPI_MISO);
Arduino_ST7789 *gfx = new Arduino_ST7789(bus, GFX_NOT_DEFINED /* RST */, 1 /* rotation */, true /* IPS */);
#define GFX_SPEED 80000000UL

// I2C
#define I2C_SUPPORTED
#define I2C_SDA 18
#define I2C_SCL 8
#define I2C_FREQ 800000UL

// Touchscreen
#define TOUCH_SUPPORTED
#define TOUCH_MODULES_GT911                    // GT911 / CST_SELF / CST_MUTUAL / ZTW622 / L58 / FT3267 / FT5x06
#define TOUCH_MODULE_ADDR GT911_SLAVE_ADDRESS1 // CTS328_SLAVE_ADDRESS / L58_SLAVE_ADDRESS / CTS826_SLAVE_ADDRESS / CTS820_SLAVE_ADDRESS / CTS816S_SLAVE_ADDRESS / FT3267_SLAVE_ADDRESS / FT5x06_ADDR / GT911_SLAVE_ADDRESS1 / GT911_SLAVE_ADDRESS2 / ZTW622_SLAVE1_ADDRESS / ZTW622_SLAVE2_ADDRESS
#define TOUCH_SCL I2C_SCL
#define TOUCH_SDA I2C_SDA
#define TOUCH_RES -1
#define TOUCH_INT 16

// I2S output
#define I2S_OUTPUT
#define I2S_DEFAULT_GAIN_LEVEL 0.5
#define I2S_OUTPUT_NUM I2S_NUM_0
#define I2S_MCLK -1
#define I2S_BCLK 7
#define I2S_LRCK 5
#define I2S_DOUT 6
#define I2S_DIN -1

// I2S input
#define ES7210_MCLK 48
#define ES7210_LRCK 21
#define ES7210_SCK 47
#define ES7210_DIN 14

// T-Deck Keyboard
#define TDECK_KEYBOARD_INT 46
#define TDECK_KEYBOARD_ADDR 0x55

// T-Deck Trackball
#define TDECK_TRACKBALL_UP 3
#define TDECK_TRACKBALL_DOWN 15
#define TDECK_TRACKBALL_LEFT 1
#define TDECK_TRACKBALL_RIGHT 2
