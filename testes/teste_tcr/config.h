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

void lightPrint(int time){
    Serial.println(analogRead(A4));
    Serial.print(analogRead(A0));
    Serial.print(' / ');
    Serial.print(analogRead(A2));
    Serial.print(' / ');
    Serial.print(analogRead(A3));
    Serial.print(' / ');
    Serial.print(analogRead(A5));
    Serial.print(' / ');
    Serial.println(analogRead(A7));
    Serial.print(analogRead(A1));
    Serial.print(' / ');
    Serial.println(analogRead(A6));
    Serial.println("---------------------");
    delay(time);
}