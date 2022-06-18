int buzzer = 11;

void setup() {
 

}

void loop() {
  tone(buzzer, 350);
  delay(500);
  noTone(buzzer);
  delay(500);

}
