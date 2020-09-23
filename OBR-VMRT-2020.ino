#include <Arduino.h>
#include <Ultrasonic.h>

void setup(){
  turnOnLightSensors();
  turnOnMotors();
  turnOnUltraSensors();
  Serial.begin(9600);
  delay(2000);

}

void loop(){}
