#include <Arduino.h>
#include "config.h"
#include "actuator_control.h"

static int autoMode = 1;

void initActuators(){
  pinMode(FAN_RELAY_PIN, OUTPUT);
  digitalWrite(FAN_RELAY_PIN, LOW);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
}

void setAutoMode(int enabled){
  autoMode = enabled ? 1 : 0;
}

void handleFanAutomation(AQICategory cat){
  if(!autoMode) return;
  if(cat == AQI_POOR || cat == AQI_HAZARDOUS){
    digitalWrite(FAN_RELAY_PIN, HIGH);
  } else {
    digitalWrite(FAN_RELAY_PIN, LOW);
  }
}
