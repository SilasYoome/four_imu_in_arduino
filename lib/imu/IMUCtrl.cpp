#include <Arduino.h>

#include <BNO055.h>
#include <mp6050.h>
#include <mp9250.h>
#include <GY85.h>

#include<IMUCtrl.h>

#define IMU_TYPE 92

void imuctrl::init(){
    if(IMU_TYPE == 85)
    {
        static GY85 gy85;
        imu = &gy85;
    }else if(IMU_TYPE == 55)
    {
        static BNO055 bno055;
        imu = &bno055;
    }else if(IMU_TYPE == 60)
    {
        static MP6050 mpu6050;
        imu = &mpu6050;
    }else if(IMU_TYPE == 92)
    {
        static MP9250 mpu9250;
        imu = &mpu9250;
    }
}
void imuctrl::get_imudata(float imudata[9]){
    imu->get_data(imudata);
}
