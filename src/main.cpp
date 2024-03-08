#include "WifiConnect.h"

#include <Arduino.h>


void setup() {
  Serial.begin(115200);
  delay(10);
  wifiSetup();
}

void loop() {
  digitalWrite(2, HIGH);
  delay(50);
  digitalWrite(2, LOW);
  delay(50);
}