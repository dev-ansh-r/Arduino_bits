#include<Servo.h>
//Servo declaration
int servoPin=9;
int angle=0;

//ldr declaration
int lightval;
int lightPin=A0;
int wT=250; //delay

Servo myservo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  myservo.attach(servoPin);
  pinMode(lightPin,INPUT);
  pinMode(servoPin,OUTPUT);
}

void loop() {
  lightval=analogRead(lightPin);
  delay(wT);
  //myservo went from 0 to 160 max, calculate angle value based on that value
  angle(-16./63.)*lightval+16.*780./63.;
  myservo.write(angle);
  delay(wT);
}  