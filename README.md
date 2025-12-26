# ESP32 MQTT IoT Client

## 📌 Overview
This project implements an **ESP32-based IoT node** communicating via
**MQTT protocol** over Wi-Fi.

It demonstrates practical IoT concepts including connectivity,
publish/subscribe messaging, and remote device control.

## 🎯 Target
- IoT Internship
- Embedded Software / Connected Systems

## 🧩 System Architecture
ESP32 → WiFi → MQTT Broker → Client / Dashboard

## 🔧 Features
- Wi-Fi connection management
- MQTT publish / subscribe
- Automatic reconnection
- Remote LED control via MQTT topic

## 📡 MQTT Topics
- Publish: `sensor/status`
- Subscribe: `device/led`

## 🛠 Technologies
- MCU: ESP32
- Framework: Arduino (PlatformIO)
- Protocol: MQTT
- Broker: Mosquitto (public broker)

## 📂 Project Structure



## 🚀 How to Run
1. Configure Wi-Fi credentials in `config.h`
2. Upload firmware using PlatformIO
3. Use MQTT Explorer to publish commands

## 📈 Possible Improvements
- TLS-secured MQTT
- JSON payloads
- FreeRTOS task separation

## 📜 License
MIT License
