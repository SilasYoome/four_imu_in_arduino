
#include "Wire.h"
#include "mp6050.h"
#include "I2Cdev.h"
#include "MPU6050.h"

MPU6050 accelgyro;
I2Cdev I2C_M;

bool MP6050::init(){
    Wire.begin();
    accelgyro.initialize();
    return(accelgyro.testConnection()?true:false);
}
void MP6050::get_data(float imu_data[9]){
    accelgyro.getMotion6(&ax,&ay,&az,&gx,&gy,&gz);

    imu_data[0] = ax;
    imu_data[1] = ay;
    imu_data[2] = az;
    imu_data[3] = gx;
    imu_data[4] = gy;
    imu_data[5] = gz;
}