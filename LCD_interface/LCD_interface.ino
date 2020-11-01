# include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  // put your setup code here, to run once:
/*
LCD Interface - It is mainly used as a serial monitor.
-->It takes 8-bit data(D0-D3 in ground, others are connected to arduino).
-->It has 11 lines(8 for data and 3 for control)
-->Control lines are-
    1. EN(Enable) - It tells that you are sending the data.
    2. RS(Register Select) - When RS is low, data is treated as a command and When RS is High, data is treated as a text.
    3. R/W(Read/Write) - When RW is low, the data written to the LCD and When RW is high, the data readind to the LCD.
-->Power Supply(VSS/GND - Ground, VDD/VCC - Power supply, VEE/V0 - connect to Potentiometer)
*/

lcd.begin(16,2); // type of lcd like 16*2,20*4 etc
lcd.clear(); // previous data will clear
}

void loop() {
  // put your main code here, to run repeatedly:

lcd.setCursor(0,0);  // Starting point of LCD(Coloumn*row)
lcd.print("Hello sir"); // It will print in LCD
delay(2000);
lcd.clear();
lcd.setCursor(0,1);
lcd.print("I am J");
delay(3000);
lcd.clear();
}
