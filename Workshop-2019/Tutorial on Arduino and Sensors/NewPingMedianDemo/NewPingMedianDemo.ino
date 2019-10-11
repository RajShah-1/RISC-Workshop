// Include library NewPing
// NewPing provides some functions for ultrasonic sensor


// Documentation for NewPing : https://playground.arduino.cc/Code/NewPing/
// Check Documentation to know more about this library
#include <NewPing.h>

//Define pins used for connections
const int TRIGGER_PIN = 11;
const int ECHO_PIN = 12;
const int MAX_DISTANCE = 200;
const int ITERATIONS = 5;

int echoTime;

//Initialize NewPing object (this is a constructor in C++ style)
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 

//Setup only runs once
void setup() {
   // Initialize serial communication
   Serial.begin(9600);
}
 
void loop() {
   Serial.print("Distance: ");
   echoTime = sonar.ping_median(ITERATIONS);
   // Returns median of ITERATIONS(5) reading in microSeconds
   Serial.print(sonar.convert_cm(echoTime));
   // Converts microSeconds to cms
   Serial.println("cm");
   delay(100);
}
