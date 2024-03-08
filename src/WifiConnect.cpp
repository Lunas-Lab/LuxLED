#include "..\data\WifiCredentials.h"
#include "WifiConnect.h"

bool wifiSetup()
{
    uint attemptNumber = 0;

    WiFi.mode(WIFI_STA);
    uint numNetworks = WiFi.scanNetworks();
    Serial.printf("Number of networks detected: %d\n", numNetworks);
    Serial.println("Visible networks:");
    for (int i = 0; i < numNetworks; i++)
    {
        Serial.printf("%s: %ddBm\n", WiFi.SSID(i), WiFi.RSSI(i));
    }
    return true;
}