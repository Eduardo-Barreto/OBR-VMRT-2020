/*teste de motores*/

//Variaveis dos motores

int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  delay(1000);
}
void loop()
{
 
  analogWrite(IN1, 160);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, 160);
  delay(1000); 

}
