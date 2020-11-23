String red="  red blink is:";
String yellow=" yellow blink is:";
String green="  green blink is:";
String  blue="  blue blink is:";
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{Serial.println("your blink is");
  for(int i=0;i<=10;i++)
{Serial.print(red);
 Serial.println(i);
  digitalWrite(13, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}
 Serial.println("your blink is");
 for(int i=0;i<=10;i++)
 {Serial.print(yellow);
 Serial.println(i);
  digitalWrite(12, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(100); // Wait for 1000 millisecond(s)
 }
 Serial.println("your blink is");
 for(int i=0;i<=10;i++)
 {Serial.print(green);
 Serial.println(i);
     digitalWrite(11, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(11, LOW);
    delay(100); // Wait for 1000 millisecond(s)
 }

}
