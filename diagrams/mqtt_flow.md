# MQTT Communication Flow

## Publish / Subscribe Flow

1. ESP32 connects to Wi-Fi
2. ESP32 establishes connection with MQTT broker
3. ESP32 subscribes to control topic
4. ESP32 publishes status messages
5. Broker forwards messages to subscribers

## Message Flow Diagram

ESP32                     MQTT Broker              Client
  |                             |                     |
  | ---- CONNECT ------------> |                     |
  | ---- SUBSCRIBE ----------> |                     |
  |                             | ---- SUBSCRIBE -->  |
  | ---- PUBLISH ------------> | ---- PUBLISH ---->  |
  | <--- PUBLISH ------------- |                     |

## Topics Used
- `sensor/status` → device health
- `device/led` → remote control command

## QoS
- QoS 0 (At most once)
- Chosen for low latency and simplicity
