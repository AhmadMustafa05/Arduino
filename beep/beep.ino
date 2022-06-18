int buzzer = 11;

void setup() {
 

}

void loop() {
  tone(buzzer, 450);
  delay(100);
  noTone(buzzer);
  delay(100);

}
