#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 7, 6, 5, 4, 3);
float rain;
void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  rain=0.01723 * readUltrasonicDistance(9, 10);
  delay(10); // Delay a little bit to improve simulation performance
  lcd.setCursor(0,0);
  lcd.print("Rainfall: ");
  lcd.setCursor(11,0);
  lcd.print(rain);
}
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

