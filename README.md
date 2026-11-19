🚨 Arduino PIR Motion Detection Security Alarm

Developed by Rajan Robotics
Vision to Reality

📌 Project Overview

The PIR Motion Detection Security Alarm is an Arduino-based security system that detects human movement using a PIR (Passive Infrared) sensor.

When motion is detected, the Arduino activates a buzzer and an LED to provide an alert. This project demonstrates the fundamentals of sensor interfacing, digital input processing, and basic security automation.

🎯 Objectives

- Detect human movement using a PIR sensor.
- Interface a PIR sensor with Arduino Uno.
- Activate an LED and buzzer when motion is detected.
- Understand digital input and output operations.

🧰 Components Required

S.No.| Component| Quantity
1| Arduino Uno| 1
2| PIR Motion Sensor (HC-SR501)| 1
3| Active Buzzer| 1
4| LED| 1
5| 220Ω Resistor| 1
6| Jumper Wires| As required
7| USB Cable| 1

🔌 Circuit Connections

PIR Sensor – Arduino Uno

PIR Sensor Pin| Arduino Pin
VCC| 5V
OUT| D2
GND| GND

Buzzer – Arduino Uno

Buzzer Pin| Arduino Pin
Positive (+)| D8
Negative (−)| GND

LED – Arduino Uno

LED Connection| Arduino Pin
Anode (+) through 220Ω resistor| D9
Cathode (−)| GND

⚙️ Working Principle

1. The PIR sensor continuously monitors its surroundings for changes in infrared radiation.
2. When a person moves within its detection range, the sensor output becomes HIGH.
3. Arduino reads the sensor output through digital pin D2.
4. The buzzer and LED are activated when motion is detected.
5. When motion is no longer detected, the buzzer and LED are turned OFF.

💻 Arduino Program

/*
  Project: PIR Motion Detection Security Alarm
  Controller: Arduino Uno
  Sensor: HC-SR501 PIR Sensor
  Developed by: Rajan Robotics
  Vision to Reality
*/

#define PIR_PIN 2
#define BUZZER_PIN 8
#define LED_PIN 9

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(9600);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  Serial.println("RAJAN ROBOTICS");
  Serial.println("PIR Motion Detection Alarm");
  Serial.println("System Initializing...");
  
  delay(30000); // Allow PIR sensor to stabilize
  Serial.println("System Ready");
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH) {
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);

    Serial.println("Motion Detected!");
  }
  else {
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);

    Serial.println("No Motion");
  }

  delay(200);
}

🧪 Testing Procedure

1. Connect all components according to the circuit diagram.
2. Upload the Arduino program.
3. Allow the PIR sensor approximately 30 seconds to stabilize.
4. Move your hand or walk in front of the sensor.
5. Observe the LED and buzzer activation.
6. Move away and observe the output.

✨ Features

- Human motion detection.
- Automatic buzzer alert.
- LED indication.
- Simple and low-cost design.
- Beginner-friendly Arduino project.
- Useful for learning basic security automation.

🏠 Applications

- Home security systems.
- Room entry detection.
- Automatic lighting systems.
- Laboratory security demonstrations.
- Smart building projects.

🚀 Future Improvements

- Add an LCD to display motion status.
- Add an ESP32 or Wi-Fi module for remote alerts.
- Send notifications to a mobile phone.
- Add a password-based alarm reset system.
- Store motion detection events.

📁 Repository Structure

Arduino-PIR-Motion-Detection-Security-Alarm/
│
├── Code/
│   └── PIR_Motion_Alarm.ino
│
├── Circuit/
│   └── circuit_diagram.png
│
├── Images/
│   └── working_prototype.jpg
│
├── Videos/
│   └── demo_video_link.txt
│
├── README.md
└── LICENSE

👨‍💻 Developed By

Rajan Robotics
Vision to Reality

Government Recognised Enterprise
UDYAM Registration: UDYAM-TN-27-0023934

Learn | Build | Innovate | Inspire

---

⭐ If you find this project useful, consider starring the repository!
