#include <SPI.h>
#include "ryo.h"



void setup() {
   digitalWrite(10,HIGH);
  pinMode(10,OUTPUT);
 init_gyro();
}

void loop() {
  abridgement_gyro();
  delay(10);
}
