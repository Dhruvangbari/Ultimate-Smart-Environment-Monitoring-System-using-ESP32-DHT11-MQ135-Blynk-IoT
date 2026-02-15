#ifndef AQI_LOGIC_H
#define AQI_LOGIC_H

enum AQICategory {
  AQI_GOOD = 0,
  AQI_MODERATE,
  AQI_POOR,
  AQI_HAZARDOUS
};

AQICategory classifyAQI(int raw);
const char* categoryToText(AQICategory c);

#endif
