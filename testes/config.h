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

void lightPrint(int delay){
    Serial.println(analogRead("Front: " + String(A4)));
    Serial.println("PID: " + String(analogRead(A0)) + String(analogRead(A2)) + String(analogRead(A3)) + String(analogRead(A5)) + String(analogRead(A7)));
    Serial.println("Green: " + String(analogRead(A1)) + String(analogRead(A6)));
    delay(delay);
}