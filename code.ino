#include <ArduinoJson.h>
#include "DHT.h"

int luminosity = 0;
int temperature = 0;

int luminosityPin = A0;

DHT dht(2, DHT11);

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
  luminosity = getLuminosity();
  temperature = getTemperature();

  StaticJsonDocument<200> doc;
  doc["luminosity"] = luminosity;
  doc["temperature"] = temperature;

  serializeJson(doc, Serial);
  Serial.println();
  
  delay(4000);
}
