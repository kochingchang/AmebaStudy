void setup() 
{ 
//Serial.begin(9600); 
pinMode(TrigPin, OUTPUT); 
pinMode(EchoPin, INPUT); 
//pinMode(buttonPin, INPUT); 

 lcd.begin (16,2);  // initialize the lcd 
 // Switch on the backlight
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(LED_ON);
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("DistanceDetector");
  lcd.setCursor(0, 1);
  lcd.print("Provide by KDA");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Push button to");
  lcd.setCursor(0, 1);
  lcd.print("detect distance"); 

} // END Setup

