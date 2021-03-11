#include "Wire.h"
#include "mp9250.h"
#include "I2Cdev.h"
#include "MPU9250.h"

MPU9250 accelgyro;
I2Cdev I2C_M;

bool MP9250::init(){
    Wire.begin();
    accelgyro.initialize();
    return(accelgyro.testConnection()?true:false);
}
void MP9250::get_data(float imu_data[9]){
    accelgyro.getMotion9(&ax,&ay,&az,&gx,&gy,&gz,&mx,&my,&mz);

    imu_data[0] = ax;
    imu_data[1] = ay;
    imu_data[2] = az;
    imu_data[3] = gx;
    imu_data[4] = gy;
    imu_data[5] = gz;
    imu_data[6] = mx;
    imu_data[7] = my;
    imu_data[8] = mz;
}