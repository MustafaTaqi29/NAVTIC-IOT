#include <ESP8266WiFi>

void setup(){
  serial.begin(9600);
  
WiFi.begin("iot", "project1234");
  while(WiFi.status() != WL_CONNECTED)
  {
    Serial.print("..");
    delay(200);
  }
  Serial.println();
  Serial.println("NodeMCU is Connected!");
  Serial.println(WiFi.localIP());
  
}

void loop() {
  
}
