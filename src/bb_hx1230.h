//
// HX1230/STE2007 LCD display library
// written by Larry Bank
// Copyright (c) 2018-2019 BitBank Software, Inc.
// Project started 2/23/2018
//
#ifndef __BB_HX1230__
#define __BB_HX1230__

#define FONT_NORMAL 0
#define FONT_SMALL 1
#define FONT_LARGE 2

//
// Uncomment this define to allow the pixel functions to work
// It requires an extra 1024 bytes of memory (rare on Arduinos)
//
// #define BACKING_RAM

//
// Load a 96x68 1-bpp Windows bitmap
//
int hx1230LoadBMP(byte *pBMP);
//
// Power up the display
//
void hx1230PowerUp(void);
//
// Set the display into low power mode
//
void hx1230PowerDown(void);
//
// Initializes the LCD controller into "horizontal write mode"
// Prepares the font data for the orientation of the display
// Parameters: GPIO pin numbers used for the DC/RST/LED control lines
// If not using the LED backlight or chip select, set them to -1
//
void  hx1230Init(uint8_t iReset, uint8_t iLED, uint8_t iCS, uint8_t iClock, uint8_t iData, uint8_t bFlip180, uint8_t bInvert);
//
// Fill the display with a byte pattern
//
void hx1230Fill(uint8_t pattern);
//
// Enable and power up the LCD
//
void hx1230PowerUp(void);
//
// Controls the LED backlight
//
void hx1230Backlight(uint8_t bOn);
//
// Set the contrast value (0 = min, 15 = max)
//
int hx1230SetContrast(uint8_t ucContrast);
//
// Set (or clear) an individual pixel
// The local copy of the frame buffer is used to avoid
// reading data from the display controller
//
int hx1230SetPixel(uint8_t x, uint8_t y, uint8_t ucColor);
//
// Read the pixel at the given x,y
// if the library is not initialized, or the coordinates are
// not within the valid range, it returns 0
//
int hx1230GetPixel(uint8_t x, uint8_t y);
//
// Draw a string of normal (8x8), small (6x8) or large (16x24) characters
// At the given col+row
//
int hx1230WriteString(uint8_t x, uint8_t y, char *szMsg, uint8_t iSize, uint8_t bInverted);
#endif // __BB_HX1230__

