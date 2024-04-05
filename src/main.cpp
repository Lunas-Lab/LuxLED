#include "WifiConnect.h"
#include "CaptivePortal.h"

#include <Arduino.h>


void setup() {
  captive::setup();
}

void loop() {
  captive::loop();
}