void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);  // turn LED on
  delay(500); // 500 millisec = 1/2 sec
  digitalWrite(2, LOW);   // turn LED off
  delay(500); // 500 millisec = 1/2 sec
}

