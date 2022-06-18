void setup() {
  //
  Serial.begin(9600);

}

void loop() {
  //
  int WLL = analogRead(A0);
  int WLFI = analogRead(A1);
  int WLNP = analogRead(A2);
  int WLM = analogRead(A3);

  if (WLL == 100){
    pinMode(7, OUTPUT);
  }
  if(WLFI == 200){
    pinMode(8, OUTPUT);
  }
  if(WLNP == 1){
    pinMode(12, OUTPUT);
  }
  if(WLM == 400){
    pinMode(13,OUTPUT);
  }
}
