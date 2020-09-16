/*teste de motores*/

//Variaveis dos motores

#define rightDir 30;
#define rightStep 28;
#define rightEnable 26;

#define leftDir 36;
#define leftStep 34;
#define leftEnable 32;

bool direction = 1;

void setup(){
  pinMode(rightDir, OUTPUT);
  pinMode(rightStep, OUTPUT);
  pinMode(rightEnable, OUTPUT);
  pinMode(leftDir, OUTPUT);
  pinMode(leftStep, OUTPUT);
  pinMode(leftEnable, OUTPUT);
  delay(1000);
}
void loop(){
  digitalWrite(rightDir, !direction);
  digitalWrite(leftDir, !direction);

  for (int i = 0; i < 200; i++)  {
    digitalWrite(rightStep, HIGH);
    digitalWrite(leftStep, HIGH);
    delay(50);
    digitalWrite(rightStep, LOW);
    digitalWrite(leftStep, LOW);
  }

  direction = !direction;

  delay(1000); 
}
