const int trigpin=10;
const int echopin=9;
long duration;
int distance;
void setup()
{Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin,INPUT);
}

void loop()
{
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);// Wait for 1000 millisecond(s)
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(500);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=duration*0.034/2;
  Serial.println("Distance:");
  Serial.println(distance);
}
