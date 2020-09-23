#include <Arduino.h>
#include <Ultrasonic.h>

/*#region Light Sensors*/
int reflecLightFrente = A4;
int reflecLight1 = A0;
int reflecLight2 = A2;
int reflecLight3 = A3;
int reflecLight4 = A5;
int reflecLight5 = A7;
int leftGreen = A1;
int rightGreen = A6;

void turnOnLightSensors()
{
    pinMode(reflecLightFrente, INPUT);
    //==================
    pinMode(reflecLight1, INPUT);
    pinMode(reflecLight2, INPUT);
    pinMode(reflecLight3, INPUT);
    pinMode(reflecLight4, INPUT);
    pinMode(reflecLight5, INPUT);
    //==================
    pinMode(leftGreen, INPUT);
    pinMode(rightGreen, INPUT);
}
/*#endregion*/

/* #region Ultrasonic Sensors*/
#define frontTrigger 5
#define frontEcho 4

#define leftTrigger 7
#define leftEcho 8

#define rightTrigger 22
#define rightEcho 24

void turnOnUltraSensors()
{
    Ultrasonic frontUltra(frontTrigger, frontEcho);
    Ultrasonic leftUltra(leftTrigger, leftEcho);
    Ultrasonic rightUltra(rightTrigger, rightEcho);
}
/* #endregion */

/* #region  Motors */
#define rightDir 30
#define rightStep 28
#define rightEnable 26

#define leftDir 36
#define leftStep 34
#define leftEnable 32

void turnOnMotors()
{
    pinMode(rightDir, OUTPUT);
    pinMode(rightStep, OUTPUT);
    pinMode(rightEnable, OUTPUT);
    pinMode(leftDir, OUTPUT);
    pinMode(leftStep, OUTPUT);
    pinMode(leftEnable, OUTPUT);
}
/* #endregion */