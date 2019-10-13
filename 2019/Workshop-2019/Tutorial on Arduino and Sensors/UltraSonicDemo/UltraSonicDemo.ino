// Define pin numbers
const int trigPin = 9;
const int echoPin = 10;

// Global variables to store value of duration and distance in cm
long duration;
double distanceCm;
void setup() {
  Serial.begin(9600); 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  /* 
   *  distance = Speed * (Time/2)
   *  (We need to divide by 2 because duraion is the 
   *  time taken by the ultrasonic wave to reach from source to 
   *  destination and then to return to the source)
   *  Speed = 340m/s
   *  Time = duration(in microSecond)  
   *  distance = (340m/s)*(duration*1e-6*0.5 s)m
   *  distance = (340m/s)*(duration*1e-6*0.5 s)*1e2 cm
   *  distance = duration*0.034/2
   */
  distanceCm= duration*0.034/2;

  Serial.print("Distance: "); // Prints "Distance: " string on the serial monitor
  Serial.print(distanceCm); // Prints the distance value from the sensor
  Serial.println(" cm"); // Prints "Distance: " string on the serial monitor
  delay(500);
}
