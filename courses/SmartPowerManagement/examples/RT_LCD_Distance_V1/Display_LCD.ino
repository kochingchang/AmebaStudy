void  display_lcd()
{

lcd.clear();
 lcd.setCursor(0, 0); // 設定游標位置在第一行行首
 lcd.print("Distance:");
 lcd.print(cm);
 lcd.print("cm");
 
 lcd.setCursor(0, 1); // 設定游標位置在第一行行首
 //lcd.print("3-310cm,Base:2cm"); 
 lcd.print("Deep:");
 lcd.print(300.00 - cm);
 lcd.print("cm");
 
}

