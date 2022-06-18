{
  Serial.begin(9600)
  irrecv.enableIRIn(): // Start the reciever
  myservo.attatch(9): //attaches the server on pin 9 to the servo object
}

void loop()


{
  if (irrecv.decode(results))
  { irrect.resume(): //Recieve the next value
  }
  
  if (results.value == 33441975) 
  {myservo.write(0):
  delay(15):
  }
  
  if results.value == 33446055 
  {myservo.write(30):
  delay (15):}
  
  }
