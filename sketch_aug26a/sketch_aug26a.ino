#include <LiquidCrystal.h>
int LCD1 = 13;
int LCD2 = 12;
int LCD3 = 11;
int LCD4 = 10;
int LCD5 = 9;
int LCD6 = 8;
int pos = 0;
LiquidCrystal lcd(LCD1,LCD2,LCD3,LCD4,LCD5,LCD6);
int button1 = 4;
int bush = 3;
int x = 3;
#include<Servo.h>
Servo ser1;
Servo ser2;
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(button1,INPUT);
pinMode(bush,INPUT);
 ser1.attach(6);
 ser2.attach(5);
}
void loop() {
  // put your main code here, to run repeatedly:
 LC();
 ser1.write(0);
 ser2.write(0);
if(digitalRead(bush)){
  x++;
 ser2.write(90);
  delay(1000);
  ser2.write(0);
}
else if(digitalRead(button1)and(x != 0)){
  x--;
  ser1.write(90);
  delay(1000);
  ser1.write(0);
}
}
void LC(){
lcd.setCursor(4,0);
lcd.print("Available");
lcd.setCursor(7,1);
lcd.print(x);
}
