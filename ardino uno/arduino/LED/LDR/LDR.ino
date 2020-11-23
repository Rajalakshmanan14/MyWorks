void setup() {
pinMode(3,INPUT);
pinMode(4,OUTPUT);
digitalWrite(4,LOW);
Serial.begin(9600);
}

void loop() {
int x=digitalRead(3);
Serial.println(x);
if(x<=700)
{
digitalWrite(4,HIGH);
delay(500);
}
else
{
digitalWrite(4,LOW);
delay(500);
}
}
