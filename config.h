#include <Arduino.h>
#include <Ultrassonic.h>

int reflecLightFrente = A4;
int reflecLight1 = A0;
int reflecLight2 = A2;
int reflecLight3 = A3;
int reflecLight4 = A5;
int reflecLight5 = A7;
int leftGreen = A1;
int rightGreen = A6;

void connectLightSensors(){
    pinMode(reflecLightFrente, INPUT);
    pinMode(reflecLight1, INPUT);
    pinMode(reflecLight2, INPUT);
    pinMode(reflecLight3, INPUT);
    pinMode(reflecLight4, INPUT);
    pinMode(reflecLight5, INPUT);
    pinMode(leftGreen, INPUT);
    pinMode(rightGreen, INPUT);
}

#define frontTrigger 5
#define frontEcho 4

#define leftTrigger 7
#define leftEcho 8

#define rightTrigger 22
#define rightEcho 24

Ultrasonic frontUltra(frontTrigger, frontEcho);
Ultrasonic leftUltra(leftTrigger, leftEcho);
Ultrasonic rightUltra(rightTrigger, rightEcho);