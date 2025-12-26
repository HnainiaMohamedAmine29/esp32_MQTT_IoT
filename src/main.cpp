#include <WiFi.h>
#include <PubSubClient.h>
#include "config.h"

WiFiClient espClient;
PubSubClient client(espClient);

void setup_wifi()
{
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    while (WiFi.status() != WL_CONNECTED)
        delay(500);
}

void callback(char* topic, byte* payload, unsigned int length)
{
    if (payload[0] == '1')
        digitalWrite(2, HIGH);
    else
        digitalWrite(2, LOW);
}

void reconnect()
{
    while (!client.connected())
    {
        if (client.connect("ESP32Client"))
            client.subscribe("device/led");
        else
            delay(2000);
    }
}

void setup()
{
    pinMode(2, OUTPUT);
    setup_wifi();
    client.setServer(MQTT_BROKER, MQTT_PORT);
    client.setCallback(callback);
}

void loop()
{
    if (!client.connected())
        reconnect();

    client.loop();
    client.publish("sensor/status", "ESP32 Alive");
    delay(2000);
}
