void LerSensor() {
  sdir = analogRead(A5);
  smid = analogRead(A3);
  sesq = analogRead(A2);
  seesq = analogRead(A0);
  sedir = analogRead(A7);
  sfront = analogRead(A4);

  sdir=map(sdir, 420, 951, 400, 900);
  sedir=map(sedir, 605, 940, 400, 900);
  smid=map(smid, 433, 963, 400, 900);
  sfront=map(sfront, 516, 952, 400, 900);
  sesq=map(sesq, 423, 965, 400, 900);
  seesq=map(seesq, 453, 963, 400, 900);  
}
