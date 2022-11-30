#include<TimerOne.h>
int ledPin = 13; // LED connected to digital pin 13
int wT=350000;
//delay set to micro seconds so that it can match the interrupts

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(ledPin, OUTPUT);
  Timer1.initialize(1000000); // initialize timer1, and set a 1/2 second period
  Timer1.attachInterrupt( blink ); // attaches callback() as a timer overflow interrupt
}

void loop(){
    digitalWrite(ledPin,LOW);
    delayMicroseconds(wT);
}

void blink(){
  // toggle the state of the LED
  digitalWrite(ledPin, !digitalRead(ledPin));
}