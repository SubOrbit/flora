## flora

This arduino sketch implements an ESP32 BLE client for XIaomi Mi Flora Plant sensors, pushing the measurements to an MQTT server.

## Technical requirements

Hardware:
- ESP32
- Xiaomi Mi Plant Sensor (firmware revision >= 2.6.6)

Software:
- MQTT server

## Setup instructions

1) Edit config.h and update setings according to your environment:
- WLAN SSID and password
- MQTT Server address, username, password and topic
- MAC addresses of your Xiaomi Mi Plant sensors

2) Open ino sketch in Arduino, compile & upload. 

## Measuring interval

The ESP32 will perform a single connection attempt to the Xiaomi Mi Plant sensors, read the sensor data & push it to the MQTT server. The ESP32 will enter deep sleep mode after 30 seconds (can be configured in config.h) and sleep for one hour (also configurable in config.h), before repeating the exercise...
Battery level is read every 12th wakeup (configurable via config.h).

## Constraints

Some "nice to have" features are not yet implemented or cannot be implemented:
  - OTA updates: I didn't manage to implement OTA update capabilities due to program size constraints: BLE and WLAN brings the sketch up to 90% of the size limit, so I decided to use the remaining 10% for something more useful than OTA...

## Sketch size issues

The sketch does not fit into the default arduino parition size of around 1.3MB. You'll need to change your default parition table and increase maximum build size to at least 1.6MB.

  
## Credits

Sven Henkel is the original author of the sketch
Many thanks go to the guys at https://github.com/open-homeautomation/miflora for figuring out the sensor protocol.

  
