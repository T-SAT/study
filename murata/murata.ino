#include <SPI.h>
#include "muragyro.h"

#define L3GD20_cs A1


void setup() {
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
  init_gyro(L3GD20_cs);
}

void loop() {
  float x,y,z;
  abridgement_gyro(&x,&y,&z);
  cal_gyro(&x,&y,&z);
  pri_gyro(&x,&y,&z);
  delay(10);
}
