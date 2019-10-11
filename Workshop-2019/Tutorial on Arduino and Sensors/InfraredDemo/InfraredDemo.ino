//Defined iPin to be A1
//Infrared is connected on A1 pin
const int iPin = A1;
const int thresold = 100;

int a, sensorOutput;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(iPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:  
  // Read output of infrared sensor
  sensorOutput = analogRead(iPin);
  if(sensorOutput > thresold){
    a = 1;
  }
  else{
    a = 0;
  }
  Serial.println(a);
}
