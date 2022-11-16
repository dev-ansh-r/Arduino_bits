// Varying the sound of Passive Buzzer with increasing frequency by Potentiometer value 
// Added an image for the variation of the frequency with varying potentiometer value


int buzzpin=8;  
float toneVal;
int Potpin=10;
int potVal;

void setup() {
 Serial.begin(9600);
 pinMode(buzzpin,OUTPUT);
 pinMode(Potpin,INPUT);
}

void loop() {
  potVal=analogRead(Potpin);
  toneVal=((940./1023.)*potVal)+60;
  digitalWrite(buzzpin,HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzpin,LOW);
  delayMicroseconds(toneVal);  
}


// code by Devansh Shukla
// Do post your comments and suggestions