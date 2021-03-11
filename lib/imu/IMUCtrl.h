#ifndef IMUCTRL_H_
#define IMUCTRL_H_


class IMU;
class imuctrl{
    public:
        void init();
        void get_imudata(float imudata[9]);
    private:
        IMU* imu;
};

#endif