// Chris Fryer 2016
int x; 
#define BAUD (9600)

void setup() 
{
  Serial.begin(BAUD);
  pinMode(6,OUTPUT); // Enable
  pinMode(5,OUTPUT); // Step
  pinMode(4,OUTPUT); // Dir
  digitalWrite(6,LOW); // Set Enable low
}

void loop() 
{
  digitalWrite(6,LOW); // Set Enable low
  steps(0, 25);
  Serial.println("Pause");
  delay(1000); // pause one second
}

void StepperGo(int enablePin, int stepPin, int dirPin){
  pinMode(enablePin, OUTPUT); // Enable
  pinMode(stepPin, OUTPUT); // Step
  pinMode(dirPin, OUTPUT); // Dir
}

void steps(int dir, int steps){
  int x =0;
  digitalWrite(4, dir); // Set Dir high
  for(x = 0; x < steps; x++) // Loop 200 times
  {
    digitalWrite(5,HIGH); // Output high
    delay(4); // Wait
    digitalWrite(5,LOW); // Output low
    //delay(5); // Wait
  }
}
