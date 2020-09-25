#include <Arduino.h>
#include <Ultrasonic.h>

/* #region  Motors */
const int rightDir = 30;
const int rightStep = 28;
const int rightEnable = 26;

const int leftDir = 36;
const int leftStep = 34;
const int leftEnable = 32;
/* #endregion */

/* #region Ultrasonic Sensors*/
#define frontTrigger 5
#define frontEcho 4

#define leftTrigger 7
#define leftEcho 8

#define rightTrigger 22
#define rightEcho 24
/* #endregion */

/*#region Light Sensors*/
int reflectedLightFrente = A4;
int reflectedLight1 = A0;
int reflectedLight2 = A2;
int reflectedLight3 = A3;
int reflectedLight4 = A5;
int reflectedLight5 = A7;
int leftGreen = A1;
int rightGreen = A6;
/*#endregion*/

  Ultrasonic frontUltra(frontTrigger, frontEcho);
  Ultrasonic leftUltra(leftTrigger, leftEcho);
  Ultrasonic rightUltra(rightTrigger, rightEcho);

int steps = 0;

int targetPower = 0;

int KP = 0;
int gain = 0;
int error = 0;

int rightDelay = 0;
int leftDelay = 0;

int atualRightSteps = 0;
int atualLeftSteps = 0;

int time = 0;

void setup(){
  pinMode(reflectedLightFrente, INPUT);
  pinMode(reflectedLight1, INPUT);
  pinMode(reflectedLight2, INPUT);
  pinMode(reflectedLight3, INPUT);
  pinMode(reflectedLight4, INPUT);
  pinMode(reflectedLight5, INPUT);
  pinMode(leftGreen, INPUT);
  pinMode(rightGreen, INPUT);

  pinMode(rightDir, OUTPUT);
  pinMode(rightStep, OUTPUT);
  pinMode(rightEnable, OUTPUT);
  pinMode(leftDir, OUTPUT);
  pinMode(leftStep, OUTPUT);
  pinMode(leftEnable, OUTPUT);

  digitalWrite(rightEnable, LOW);
  digitalWrite(leftEnable, LOW);

  Serial.begin(9600);
  delay(2000);

}

void loop(){
  reflectedLightFrente = analogRead(A4);
  reflectedLight1 = analogRead(A0);
  reflectedLight2 = analogRead(A2);
  reflectedLight3 = analogRead(A3);
  reflectedLight4 = analogRead(A5);
  reflectedLight5 = analogRead(A7);
  leftGreen = analogRead(A1);
  rightGreen = analogRead(A6);

  move(50, 50, 200, 200, 1, 1);
  delay(500);
  move(50, 50, 200, 200, 0, 0);

}

void move(int rightVelocity, int leftVelocity, int rightSteps, int leftSteps, bool rightDirection, bool leftDirection){

    rightVelocity = map(rightVelocity, 1, 100, 10000, 1000);
    leftVelocity = map(leftVelocity, 1, 100, 10000, 1000);

    time = micros();

    digitalWrite(leftDir, leftDirection);
    digitalWrite(rightDir, rightDirection);

    if (time >= time + rightVelocity)
    {
        if (atualRightSteps <= rightSteps){
            digitalWrite(rightStep, HIGH);
            digitalWrite(rightStep, LOW);
            atualRightSteps ++;
        }
        
    }

    if (time >= time + leftVelocity)
    {
        if (atualLeftSteps <= leftSteps){
            digitalWrite(leftStep, HIGH);
            digitalWrite(leftStep, LOW);
            atualLeftSteps ++;
        }
        
    }
    
}

void followLine(int velocity){
    targetPower = velocity*1000;
    error = (reflectedLight1 + reflectedLight2) - (reflectedLight3 + reflectedLight4);
    gain = error * KP;

    rightDelay = targetPower + gain;
    leftDelay = targetPower - gain;

    digitalWrite(rightStep, HIGH);
    digitalWrite(rightStep, LOW);
    digitalWrite(leftStep, HIGH);
    digitalWrite(leftStep, LOW);   
}
