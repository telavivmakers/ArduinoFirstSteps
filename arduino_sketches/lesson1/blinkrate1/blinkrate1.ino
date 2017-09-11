void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT_PULLUP);
}

void loop() 
{
  digitalWrite(2, HIGH);  // turn LED on
  if (digitalRead(3) == HIGH) // not pressed
  {
    delay(500); // 500 millisec = 1/2 sec
  } else {
    delay(150); // much shorter
  }

  digitalWrite(2, LOW);   // turn LED off
  if (digitalRead(3) == HIGH) // not pressed
  {
    delay(500); // 500 millisec = 1/2 sec
  } else {
    delay(150); // much shorter
  }
}
