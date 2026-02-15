#define BLYNK_PRINT Serial
#include <Arduino.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>
#include "config.h"
#include "aqi_logic.h"
#include "actuator_control.h"
#include "wifi_manager.h"
#include "alert_manager.h"

DHT dht(DHT_PIN, DHT_TYPE);
BlynkTimer timer;

float t=0, h=0;
int airRaw=0;
AQICategory currentCat = AQI_GOOD;

void sendSensorData(){
  t = dht.readTemperature();
  h = dht.readHumidity();
  airRaw = analogRead(MQ135_PIN);

  currentCat = classifyAQI(airRaw);

  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V1, h);
  Blynk.virtualWrite(V2, airRaw);
  Blynk.virtualWrite(V3, categoryToText(currentCat));

  handleFanAutomation(currentCat);
  handleAlerts(currentCat, airRaw, t, h);
}

BLYNK_CONNECTED() {
  Blynk.syncVirtual(V10);
}

BLYNK_WRITE(V10){
  setAutoMode(param.asInt());
}

void setup() {
  Serial.begin(115200);
  pinMode(MQ135_PIN, INPUT);
  dht.begin();
  initActuators();
  initAlerts();
  connectWiFiAndBlynk();
  timer.setInterval(SENSOR_INTERVAL_MS, sendSensorData);
}

void loop() {
  Blynk.run();
  timer.run();
  maintainConnection();
}
