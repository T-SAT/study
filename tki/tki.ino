#include "gyro.h"

void setup() {
  init_gyro();
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);

}
void loop() {
  float x,y,z;
  get_gyro(&x,&y,&z);
  calc_gyro(&x,&y,&z);
  print_gyro(&x,&y,&z);
  
  delay(10);
}

