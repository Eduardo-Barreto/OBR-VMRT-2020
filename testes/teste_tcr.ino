/* Teste de leitura dos sensores TCR */

int LuzFrente = A0;
int Luz1 = A1;
int Luz2 = A2;
int Luz3 = A3;
int Luz4 = A4;
int Luz5 = A5;
int VerdeDireita = A6;
int VerdeEsquerda = A7;

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

  LuzFrente = analogRead(A0);
  Serial.println("Frente = " + String(LuzFrente));

  Luz1 = analogRead(A1);
  Serial.println("Luz1 = " + String(Luz1));

  Luz2 = analogRead(A2);
  Serial.println("Luz2 = " + String(Luz2));
  
  Luz3 = analogRead(A3);
  Serial.println("Luz3 = " + String(Luz3));

  Luz4 = analogRead(A4);
  Serial.println("Luz4 = " + String(Luz4));
  
  Luz5 = analogRead(A5);
  Serial.println("Luz5 = " + String(Luz5));

  VerdeDireita = analogRead(A6);
  Serial.println("VDIR = " +  String(VerdeDireita));

  VerdeEsquerda = analogRead(A7);
  Serial.println("VESQ = " + String(VerdeEsquerda));

  delay(500);
}
