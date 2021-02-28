#include <Arduino.h>
#define onBoard 13
void setup() {
  pinMode(onBoard, OUTPUT);
}

void loop() {
  digitalWrite(onBoard,LOW);
  delay(500);
  digitalWrite(onBoard,HIGH);
  delay(500);
}