/*
*How to display numbers on LCD screen by Arduino uno
*This is a very basic example which will help you to understand how cursor location arrangement can be done on the LCD screen.
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*for more projects based on Arduino uno please visit: https://arduinounomagic.blogspot.com/
*/



#include<LiquidCrystal.h>
LiquidCrystal ARDUINO_LCD(8, 2, 7, 6, 5, 4);// Set RS pin=8, Enable pin=2, D4=7, D5=6, D6=5, d7=4.  

void setup()
{ 
ARDUINO_LCD.begin(16, 2);//set up number of colomn and rows of LCD
}

void loop() {

 ARDUINO_LCD.setCursor(0,0); //set the postion of the cursor at colomn :0, row :1
 ARDUINO_LCD.print("1"); // print 1
 delay(2000); //Delay
 ARDUINO_LCD.clear();// Clear the screen
 
 ARDUINO_LCD.setCursor(1,0);//set the postion of the cursor at colomn :1, row :1
 ARDUINO_LCD.print("2");// print 2
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(2,0);//set the postion of the cursor at colomn :2, row :1
 ARDUINO_LCD.print("3");// print 3
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(3,0);//set the postion of the cursor at colomn :3, row :1
 ARDUINO_LCD.print("4");// print 4
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(4,0);//set the postion of the cursor at colomn :4, row :1
 ARDUINO_LCD.print("5"); // print 5
  delay(2000);
  ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(5,0);//set the postion of the cursor at colomn :5, row :1
 ARDUINO_LCD.print("6"); // print 6
 delay(2000);
  ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(6,0);//set the postion of the cursor at colomn :6, row :1
 ARDUINO_LCD.print("7"); // print 7
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(7,0);//set the postion of the cursor at colomn :7, row :1
 ARDUINO_LCD.print("8"); // print 8
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(8,0);//set the postion of the cursor at colomn :8, row :1
 ARDUINO_LCD.print("9"); // print 9
 delay(2000);
 ARDUINO_LCD.clear();

 ARDUINO_LCD.setCursor(15,1); //set the postion of the cursor at colomn :15, row :2
 ARDUINO_LCD.print("1"); // print 1
 delay(2000);
 ARDUINO_LCD.clear();
 
 ARDUINO_LCD.setCursor(14,1);//set the postion of the cursor at colomn :14, row :2
 ARDUINO_LCD.print("2"); // print 2
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(13,1);//set the postion of the cursor at colomn :13, row :2
 ARDUINO_LCD.print("3"); // print 3
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(12,1);//set the postion of the cursor at colomn :12, row :2
 ARDUINO_LCD.print("4"); // print 4
delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(11,1);//set the postion of the cursor at colomn :11, row :2
 ARDUINO_LCD.print("5"); // print 5
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(10,1);//set the postion of the cursor at colomn :10, row :2
 ARDUINO_LCD.print("6"); // print 6
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(9,1);//set the postion of the cursor at colomn :9, row :2
 ARDUINO_LCD.print("7"); // print 7
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(8,1);//set the postion of the cursor at colomn :8, row :2
 ARDUINO_LCD.print("8"); // print 8
 delay(2000);
 ARDUINO_LCD.clear();
  
 ARDUINO_LCD.setCursor(7,1);//set the postion of the cursor at colomn :7, row :2
 ARDUINO_LCD.print("9"); // print 9
 delay(2000);
 ARDUINO_LCD.clear();
   

}



  
