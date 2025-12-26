# ESP32 MQTT Client State Machine

## States

[START]
   |
   v
[WIFI_CONNECT]
   |
   | (Wi-Fi connected)
   v
[MQTT_CONNECT]
   |
   | (Broker connected)
   v
[SUBSCRIBE]
   |
   v
[RUNNING]
   |
   | (Connection lost)
   v
[RECONNECT]

## State Descriptions

- START:
  Initial state after boot

- WIFI_CONNECT:
  ESP32 connects to configured Wi-Fi network

- MQTT_CONNECT:
  ESP32 establishes connection with MQTT broker

- SUBSCRIBE:
  ESP32 subscribes to required MQTT topics

- RUNNING:
  Normal operation (publish/receive messages)

- RECONNECT:
  Handles reconnection logic in case of failure

## Design Goals
- Robust connection handling
- Non-blocking behavior
- Reliable long-running operation
