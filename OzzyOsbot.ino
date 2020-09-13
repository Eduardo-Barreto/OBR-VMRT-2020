#include <Arduino.h>

#include config.h


void setup(){

  pinMode(LuzFrente, INPUT);
  pinMode(Luz1, INPUT);
  pinMode(Luz2, INPUT);
  pinMode(Luz3, INPUT);
  pinMode(Luz4, INPUT);
  pinMode(Luz5, INPUT);
  pinMode(VerdeDireita, INPUT);
  pinMode(VerdeEsquerda, INPUT);

  Serial.begin(9600);
  delay(2000);

}

void loop(){}