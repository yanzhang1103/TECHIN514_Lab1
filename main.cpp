#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("System Initialized...");
}

void loop() {
  Serial.println("Hello World! XIAO ESP32C3 is running.");
  delay(1000);
}