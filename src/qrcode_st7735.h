#ifndef ESPQRST7735_H
#define ESPQRST7735_H
/* ESP_QRcode. tft version for ST7735
 * include this .h if you have a TFT display
 */

#define TFTDISPLAY

#include "qrcodedisplay.h"
#include <Adafruit_GFX.h>   
#include <Adafruit_ST7735.h>


class QRcode_ST7735 : public QRcodeDisplay
{
	private:
		Adafruit_ST7735 *display;
        void drawPixel(int x, int y, int color);
	public:
		
		QRcode_ST7735(Adafruit_ST7735 *display);

		void init();
		void screenwhite();
		void screenupdate();
};
#endif