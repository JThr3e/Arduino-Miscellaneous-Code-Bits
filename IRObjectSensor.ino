
int iRSensor = 3;
void setup()
{
  Serial.begin(9600);
  pinMode(iRSensor, INPUT);
}

void loop()
{
  int buttonState = digitalRead(iRSensor);
  boolean objectDetected = (buttonState == 0);
  Serial.println(objectDetected);
  delay(1);
}
