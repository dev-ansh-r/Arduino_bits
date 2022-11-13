int potVal;
int wT=500;
int potPin=A0;
int redPin=7;

void setup(){
  Serial.begin(9600)
  pinMode(potPin,INPUT);
  pinMode(redPin,OUTPUT);
  }

void loop(){
potVal=analogRead(potPin);
Serial.println(potVal);
delay(wT);

while(potVal>1000){
  digitalWrite(redPin,HIGH);
  potVal=analogRead(potVal);
  Serial.println(potVal);
  delay(wT);
}
digitalWrite(redPin,LOW);
}
