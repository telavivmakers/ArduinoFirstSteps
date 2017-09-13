const int xAccelPin = A0;
const int yAccelPin = A1;
const int zAccelPin = A2;

const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

const int xLedPin = redPin;
const int yLedPin = bluePin;
const int zLedPin = greenPin;

const int lowerAccelRange = 15;
const int upperAccelRange = 80;

int xAtRestReading;
int yAtRestReading;
int zAtRestReading;

void setup()
{
  xAtRestReading = analogRead(xAccelPin);
  delay(2); // let a2d converter settle

  yAtRestReading = analogRead(yAccelPin);
  delay(2); // let a2d converter settle

  zAtRestReading = analogRead(zAccelPin);
  delay(2); // let a2d converter settle
}


void loop()
{
  int reading, diff, absVal, ledVal;

  reading = analogRead(xAccelPin);
  diff = reading - xAtRestReading;
  absVal = abs(diff);

  ledVal = map(absVal, lowerAccelRange, upperAccelRange, 0, 255);
  ledVal = constrain(ledVal, 0, 255);

  analogWrite(xLedPin, ledVal);
  delay(2); // let a2d converter settle

  // .
  // .
  // .
  // same for y and z

}


