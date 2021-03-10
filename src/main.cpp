#include <Arduino.h>
#include <BNO055.h>
#include <MPU6050.h>
#include <MPU9250.h>


float imu_data[9];
BNO055 BNO;
void setup() {
  Serial.begin(9600);
  BNO.init();
  //BNO.init();
}

void loop() {

  BNO.get_data(imu_data);
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