void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  digitalWrite(10,HIGH);
}
void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}