#define rightDir 30
#define rightStep 28
#define rightEnable 26

#define leftDir 36
#define leftStep 34
#define leftEnable 32

#define preto 850
#define branco 700
#define vel 2

int sdir;  //sensor direita   
int smid;  // sensor meio 
int sesq;  // sensor esquerdo
int sfront; // sensor frontal
int seesq; // sensor extremo esquerdo
int sedir; // sensor extremo direito
unsigned long  tempoImprimir; //delay para enviar informações
bool teste = LOW; //variavel para inverter o lado do teste

void setup() {
  
  pinMode(rightDir, OUTPUT);
  pinMode(rightStep, OUTPUT);
  pinMode(rightEnable, OUTPUT);
  
  pinMode(leftDir, OUTPUT);
  pinMode(leftStep, OUTPUT);
  pinMode(leftEnable, OUTPUT);

  pinMode(A0, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A7, INPUT);

  digitalWrite(rightEnable, LOW);  
  digitalWrite(leftEnable, LOW);
  
  digitalWrite(rightDir, LOW);
  digitalWrite(leftDir, LOW);

 Serial.begin(9600);
 tempoImprimir=millis();
  
}

void loop() {

LerSensor();

if(millis()-tempoImprimir > 2000){
  Imprimir();
  
  tempoImprimir=millis();
}

 Mover();
}
