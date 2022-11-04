int potPin=A2; //any analog pin 
int ledPin=6; //any PWM pin
int potVal;  //value reading from potentiometer
float LEDval;

void setup() {
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  potVal=analogRead(potPin);
  LEDval=(255./1023.)*potVal;
  analogWrite(ledPin,LEDval);
  Serial.print("Value in Potentiometer : ");
  Serial.print(potVal);
  }