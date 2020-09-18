 #include "config.h"

int KP = 0;
int gain = 0;
int error = 0;

int rightDelay = 0;
int leftDelay = 0;

void seguirLinha(int velocity){
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