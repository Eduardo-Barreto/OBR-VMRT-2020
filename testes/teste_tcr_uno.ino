/* Teste de leitura dos sensores TCR */

int LuzFrente = 2;
int Luz1 = 3;
int Luz2 = 4;
int Luz3 = 5;
int Luz4 = 6;
int Luz5 = 7;
int VerdeDireita = A0;
int VerdeEsquerda = A1;

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


void loop(){

  LuzFrente = analogRead(2);
  Serial.println("Frente = " + String(LuzFrente));

  Luz1 = analogRead(3);
  Serial.println("Luz1 = " + String(Luz1));

  Luz2 = analogRead(4);
  Serial.println("Luz2 = " + String(Luz2));
  
  Luz3 = analogRead(5);
  Serial.println("Luz3 = " + String(Luz3));

  Luz4 = analogRead(6);
  Serial.println("Luz4 = " + String(Luz4));
  
  Luz5 = analogRead(7);
  Serial.println("Luz5 = " + String(Luz5));

  VerdeDireita = analogRead(A0);
  Serial.println("VDIR = " + String(VerdeDireita));

  VerdeEsquerda = analogRead(A1);
  Serial.println("VESQ = " + String(VerdeEsquerda));

  delay(500);
}
