const int potPin = A0;  // Analog input pin that the potentiometer is attached to
const int ledPin = 3; // PWM pin

int potVal;        // value read from the pot
int ledVal;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // read the analog in value:
  potVal = analogRead(potPin);

  // map the range [0,1023] to [0,255]
  ledVal = map(potVal, 0, 1023, 0, 255);
  analogWrite(ledPin, ledVal);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}

