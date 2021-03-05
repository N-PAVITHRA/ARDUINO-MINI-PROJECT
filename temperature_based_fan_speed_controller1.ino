#include<LiquidCrystal.h> 
LiquidCrystal lcd(13, 10, 5, 4, 3, 2); 
int val; 
float temp; 
int led4=6;
int brightness = 0;
void setup()
{
  lcd.begin(16,2); 
  pinMode(led4, OUTPUT); 
  analogWrite(led4, brightness); 
  lcd.clear(); 
  brightness=0; 
  analogWrite(led4, brightness); 
  delay(1000); 
  lcd.setCursor(0,0); 
  lcd.print("Micro Controller"); 
  lcd.setCursor(0,1); 
  lcd.print("Based Automatic"); 
  delay(3000);           
  lcd.clear();         
  lcd.setCursor(0,0); 
  lcd.print("   Temperature   "); 
  lcd.setCursor(0,1); 
  lcd.print("FAN SPEED CONTROL");       
  delay(3000);           
  lcd.clear();

}

void loop()
{
   val=analogRead(0); 
  float T=(val/1024.0)*5000; 
  float TEMP=T/10; 
  lcd.setCursor(0,0); 
  lcd.print("T:"); 
  lcd.setCursor(3,0); 
  lcd.print("TEMP"); 
  delay(500);
  delay(1000); // Delay a little bit to improve simulation performance
if(TEMP>20 && TEMP<30) 
{
  brightness = 80; 
  analogWrite(led4, brightness); 
  delay(1000);
} 
if(TEMP>40 && TEMP<60) 
{
  brightness=120;
  analogWrite(led4, brightness); 
  delay(1000);
}
if(TEMP>60 && TEMP<80) 
{
  brightness = 160; 
  analogWrite(led4, brightness); 
  delay(1000);
}
if(TEMP>80 && TEMP<100)
{
  brightness = 200; 
  analogWrite(led4, brightness); 
  delay(1000);
}
if(TEMP>100 && TEMP<120)
{
  brightness = 250; 
  analogWrite(led4, brightness); 
  delay(1000);
} 
}