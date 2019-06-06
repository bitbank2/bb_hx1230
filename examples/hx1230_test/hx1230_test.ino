//
// HX1230 / STE2007 demo
// Copyright (c) 2019 BitBank Software, Inc.
// Written by Larry Bank (bitbank@pobox.com)
//
#include <bb_hx1230.h>

void setup() {
  // put your setup code here, to run once:
//  hx1230Init(uint8_t iReset, uint8_t iLED, uint8_t iCS, uint8_t iClock, uint8_t iData, uint8_t bFlip180, uint8_t bInvert);
 hx1230Init(4, 0xff, 3, 2, 0, 1, 0); // on the ATtiny85, I wired CE to ground, and BL to Vcc, so 3 pins are needed.
 hx1230Backlight(1); // turn on backlight (if connected)
 hx1230Fill(0);      // erase display memory
 
 hx1230WriteString(4, 0, (char *)"HX1230 Demo", FONT_NORMAL, 0);
 hx1230WriteString(0, 1, (char *)" 3 Font Sizes", FONT_SMALL, 0);
 hx1230WriteString(0, 2, (char *)"Possible on an", FONT_SMALL, 0);
 hx1230WriteString(0, 3, (char *)"ATtiny", FONT_LARGE, 0);
 hx1230WriteString(0, 7, (char *)"With 2K of FLASH", FONT_SMALL, 0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
