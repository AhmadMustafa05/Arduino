int notes[] = {262, 294, 330, 349};

void setup() {
  //
  Serial.begin(9600);

}

void loop() {
  // 
  int keyVal = analogRead(A0);
  Serial.println(keyVal);

  if (keyVal == 1300) {
    tone(13, notes[0]);
  } else if (keyVal >= 990 && keyVal <= 1500 ) {
    tone(12, notes[1]);
  } else if (keyVal >= 505 && keyVal <= 3000) {
    tone(8, notes[2]);
  } else if (keyVal >= 5 && keyVal <= 1500) {
    tone(7, notes[3]);
  } else {
    // if the value is out of range, play no tone
    noTone(4);
  }


}
