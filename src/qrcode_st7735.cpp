#include <Arduino.h>
#include "qrencode.h"
#include "qrcode_st7735.h"


QRcode_ST7735::QRcode_ST7735(Adafruit_ST7735 *display) {
    this->display = display;
}


void QRcode_ST7735::init() {
    this->screenwidth = display->width();
    this->screenheight = display->height();
    display->fillScreen(ST77XX_WHITE);
    int min = screenwidth;
    if (screenheight<screenwidth)
        min = screenheight;
    multiply = min/WD;
    offsetsX = (screenwidth-(WD*multiply))/2;
    offsetsY = (screenheight-(WD*multiply))/2;
}

void QRcode_ST7735::screenwhite() {
    display->fillScreen(ST77XX_WHITE);
}

void QRcode_ST7735::screenupdate() {
    // No hay que hacer nada
}

void QRcode_ST7735::drawPixel(int x, int y, int color) {
    if(color==1) {
        color = ST77XX_BLACK;
    } else {
        color = ST77XX_WHITE;
    }
    display->fillRect(x,y,multiply,multiply,color);
}