const int duration = 10000;

const int xAccelPin = A0;
const int yAccelPin = A1;
const int zAccelPin = A2;

int xAtRestReading;
int yAtRestReading;
int zAtRestReading;

void setup()
{
  Serial.begin(9600);
  xAtRestReading = analogRead(xAccelPin);
  delay(2); // let a2d converter settle

  yAtRestReading = analogRead(yAccelPin);
  delay(2); // let a2d converter settle

  zAtRestReading = analogRead(zAccelPin);
  delay(2); // let a2d converter settle
}

int getNewMax(int oldMax, int accelPin, int valueAtRest)
{
  int val, diff, absVal, newMax;

  val = analogRead(accelPin);
  diff = val - valueAtRest;
  absVal = abs(diff);
  newMax = max(oldMax, absVal);
  delay(2); // let a2d converter settle

  return newMax;    
}

void loop()
{
  int maxX = 0;
  int maxY = 0;
  int maxZ = 0;

  unsigned long endTime = millis() + duration;

  while (millis() < endTime)
  {
    maxX = getNewMax(maxX, xAccelPin, xAtRestReading); 
    maxY = getNewMax(maxY, yAccelPin, yAtRestReading); 
    maxZ = getNewMax(maxZ, zAccelPin, zAtRestReading); 
  }
   
  Serial.print("maxX = ");
  Serial.println(maxX);
  Serial.print("maxY = ");
  Serial.println(maxY);
  Serial.print("maxZ = ");
  Serial.println(maxZ);

}

