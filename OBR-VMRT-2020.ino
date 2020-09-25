#include <Arduino.h>

#define rightDir 30
#define rightStep 28
#define rightEnable 26

#define leftDir 36
#define leftStep 34
#define leftEnable 32

int reflectedLightFrente = A4;
int reflectedLight1 = A0;
int reflectedLight2 = A2;
int reflectedLight3 = A3;
int reflectedLight4 = A5;
int reflectedLight5 = A7;
int leftGreen = A1;
int rightGreen = A6;

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
    delay(1000);
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

    if (reflectedLight2 < 60)
    {
        digitalWrite(leftDir, 0);
        digitalWrite(rightDir, 1);
        digitalWrite(rightStep, HIGH);
        digitalWrite(leftStep, HIGH);
        delay(50);
        digitalWrite(rightStep, LOW);
        digitalWrite(leftStep, LOW);
        delay(50);
    }
    if (reflectedLight4 < 60)
    {
        digitalWrite(leftDir, 1);
        digitalWrite(rightDir, 0);
        digitalWrite(rightStep, HIGH);
        digitalWrite(leftStep, HIGH);
        delay(50);
        digitalWrite(rightStep, LOW);
        digitalWrite(leftStep, LOW);
        delay(50);
    }
    else{digitalWrite(leftDir, 1);
        digitalWrite(rightDir, 1);
        digitalWrite(rightStep, HIGH);
        digitalWrite(leftStep, HIGH);
        delay(50);
        digitalWrite(rightStep, LOW);
        digitalWrite(leftStep, LOW);
        delay(50);}
    
}
