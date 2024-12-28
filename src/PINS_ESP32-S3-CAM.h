#pragma once

#define DEV_DEVICE_PINS

// LED
#define LED_A 2

// Button
#define BTN_A 0

// SD card
#define SD_SUPPORTED
#define SD_SCK 39
#define SD_MOSI 38 // CMD
#define SD_MISO 40 // D0
#define SD_D1 41
#define SD_D2 14
#define SD_CS 47 // D3

// Camera
#define CAMERA_SUPPORTED
#define CAMERA_PWDN -1
#define CAMERA_RST -1
#define CAMERA_XCLK 15
#define CAMERA_SIOD 4
#define CAMERA_SIOC 5
#define CAMERA_Y9 16
#define CAMERA_Y8 17
#define CAMERA_Y7 18
#define CAMERA_Y6 12
#define CAMERA_Y5 10
#define CAMERA_Y4 8
#define CAMERA_Y3 9
#define CAMERA_Y2 11
#define CAMERA_VSYNC 6
#define CAMERA_HREF 7
#define CAMERA_PCLK 13

// I2C
#define I2C_SUPPORTED
#define I2C_SDA CAMERA_SIOD
#define I2C_SCL CAMERA_SIOC
#define I2C_FREQ 400000UL

// NeoPixel
#define NEOPIXEL 48