
//Include library NewPing
//NewPing provides functions for ultrasonic sensor
#include <NewPing.h>

//Define pins used for connections
const int TRIGGER_PIN = 11;
const int ECHO_PIN = 12;
const int MAX_DISTANCE = 200;
const int LED = 6;

//Store brightness value as a global variable
double brightnessVal;

//Initialize NewPing object (this is a constructor in C++ style)
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 

//Setup only runs once
void setup() {
   // Initialize serial communication
   Serial.begin(9600);
   // Set LED pinMode to OUTPUT
   pinMode(LED,OUTPUT);
}
 
void loop() {
   unsigned int distance = sonar.ping_cm();
    // Map distance to brightness value
   if(distance >=3 && distance<=20){
      brightnessVal = 255.0-(distance-3.0)*255/17;
   }
   // 0.5 is added to round off the value (otherwise decimal points would be truncated
   // analogWrite needs an int argument
   analogWrite(LED, (int)(brightnessVal+0.5));
   delay(100);
}
