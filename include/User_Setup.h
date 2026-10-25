#pragma once

#define USER_SETUP_LOADED

#define ST7796_DRIVER
#define TFT_ROTATION 0
#define TFT_WIDTH 320
#define TFT_HEIGHT 480
#define TFT_INVERSION_ON
#define TFT_RGB_ORDER TFT_RGB

#define TFT_MISO -1
#define TFT_MOSI 7
#define TFT_SCLK 6
#define TFT_CS 3
#define TFT_DC 4
#define TFT_RST 5
#define TFT_BL 1

#define TFT_BACKLIGHT_ON HIGH
#define SPI_FREQUENCY 40000000
#define SPI_READ_FREQUENCY 16000000
#define SPI_TOUCH_FREQUENCY 2500000

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT
