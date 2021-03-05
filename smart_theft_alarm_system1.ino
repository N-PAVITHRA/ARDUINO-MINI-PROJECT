int sensorvalue = 0;

void setup()
{
  pinMode(8, INPUT);
  Serial.begin(9600);

  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  sensorvalue = digitalRead(8);
  Serial.println(sensorvalue);
  if (sensorvalue == 1) {
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(7, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}