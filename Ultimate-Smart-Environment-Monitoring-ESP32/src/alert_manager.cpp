#include <Arduino.h>
#include <BlynkSimpleEsp32.h>
#include "config.h"
#include "alert_manager.h"

static unsigned long lastAlert = 0;

void initAlerts(){}

void handleAlerts(AQICategory cat, int airRaw, float t, float h){
  if(cat == AQI_HAZARDOUS){
    digitalWrite(BUZZER_PIN, HIGH);
    unsigned long now = millis();
    if(now - lastAlert > ALERT_COOLDOWN_MS){
      lastAlert = now;
      Blynk.logEvent("bad_air", String("Hazardous air! Raw=") + airRaw);
    }
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }
}
