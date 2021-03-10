#include "Wire.h"
#include "mp9250.h"
#include "I2Cdev.h"
#include "MPU9250.h"

MPU9250 accelgyro;
I2Cdev I2C_M;

bool MP9250::init(){
    Wire.begin();
    accelgyro.initialize();
}