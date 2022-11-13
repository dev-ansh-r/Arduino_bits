int wT=500;
String Ledclr;
int redLed=5;
int greenLed =6;
int blueLed=7;
String msg="Which LED do you want to blink?";


void setup() {
Serial.begin(9600);
pinMode(redLed,OUTPUT);
pinMode(greenLed,OUTPUT);
pinMode(blueLed,OUTPUT);
}

void loop() {
Serial.println(msg);
while(Serial.available() == 0){  
}
Ledclr=Serial.readString();
if(Ledclr=="red" || Ledclr=="RED"){
  digitalWrite(redLed,HIGH);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,LOW);
  delay(wT);
}
else if(Ledclr=="green" || Ledclr=="GREEN"){
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,HIGH);
  digitalWrite(blueLed,LOW);
  delay(wT);
}
else(Ledclr=="blue" || Ledclr=="BLUE"){
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,HIGH);
  delay(wT);
}
}