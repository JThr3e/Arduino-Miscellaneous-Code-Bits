
int iRSensor = 3;
int LED = 2;
void setup()
{
  Serial.begin(9600);
  pinMode(iRSensor, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int buttonState = digitalRead(iRSensor);
  boolean objectDetected = (buttonState == 0);
  Serial.println(objectDetected);
  if(objectDetected) digitalWrite(LED, HIGH);
  if(!objectDetected) digitalWrite(LED,LOW);
  delay(1);
}
