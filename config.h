#include <Arduino.h>

pinMode(reflecLightFrente, A4);
pinMode(reflecLight1, A0);
pinMode(reflecLight2, A2);
pinMode(reflecLight3, A3);
pinMode(reflecLight4, A5);
pinMode(reflecLight5, A7);
pinMode(leftGreen, A1);
pinMode(rightGreen, A6);

#define frontTrigger 5
#define frontEcho 4

#define leftTrigger 7
#define leftEcho 8

#define rightTrigger 22
#define rightEcho 24

Ultrasonic frontUltra(frontTrigger, frontEcho);
Ultrasonic leftUltra(leftTrigger, leftEcho);
Ultrasonic rightUltra(rightTrigger, rightEcho);