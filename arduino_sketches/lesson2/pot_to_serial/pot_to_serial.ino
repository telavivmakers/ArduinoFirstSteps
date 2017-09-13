const int potPin = A0;  // Analog input pin that the potentiometer is attached to

int potVal = 0;        // value read from the pot

void setup()
{
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop()
{
  // read the analog in value:
  potVal = analogRead(potPin);

  // print the reading to the Serial Monitor:
  Serial.print("potentiometer at ");
  Serial.println(potVal);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}

