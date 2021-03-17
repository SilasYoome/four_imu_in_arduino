# four_imu_in_arduino
 四個IMU的library切換，支援的IMU有GY-85、MPU9250、MPU6050、GY-BNO055

## 編譯環境
* platformio
## 使用的第三方庫
*[Adafruit BNO055](https://github.com/adafruit/Adafruit_BNO055.git)  
*[Adafruit Unified Sensor](https://github.com/adafruit/Adafruit_Sensor.git)  
*[I2Cdevlib-Core](https://github.com/jrowberg/i2cdevlib.git)  
*[I2Cdevlib-ADXL345](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/ADXL345)  
*[I2Cdevlib-ITG3200](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/ITG3200)  
*[I2Cdevlib-HMC5883L](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/HMC5883L)  
*[I2Cdevlib-MPU6050](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/MPU6050)  
*[Grove-IMU 9DOF v2.0 library](https://www.seeedstudio.com/blog/2019/12/09/getting-started-with-mpu-9250-arduino-guide/)  

## 功能描述
請在IMUCtrl.cpp中修改IMU_TYPE的參數

| IMU_TYPE  | IMU |
| ------------- |:-------------:|
| 85      | GY-85     |
| 55      | GY-BNO055     |
| 60      | MPU6050     |
| 92      | MPU9250     |
