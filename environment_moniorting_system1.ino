/*
  ENVIRONMENT MONITORING SYSTEM
*/

int valueofgassensor = 0;

void setup()
{
  pinMode(A1, INPUT);
  Serial.begin(9600);

  pinMode(6, OUTPUT);
}

void loop()
{
  // GAS SENSOR WITH BUZZER
  valueofgassensor = analogRead(A1);
  Serial.println(valueofgassensor);
  if (valueofgassensor > 200) {
    tone(6, 523, 1000); // play tone 60 (C5 = 523 Hz)
  }
  delay(10); // Delay a little bit to improve simulation performance
}