#include "gyro.h"

void setup() {
  init_gyro();
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);

}
void loop() {
  get_gyro();
  calc_gyro();
  print_gyro();
  
  delay(10);
}

