//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h>
//#include <LiquidCrystal_I2C.h>

const int TrigPin = 8; 
const int EchoPin = 9; 
float cm;

//LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() 
{ 
//Serial.begin(9600); 
pinMode(TrigPin, OUTPUT); 
pinMode(EchoPin, INPUT); 
 /*
  lcd.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("DistanceDetector");
  lcd.setCursor(0, 1);
  lcd.print("Provide by KDA");
  delay(2000);
  lcd.clear();
  */

} 
void loop() 
{ 
//发一个10ms的高脉冲去触发TrigPin 
digitalWrite(TrigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(TrigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(TrigPin, LOW); 
 
cm = pulseIn(EchoPin, HIGH) / 58.0; //算成厘米 
cm = (int(cm * 100.0)) / 100.0; //保留2位小数

 Serial.print(cm); 
 Serial.print("cm"); 
 Serial.println(); 
 /*
lcd.clear();
 lcd.setCursor(0, 0); // 設定游標位置在第一行行首
 lcd.print("Distance:");
 lcd.print(cm);
 lcd.print("cm");
 
 lcd.setCursor(0, 1); // 設定游標位置在第一行行首
 lcd.print("3-310cm,Base:2cm");
 */
delay(1500); 
}
