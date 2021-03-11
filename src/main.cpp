#include <Arduino.h>
#include <IMUCtrl.h>
//#include <BNO055.h>
imuctrl imu;
//BNO055 BNO;
float imu_data[9];

void setup() {
  Serial.begin(9600);
  imu.init();
  //BNO.init();
}

void loop() {
  imu.get_imudata(imu_data);
  //BNO.get_data(imu_data);
  Serial.println("Accl:");
  Serial.print(imu_data[0]);
  Serial.print(imu_data[1]);
  Serial.print(imu_data[2]);
  Serial.println();

  Serial.println("Gyro:");
  Serial.print(imu_data[3]);
  Serial.print(imu_data[4]);
  Serial.print(imu_data[5]);
  Serial.println();

  Serial.println("Mag:");
  Serial.print(imu_data[6]);
  Serial.print(imu_data[7]);
  Serial.print(imu_data[8]);
  Serial.println();
  Serial.println();
  delay(500);
}