#include "BNO055.h"
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

Adafruit_BNO055 bno = Adafruit_BNO055(-1, 0x29);
sensors_event_t angVelocityData , magnetometerData, accelerometerData;
bool BNO055::init(){
    bno.begin();
    bno.setExtCrystalUse(true);
}
void BNO055::get_data(float imu_data[9]){
    bno.getEvent(&angVelocityData, Adafruit_BNO055::VECTOR_GYROSCOPE);
    bno.getEvent(&magnetometerData, Adafruit_BNO055::VECTOR_MAGNETOMETER);
    bno.getEvent(&accelerometerData, Adafruit_BNO055::VECTOR_ACCELEROMETER);

    ax = accelerometerData.acceleration.x;
    ay = accelerometerData.acceleration.y;
    az = accelerometerData.acceleration.z;

    gx = angVelocityData.gyro.x;
    gy = angVelocityData.gyro.y;
    gz = angVelocityData.gyro.z;

    mx = magnetometerData.magnetic.x;
    my = magnetometerData.magnetic.y;
    mz = magnetometerData.magnetic.z; 

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