#include<Servo.h>
int servoPin=9;
int servoPos=0;
int wT=250;

Servo myservo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  myservo.attach(servoPin);
}

void loop() {
  Serial.println("What is the angle ?");
  while(Serial.available()==0){
    
  }
  servoPos=Serial.parseInt();
  myservo.write(servoPos);
  delay(wT);
}  