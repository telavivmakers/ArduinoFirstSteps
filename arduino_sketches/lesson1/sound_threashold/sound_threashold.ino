const int ledPin = 2;
const int soundPin = 3;
const int clapTime = 500;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(soundPin, INPUT);
}

void loop() 
{
  // wait for sound
  while (digitalRead(soundPin) == HIGH) // no sound
  {
    // do nothing
  }

  // turn led for a little duration
  
  digitalWrite(ledPin, HIGH);
  delay(clapTime);
  digitalWrite(ledPin, LOW);
}

