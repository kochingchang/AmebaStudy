
void loop() 
{ 
 /*
 int reading = digitalRead(buttonPin); 
  if (reading != lastButtonState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // whatever the reading is at, it's been there for longer
    // than the debounce delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading != buttonState) {
      buttonState = reading;

      // only toggle the LED if the new button state is HIGH
      if (buttonState == HIGH) {
          get_distance();
          display_lcd();
      }
    }
  }
*/

  get_distance();
  display_lcd();
  delay(2000);
  // save the reading.  Next time through the loop,
  // it'll be the lastButtonState:
  //lastButtonState = reading;
}
   
