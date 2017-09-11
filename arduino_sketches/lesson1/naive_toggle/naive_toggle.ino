const int ledPin = 2;
const int buttonPin = 3;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

int state = LOW;

void loop()
{
  // wait for button to be pressed
  while (digitalRead(buttonPin) == HIGH) // not pressed
  { 
    // do nothing 
  }

  // flip state
  if (state == HIGH) {
    state = LOW;
  } else {
    state = HIGH;
  }
  digitalWrite(ledPin, state);   // turn LED on/off

  // wait for button to be depressed
  while (digitalRead(buttonPin) == LOW) // button pressed
  {
    // do nothing 
  }
}
