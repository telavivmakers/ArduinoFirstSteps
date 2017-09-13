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


void loop()
{
  int maxX = 0;
  int maxY = 0;
  int maxZ = 0;
  int val, diff, absVal;

  unsigned long endTime = millis() + duration;

  while (millis() < endTime)
  {
    val = analogRead(xAccelPin);
    diff = val - xAtRestReading;
    absVal = abs(diff);
    maxX = max(maxX, absVal);
    delay(2); // let a2d converter settle

    // .
    // .
    // .
    // same for y and z
    
  }
   
  Serial.print("maxX = ");
  Serial.println(maxX);
  Serial.print("maxY = ");
  Serial.println(maxY);
  Serial.print("maxZ = ");
  Serial.println(maxZ);

}

