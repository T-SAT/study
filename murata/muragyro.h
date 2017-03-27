
#ifndef GYRO_H_INCLUDE
#define GYRO_H_INCLUDE

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif


extern int L3GD20_CS;
//const int SS = 10;      // 必ず 10 番を出力にすること
//const int MOSI = 11;
//const int MISO = 12;
//const int SCK  = 13;

extern const byte L3GD20_WHOAMI;//15
extern const byte L3GD20_CTRL1;
extern const byte L3GD20_CTRL2;
extern const byte L3GD20_CTRL3;
extern const byte L3GD20_CTRL4;
extern const byte L3GD20_CTRL5;
extern const byte L3GD20_X_L;
extern const byte L3GD20_X_H;
extern const byte L3GD20_Y_L;
extern const byte L3GD20_Y_H;
extern const byte L3GD20_Z_L;
extern const byte L3GD20_Z_H;

extern const byte L3GD20_RW;
extern const byte L3GD20_MS;

void L3GD20_write(byte reg, byte val);
byte L3GD20_read(byte reg);
void init_gyro(int a);
void abridgement_gyro(float *x,float *y,float *z);
void cal_gyro(float *x,float *y,float *z);
void pri_gyro(float *x,float *y,float *z);
#endif
