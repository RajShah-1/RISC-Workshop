int i= A1;
int a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(i,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a=analogRead(i)>100?1:0;
  Serial.print(a);
  Serial.println("   ");
}
