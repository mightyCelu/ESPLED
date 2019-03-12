# ESP LED
This project intends to provide a general firmware for the ESP8266 to allow control of LED strips, in particular WS2812b based ones.
The initial inspiration is taken from [audio-reactive-led-strip](https://github.com/scottlawsonbc/audio-reactive-led-strip), but the firmware intends to use the LED strip more flexibly, rather than only receiving visualizations over the network, the LEDs should also allow:
 * online configuration via HTTP
 * static lighting
 * non-reactive animations
 * locally computed visualizations based on audio recorded with an attached microphone

## Features
 * Readme
 * Minimal firmware

## Roadmap
 * [WiFiManager](https://github.com/tzapu/WiFiManager): Manage connections to WLAN without modifying the firmware
 * [mDNS](https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266mDNS): Announce the device on the network to allow discovery
 * Webserver: Control settings and operation mode
 * Reactive audio visualization based on data supplied by [audio-reactive-led-strip](https://github.com/scottlawsonbc/audio-reactive-led-strip)
 * Static lighting
 * Non-reative animations
