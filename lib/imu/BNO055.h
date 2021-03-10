#ifndef BNO055_H_
#define BNO055_H_

#include "imu.h"
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <imumaths.h>


class BNO055 : public IMU
{
    public:
        virtual bool init();
        virtual void get_data(float imu_data[9]);
    private:
        int16_t ax, ay, az;
        int16_t gx, gy, gz;
        int16_t mx, my, mz;
};

#endif