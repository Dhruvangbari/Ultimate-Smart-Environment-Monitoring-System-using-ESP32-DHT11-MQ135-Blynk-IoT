#ifndef CONFIG_H
#define CONFIG_H

char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

#define DHT_PIN 4
#define DHT_TYPE DHT11
#define MQ135_PIN 34
#define FAN_RELAY_PIN 26
#define BUZZER_PIN 27

#define SENSOR_INTERVAL_MS 3000
#define ALERT_COOLDOWN_MS 60000

#define AQI_GOOD_MAX 1200
#define AQI_MODERATE_MAX 2000
#define AQI_POOR_MAX 3000

#endif
