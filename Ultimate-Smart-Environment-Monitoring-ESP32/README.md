# Ultimate Smart Environment Monitoring System (ESP32 + DHT11 + MQ135 + Blynk) 🌿📊

Advanced modular IoT environment monitoring system with automation and alerts.
# Ultimate Smart Environment Monitoring System 🌿📊  
Intelligent environmental sensing with automation and IoT monitoring.

This project implements an **advanced smart environment monitoring system** using an **ESP32**, **DHT11 sensor**, **MQ135 air quality sensor**, and **Blynk IoT dashboard**.

Unlike basic sensor projects, this system uses a **modular embedded architecture** with automation and alert logic, making it suitable for real-world IoT applications and strong GitHub portfolios.

Real sensors. Smart automation. Cloud intelligence.

---

## 🧠 Project Overview

The system continuously monitors:

- 🌡 Temperature  
- 💧 Humidity  
- 🌫 Air Quality  

Sensor data is processed by ESP32 and sent to the Blynk cloud for real-time monitoring and automation.

### System Architecture


---

## ⚡ Key Features

- Real-time environmental monitoring
- Temperature & humidity sensing (DHT11)
- Air quality monitoring (MQ135)
- AQI category classification:
  - GOOD
  - MODERATE
  - POOR
  - HAZARDOUS
- Automatic fan control based on air quality
- Buzzer alerts for hazardous air
- Blynk IoT cloud dashboard
- Auto WiFi reconnect system
- Modular multi-file firmware architecture

---

## 📂 Project Structure


This structure reflects **industry-style embedded firmware design**.

---

## 🔧 Hardware Components

- ESP32 Development Board  
- DHT11 Temperature & Humidity Sensor  
- MQ135 Air Quality Sensor  
- Relay Module (for fan automation)  
- Buzzer  
- Smartphone with Blynk App  

---

## 🔌 Pin Connections

| Component | ESP32 GPIO |
|-----------|------------|
| DHT11 DATA | GPIO 4 |
| MQ135 AO | GPIO 34 |
| Fan Relay | GPIO 26 |
| Buzzer | GPIO 27 |

---

## 📱 Blynk Dashboard Setup

Create datastreams:

| Virtual Pin | Function |
|-------------|----------|
| V0 | Temperature |
| V1 | Humidity |
| V2 | Air Quality Raw |
| V3 | AQI Category |
| V10 | Auto Mode Switch |

Create event:

## Features
- Modular multi-file firmware
- Temperature + Humidity + Air Quality monitoring
- AQI category classification
- Auto fan control based on air quality
- Buzzer alerts for hazardous air
- Blynk IoT dashboard + event notifications
- Auto WiFi reconnect

## Blynk Virtual Pins
V0 Temperature
V1 Humidity
V2 Air raw value
V3 AQI category text
V10 Auto mode switch

## Author
Dhruvang Bari
