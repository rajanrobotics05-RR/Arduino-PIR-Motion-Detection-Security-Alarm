
/*
  Project : PIR Motion Detection Security Alarm

  Controller : Arduino Uno
  Sensor     : HC-SR501 PIR Motion Sensor
  Output     : Active Buzzer + LED

  Developed by: Rajan Robotics
  Vision to Reality
*/

#define PIR_PIN     2
#define BUZZER_PIN  8
#define LED_PIN     9

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(9600);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  Serial.println("RAJAN ROBOTICS");
  Serial.println("PIR Motion Detection Security Alarm");
  Serial.println("Initializing sensor...");

  // Allow PIR sensor to stabilize
  delay(30000);

  Serial.println("System Ready!");
}

void loop() {

  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH) {

    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);

    Serial.println("Motion Detected! ALARM ON");

  } 
  else {

    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);

    Serial.println("No Motion - System Normal");

  }

  delay(200);
}
