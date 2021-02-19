#include "DHT.h"
#define DHTPIN 2     
#define DHTTYPE DHT11   

DHT dht(DHTPIN, DHTTYPE);
#include <Wire.h>               
#include <LiquidCrystal_I2C.h>  

LiquidCrystal_I2C lcd(0x27,16,2);
                                  

void setup() {
  lcd.init();  
  lcd.backlight();                

  dht.begin();
}

void loop() {
  
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(t, h, false);

  lcd.setCursor(0,0);            
  lcd.print("H: ");
  lcd.print(h);
  lcd.setCursor(0,1);
  lcd.print("T: ");
  lcd.print(t);
  lcd.print(" *C ");
}
