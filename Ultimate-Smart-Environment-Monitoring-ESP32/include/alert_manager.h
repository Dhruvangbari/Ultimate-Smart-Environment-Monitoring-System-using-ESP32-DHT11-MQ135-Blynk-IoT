#ifndef ALERT_MANAGER_H
#define ALERT_MANAGER_H

#include "aqi_logic.h"

void initAlerts();
void handleAlerts(AQICategory cat, int airRaw, float t, float h);

#endif
