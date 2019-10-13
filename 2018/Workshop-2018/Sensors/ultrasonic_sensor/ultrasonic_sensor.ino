int echo=A1,trig=2;
int dis,dur;
long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the object we take half of the distance travelled.
  return microseconds / 29 / 2;
}
void setup() {
  Serial.begin(9600);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
}
void loop() {
  digitalWrite(trig,LOW);
  analogRead(echo);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  dur=pulseIn(echo,HIGH);
  dis=microsecondsToCentimeters(dur);
  Serial.println(dis);
}
