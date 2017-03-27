#include <SPI.h>
#include "ryo.h"



void setup() {
   digitalWrite(10,HIGH);
  pinMode(10,OUTPUT);
 init_gyro();
}

void loop() {
  float x,y,z;
  read_gyro(&x,&y,&z);
  cal_gyro(&x,&y,&z);
  push_gyro(&x,&y,&z);
  delay(10);
}
