#include <Arduino.h>

void connectLightSensors(){
    pinMode(reflecLightFrente, A4);
    pinMode(reflecLight1, A0);
    pinMode(reflecLight2, A2);
    pinMode(reflecLight3, A3);
    pinMode(reflecLight4, A5);
    pinMode(reflecLight5, A7);
    pinMode(leftGreen, A1);
    pinMode(rightGreen, A6);
}