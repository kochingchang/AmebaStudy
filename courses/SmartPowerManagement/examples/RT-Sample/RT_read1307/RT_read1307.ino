
#include "arduino.h"
#include "DS1307.h"
#include "Wire.h"
//#include "rgb_lcd.h"

//rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

int rtc[7];


// the setup function runs once when you press reset or power the board
void setup() {
  int i;
  
  // initialize digital pin 13 as an output.
  Serial.println("start to init RTC");
  DS1307_init();
  DS1307_get(rtc, true);

  Serial.println("show current RTC value");
  for(i=0; i<7; i++)
  {
    Serial.print(rtc[i]);
    Serial.print(" ");
  }
  Serial.println();

  Serial.println("set up time");
//  if(rtc[6]<12){
  {
    /*
    DS1307_stop();
    Serial.println("setup time");
    DS1307_set_data(DS1307_SEC,50);
    DS1307_set_data(DS1307_MIN,13);
    DS1307_set_data(DS1307_HR,23);
    DS1307_set_data(DS1307_DOW,5);
    DS1307_set_data(DS1307_DATE,10);
    DS1307_set_data(DS1307_MTH,8);
    DS1307_set_data(DS1307_YR,15);
    
    DS1307_start();
    */
  }

  // enable 32KHz clock in TinyRTC
  DS1307_SetOutput(DS1307_SQW32KHZ);
{
   // set up the LCD's number of columns and rows:
  //  lcd.begin(16, 2);
    
   // lcd.setRGB(colorR, colorG, colorB);
    
    // Print a message to the LCD.
  //  lcd.print("hello, world!");

    delay(1000);
}
}

// the loop function runs over and over again forever
void loop() {
  int i;
  Serial.println("loop");
  DS1307_get(rtc, true);

  for(i=0; i<7; i++)
  {
    Serial.print(rtc[i]);
    Serial.print(" ");
  }
  Serial.println();

  delay(1000);
}
