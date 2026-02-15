#include "config.h"
#include "aqi_logic.h"

AQICategory classifyAQI(int raw){
  if(raw <= AQI_GOOD_MAX) return AQI_GOOD;
  if(raw <= AQI_MODERATE_MAX) return AQI_MODERATE;
  if(raw <= AQI_POOR_MAX) return AQI_POOR;
  return AQI_HAZARDOUS;
}

const char* categoryToText(AQICategory c){
  switch(c){
    case AQI_GOOD: return "GOOD";
    case AQI_MODERATE: return "MODERATE";
    case AQI_POOR: return "POOR";
    default: return "HAZARDOUS";
  }
}
