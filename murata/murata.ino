#include <SPI.h>
#include "muragyro.h"

#define L3GD20_cs A1


void setup() {
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
  init_gyro(L3GD20_cs);
}
float getDt(void)
{
float time;
static float lastTime = (float)millis() / 1000.0;
float currentTime=(float)millis() / 1000.0;
time = currentTime - lastTime;
lastTime=(float)millis()/1000.0;
return (time);
}
float dt;
float old_x=0,old_y=0,old_z=0;
float deg_x=0,deg_y=0,deg_z=0;
void loop() {
  float x,y,z;
  abridgement_gyro(&x,&y,&z);
  cal_gyro(&x,&y,&z);
  pri_gyro(&x,&y,&z);
  
  dt=getDt();
  deg_x += (old_x + x) / 2 * dt;
  deg_y += (old_y + y) / 2 * dt;
  deg_z += (old_z + z) / 2 * dt;
  
  Serial.print(",\tdeg_x=");
  Serial.print(deg_x);
  Serial.print("\tdeg_y=");
  Serial.print(deg_y);
  Serial.print("\t,deg_z=,");
  Serial.println(deg_z);
  old_x = x;
  old_y = y;
  old_z = z;
  
  delay(10);
}
