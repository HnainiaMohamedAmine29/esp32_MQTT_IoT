# ESP32 MQTT System Architecture

## High-Level Architecture

+-------------+        Wi-Fi        +------------------+
|             |  ---------------->  |                  |
|    ESP32    |                    |   MQTT Broker    |
|             |  <----------------  |  (Mosquitto)     |
+-------------+      MQTT Messages  +------------------+
        |
        |
        v
+-------------------+
| Local Peripherals |
| (LED / Sensors)   |
+-------------------+

## Description
The ESP32 acts as an IoT node connected to a Wi-Fi network.
It communicates with an MQTT broker using the publish/subscribe model.

## Responsibilities
- ESP32:
  - Read sensors / control actuators
  - Publish data to MQTT topics
  - Subscribe to control commands

- MQTT Broker:
  - Route messages between publishers and subscribers
  - Ensure decoupled communication

## Advantages
- Scalable architecture
- Low bandwidth usage
- Suitable for real-time IoT systems
