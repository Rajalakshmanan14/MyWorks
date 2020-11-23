#include<Servo.h>
int i=0;
int servoPin=6;
int servoDelay=25;
float x;
Servo myPointer;
void setup()
{
  
  Serial.begin(9600);
  myPointer.attach(servoPin);
  pinMode(6,INPUT);
  
}

void loop()
{x=analogRead(A0);
 i=(255./1023.)*x;
 myPointer.write(i);
}
