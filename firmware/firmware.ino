#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>
#include <ESP8266mDNS.h>

void setup() {
  WiFiManager wifiManager;
  wifiManager.autoConnect();

  if(!MDNS.begin("ledstrip")) {
    while (1) {}
  }
}

void loop() {
  MDNS.update();
}
