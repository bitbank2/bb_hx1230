bb_hx1230 (BitBank HX1230 LCD library)<br>
Project started 4/30/2018<br>
Copyright (c) 2018-2019 BitBank Software, Inc.<br>
Written by Larry Bank<br>
bitbank@pobox.com<br>
<br>
![bb_hx1230](/demo.jpg?raw=true "bb_hx1230")
<br>
The purpose of this code is to easily control HX1230 / STE2007 LCD
displays using a minimum of FLASH and RAM. The code assumes the display
is connected via a 3-wire SPI interface. Since the hardware SPI doesn't
support 3-wire, 9-bit mode, the data must be bit-banged on GPIO lines.
The general case uses the wire library to bit bang the protocol. The default
wire library is somewhat slow because of it's bounds checking. On ATtiny85
MCUs, I added a special case to directly access the I/O ports since there is
only one data port (PORTB). If speed is an issue more than code size, my
FastIO library can be used to speed up bit banging on all AVR MCUs.<br>

Features:<br>
---------<br>
- Drives the display from any 2 GPIO pins (clock + data) and optional RESET/CE/Backlight
- 4 sizes of fixed fonts (6x8, 8x8, 16x16, 16x32)<br>
- a function to load a 96x68 Windows BMP file<br>
- Optional backing RAM for drawing pixels for systems with enough RAM<br>
- Light enough to run on an ATtiny85<br> 
<br>

If you find this code useful, please consider buying me a cup of coffee

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=SR4F44J2UR8S4)

