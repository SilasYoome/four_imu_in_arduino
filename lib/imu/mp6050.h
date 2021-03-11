#ifndef MP6050_H_
#define MP6050_H_

#include "imu.h"

class MP6050 : public IMU
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