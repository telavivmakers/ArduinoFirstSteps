const int ledPin = 2;
const int buttonPin = 3;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

int state = LOW;

void loop() {
  // flip state
  if (state == HIGH)
  {
    state = LOW;
  } else {
    state = HIGH;
  }
  
  digitalWrite(ledPin, state);   // turn LED on/off
  if (digitalRead(buttonPin) == HIGH) // buttun not pressed
  {
    delay(500); // 500 millisec = 1/2 sec
  } else {
    delay(150); // much shorter
  }
}
