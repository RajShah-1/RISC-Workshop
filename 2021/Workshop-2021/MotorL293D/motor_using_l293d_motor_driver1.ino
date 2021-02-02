void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(13,HIGH);
}

void loop()
{
  digitalWrite(11, HIGH);
   digitalWrite(10, LOW);
  delay(400); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(400); // Wait for 1000 millisecond(s)
}