#include <Arduino.h>

/* #region  Light Sensors */
void lightRead(){
    reflecLightFrente = analogRead(A4);
    reflecLight1 = analogRead(A0);
    reflecLight2 = analogRead(A2);
    reflecLight3 = analogRead(A3);
    reflecLight4 = analogRead(A5);
    reflecLight5 = analogRead(A7);
    leftGreen = analogRead(A1);
    rightGreen = analogRead(A6);
}

void lightPrint(int time){
    Serial.print("                   ");
    Serial.println(analogRead(A4));
    Serial.print(analogRead(A0));
    Serial.print(" | ");
    Serial.print(analogRead(A2));
    Serial.print(" | ");
    Serial.print(analogRead(A3));
    Serial.print(" | ");
    Serial.print(analogRead(A5));
    Serial.print(" | ");
    Serial.println(analogRead(A7));
    Serial.print(analogRead(A1));
    Serial.print("                             ");
    Serial.println(analogRead(A6));
    Serial.println("---------------------");
    delay(time);
}
/* #endregion */
