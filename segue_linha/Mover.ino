void Mover() {
  if (sedir <=  branco & sdir <= branco & smid > branco & sesq <= branco  & seesq <=  branco) {     //vai reto
    digitalWrite(rightStep, HIGH);
    digitalWrite(leftStep, HIGH);
    delay(vel);
    digitalWrite(rightStep, LOW);
    digitalWrite(leftStep, LOW);
    delay(vel);
  }

  else if ((sedir <=  branco || sdir <= branco) & smid > branco & (sesq > branco || seesq >  branco)) {   //curva esquerda
    digitalWrite(rightStep, HIGH);
    //digitalWrite(leftStep, HIGH);
    delay(vel);
    digitalWrite(rightStep, LOW);
    //digitalWrite(leftStep, LOW);
    delay(vel);
  }

  else if ((sedir >  branco || sdir > branco) & smid > branco & (sesq <= branco || seesq <= branco)) {     //curva direita
    //digitalWrite(rightStep, HIGH);
    digitalWrite(leftStep, HIGH);
    delay(vel);
    //digitalWrite(rightStep, LOW);
    digitalWrite(leftStep, LOW);
    delay(vel);
  }

  else if ((sedir > branco || sdir > branco) & smid <= branco & (sesq <= branco || seesq <= branco)) {   //curva 90 esquerda
    digitalWrite(rightDir , HIGH);
    do {
      digitalWrite(rightStep, HIGH);
      digitalWrite(leftStep, HIGH);
      delay(vel);
      digitalWrite(rightStep, LOW);
      digitalWrite(leftStep, LOW);
      delay(vel);
      LerSensor();
    } while ((sedir > branco || sdir > branco) & smid <= branco & (sesq <= branco || seesq <= branco));

    digitalWrite(rightDir , LOW);
  }
  else if ((sedir <= branco || sdir <= branco) & smid <= branco & (sesq > branco || seesq > branco)) {   //curva 90 direita
    digitalWrite(leftDir, HIGH);
    do {
      digitalWrite(rightStep, HIGH);
      digitalWrite(leftStep, HIGH);
      delay(vel);
      digitalWrite(rightStep, LOW);
      digitalWrite(leftStep, LOW);
      delay(vel);
      LerSensor();
    } while ((sedir <= branco || sdir <= branco) & smid <= branco & (sesq > branco || seesq > branco));

    digitalWrite(leftDir, LOW);
  }

  if (sedir <=  branco & sdir <= branco & smid <= branco & sesq <= branco & seesq <=  branco) {

    teste = !teste;

    digitalWrite(rightDir, HIGH);
    digitalWrite(leftDir, HIGH);

    for (int i = 0; i < 40; i++) {
      if (teste == 0) {
        digitalWrite(rightStep, HIGH);
        delay(vel);
        digitalWrite(rightStep, LOW);
        delay(vel);
      }
      else {
        digitalWrite(leftStep, HIGH);
        delay(vel);
        digitalWrite(leftStep, LOW);
        delay(vel);
      }

      LerSensor();

      if (sedir >  branco || sdir > branco || smid > branco || sesq > branco || seesq >  branco) {
        for (int i = 0; i < 10; i++) {
          if (teste == 0) {
            digitalWrite(rightStep, HIGH);
            delay(vel);
            digitalWrite(rightStep, LOW);
            delay(vel);
          }
          else {
            digitalWrite(leftStep, HIGH);
            delay(vel);
            digitalWrite(leftStep, LOW);
            delay(vel);
          }
        }

        digitalWrite(rightDir, LOW);
        digitalWrite(leftDir, LOW);
        return;
      }
    }

    digitalWrite(rightDir, LOW);
    digitalWrite(leftDir, LOW);

    for (int i = 0; i < 30; i++) {
      if (teste == 0) {
        digitalWrite(rightStep, HIGH);
        delay(vel);
        digitalWrite(rightStep, LOW);
        delay(vel);
      }
      else {
        digitalWrite(leftStep, HIGH);
        delay(vel);
        digitalWrite(leftStep, LOW);
        delay(vel);
      }
    }

  }
}
