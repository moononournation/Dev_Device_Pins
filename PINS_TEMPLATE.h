#pragma once

#define DEV_DEVICE_PINS

// The Dev Device peripheral power control pin needs to be set to HIGH when using the peripheral
// #define PERI_POWER 99

// Dev Device init macro
// #define DEV_DEVICE_INIT()           \
//   {                                 \
//     pinMode(PERI_POWER, OUTPUT);    \
//     digitalWrite(PERI_POWER, HIGH); \
//   }

// LED
// #define LED_A 99

// Button
#define BTN_A 0

// Battery ADC
// #define BAT_ADC 4

// SPI
// #define SPI_SHARED
// #define SPI_SCK 99
// #define SPI_MOSI 99
// #define SPI_MISO 99

// SD card
// #define SD_SUPPORTED
// #define SD_SCK 99
// #define SD_MOSI 99 // CMD
// #define SD_MISO 99 // D0
// #define SD_D1 99
// #define SD_D2 99
// #define SD_CS 99 // D3

// Lora
// #define LORA_SUPPORTED
// #define LORA_SCK 99
// #define LORA_MOSI 99
// #define LORA_MISO 99
// #define LORA_CS 99
// #define LORA_BUSY 99
// #define LORA_RST 99
// #define LORA_DIO1 99

// Display
// #define GFX_SUPPORTED
// #include <Arduino_GFX_Library.h>
// #define GFX_BL 99
// Arduino_DataBus *bus = new Arduino_HWSPI(99 /* DC */, -1 /* CS */, 99 /* SCK */, 99 /* MOSI */, 99 /* MISO */);
// Arduino_ILI9341 *gfx = new Arduino_ILI9341(bus, -1 /* RST */, 0 /* rotation */);
// #define GFX_SPEED 40000000UL

// Camera
// #define CAMERA_SUPPORTED
// #define CAMERA_PWDN -1
// #define CAMERA_RST -1
// #define CAMERA_XCLK 99
// #define CAMERA_SIOD 99
// #define CAMERA_SIOC 99
// #define CAMERA_Y9 99
// #define CAMERA_Y8 99
// #define CAMERA_Y7 99
// #define CAMERA_Y6 99
// #define CAMERA_Y5 99
// #define CAMERA_Y4 99
// #define CAMERA_Y3 99
// #define CAMERA_Y2 99
// #define CAMERA_VSYNC 99
// #define CAMERA_HREF 99
// #define CAMERA_PCLK 99

// I2C
// #define I2C_SUPPORTED
// #define I2C_SDA 99
// #define I2C_SCL 99
// #define I2C_FREQ 400000UL

// SSD1306
// #define I2C_SSD1306_DISPLAY
// #define I2C_SSD1306_ADDRESS 0x3c

// Touchscreen
// #define TOUCH_SUPPORTED
// #define TOUCH_MODULES_GT911 // GT911 / CST_SELF / CST_MUTUAL / ZTW622 / L58 / FT3267 / FT5x06
// #define TOUCH_MODULE_ADDR GT911_SLAVE_ADDRESS1 // CTS328_SLAVE_ADDRESS / L58_SLAVE_ADDRESS / CTS826_SLAVE_ADDRESS / CTS820_SLAVE_ADDRESS / CTS816S_SLAVE_ADDRESS / FT3267_SLAVE_ADDRESS / FT5x06_ADDR / GT911_SLAVE_ADDRESS1 / GT911_SLAVE_ADDRESS2 / ZTW622_SLAVE1_ADDRESS / ZTW622_SLAVE2_ADDRESS
// #define TOUCH_SCL I2C_SCL
// #define TOUCH_SDA I2C_SDA
// #define TOUCH_RES -1
// #define TOUCH_INT -1

// NeoPixel
// #define NEOPIXEL 99

// Audio
// #define AUDIO_MUTE 99 // HIGH for unmute
// #include <Wire.h>
// #include <es8311.h>
// #define AUDIO_EXTRA_PRE_INIT()                  \
//   {                                             \
//     pinMode(99, OUTPUT);                        \
//     digitalWrite(99, HIGH);                     \
//     Wire.begin(I2C_SDA, I2C_SCL);               \
//     es8311_codec_config(AUDIO_HAL_44K_SAMPLES); \
//     es8311_codec_set_voice_volume(60);          \
//   }

// I2S output
// #define I2S_OUTPUT
// #define I2S_DEFAULT_GAIN_LEVEL 0.5
// #define I2S_OUTPUT_NUM I2S_NUM_0
// #define I2S_MCLK -1
// #define I2S_BCLK 99
// #define I2S_LRCK 99
// #define I2S_DOUT 99
// #define I2S_DIN -1

// Motor
// #define MOTOR
// #define MOTOR_R_A 99
// #define MOTOR_R_B 99
// #define MOTOR_L_A 99
// #define MOTOR_L_B 99

// Servo 360 Motor
// #define SERVO360MOTOR
// #define SERVO360_REVERSE
// #define SERVO360_L 4
// #define SERVO360_R 2
