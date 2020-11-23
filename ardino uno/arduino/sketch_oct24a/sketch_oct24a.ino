#include<Servo.h>
Servo My;
int rv;
int wv;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  My.attach(13);
}
void loop() {
  // put your main code here, to run repeatedly:
Serial.print("where would you like to turn the servo?");
while(Serial.available()==0){}
rv=Serial.parseInt();
My.write(rv);
}
