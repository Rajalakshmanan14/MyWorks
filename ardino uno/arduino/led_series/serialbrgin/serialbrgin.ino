void setup()
{ Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  Serial.println("your value is");
    for(int i=0;i<=10;i++)
  {
      Serial.println(i);
      digitalWrite(10, HIGH);
      delay(100); // Wait for 1000 millisecond(s)
      digitalWrite(10, LOW);
      delay(100); // Wait for 1000 millisecond(s)
   }
  
     for(int j=0;j<=10;j++)
  {
    
      Serial.println(j);
      digitalWrite(9, HIGH);
      delay(100); // Wait for 1000 millisecond(s)
      digitalWrite(9, LOW);
      delay(100); // Wait for 1000 millisecond(s)
   }
    
}
