# QRcode_ST7735

Subclass that you can use jointly with https://github.com/yoprogramo/QRcodeDisplay to generate QRcodes in TFT displays like ST7735

To use it:

## In platform.io: 

Add as dependencies:

 * yoprogramo/QRcodeDisplay
 * yoprogramo/QRcode_ST7735
 * adafruit/Adafruit GFX Library
 * adafruit/Adafruit ST7735 and ST7789 Library

 ## In arduino ide 
 
 Open Library Manager (menu Sketch > Include Library > Manage Libraries…) then install the following libraries:

 * QRcodeDisplay
 * QRcode_ST7735
 * Adafruit GFX Library
 * adafruit/Adafruit ST7735 and ST7789 Library

 Creating a QRcode is just as simple as:

 ```
#define TFT_RST   25    
#define TFT_CS    5     
#define TFT_DC    26    

#include <Adafruit_GFX.h>      
#include <Adafruit_ST7735.h>   
#include <SPI.h>
#include <qrcode_st7735.h>

Adafruit_ST7735 display = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);
QRcode_ST7735 qrcode (&display);


void setup() {

    qrcode.init();
    qrcode.create("Hello world.");

}

 ```

 For other displays, please refer the main repository: https://github.com/yoprogramo/QRcodeDisplay
