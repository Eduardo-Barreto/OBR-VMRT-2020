#include <Arduino.h>

void lightRead(){
    int reflecLightFrente = analogRead(A4);
    int reflecLight1 = analogRead(A0);
    int reflecLight2 = analogRead(A2);
    int reflecLight3 = analogRead(A3);
    int reflecLight4 = analogRead(A5);
    int reflecLight5 = analogRead(A7);
    int leftGreen = analogRead(A1);
    int rightGreen = analogRead(A6);
}

void printLight(){
    Serial.println(analogRead(A4));
    Serial.println(analogRead(A0));
    Serial.println(analogRead(A2));
    Serial.println(analogRead(A3));
    Serial.println(analogRead(A5));
    Serial.println(analogRead(A7));
    Serial.println(analogRead(A1));
    Serial.println(analogRead(A6));
}