#ifndef IMU_H_
#define IMU_H_

class IMU
{
    public:
        virtual bool init() = 0;
        virtual void get_data(float imu_data[9]) = 0;
};
#endif