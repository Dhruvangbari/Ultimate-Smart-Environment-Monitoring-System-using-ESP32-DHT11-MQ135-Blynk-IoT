#ifndef ACTUATOR_CONTROL_H
#define ACTUATOR_CONTROL_H

#include "aqi_logic.h"

void initActuators();
void setAutoMode(int enabled);
void handleFanAutomation(AQICategory cat);

#endif
