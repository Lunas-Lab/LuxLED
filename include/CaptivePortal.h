#ifndef CAPTIVEPORTAL
#define CAPTIVEPORTAL

#include <Arduino.h> //not needed in the arduino ide

// Captive Portal
#include <AsyncTCP.h> //https://github.com/me-no-dev/AsyncTCP using the latest dev version from @me-no-dev
#include <DNSServer.h>
#include <ESPAsyncWebServer.h> //https://github.com/me-no-dev/ESPAsyncWebServer using the latest dev version from @me-no-dev
#include <esp_wifi.h>          //Used for mpdu_rx_disable android workaround

namespace captive
{
    void setup();
    void loop();
}

#endif