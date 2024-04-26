#include <ArduinoJson.h>
#include "DHT.h"

int distance = 0;
int luminosity = 0;
int temperature = 0;

int distanceTriggerPin = 7;
int distanceEchoPin = 8;

int luminosityPin = A0;

DHT dht(2, DHT11);

int getDistance() {
  pinMode(distanceTriggerPin, OUTPUT);
  digitalWrite(distanceTriggerPin, LOW);
  delayMicroseconds(2);

  digitalWrite(distanceTriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(distanceTriggerPin, LOW);

  pinMode(distanceEchoPin, INPUT);

  return (0.01723 * pulseIn(distanceEchoPin, HIGH));
}

int getLuminosity() {
  pinMode(luminosityPin, INPUT);
  
  return analogRead(luminosityPin);
}

int getTemperature() {
  return dht.readTemperature();
}

void setup() {
  Serial.begin(9600);

  dht.begin();
}

void loop() {
  distance = getDistance();
  luminosity = getLuminosity();
  temperature = getTemperature();

  StaticJsonDocument<200> doc;
  doc["distance"] = distance;
  doc["luminosity"] = luminosity;
  doc["temperature"] = temperature;

  serializeJson(doc, Serial);
  Serial.println();
  
  delay(3000);
}
