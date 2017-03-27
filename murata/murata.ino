#include <SPI.h>
#include "muragyro.h"




void setup() {
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
  init_gyro();
}

void loop() {
  abridgement_gyro();
  delay(10);
}
