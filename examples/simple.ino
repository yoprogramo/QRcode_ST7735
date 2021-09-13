
#define TFT_RST   25    
#define TFT_CS    5     
#define TFT_DC    26    

#include <Adafruit_GFX.h>      
#include <Adafruit_ST7735.h>   
#include <SPI.h>
#include <qrcode_st7735.h>

#define TFTMODEL INITR_144GREENTAB

Adafruit_ST7735 display = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);
QRcode_ST7735 qrcode (&display);


void setup() {

    Serial.begin(115200);
    Serial.println("");
    Serial.println("Starting...");

    // enable debug qrcode
    // qrcode.debug();
    display.initR(TFTMODEL);
    // Initialize QRcode display using library
    qrcode.init();
    // create qrcode
    qrcode.create("Hello world.");

}

void loop() { }