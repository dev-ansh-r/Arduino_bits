int ledPin=13; //Using builtin LED
int NumBlinks;
int wT=500;
int j;
String msg="How Many Blinks do you want"; 

void setup() {
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){
    
  }
  NumBlinks=Serial.parseInt();
  for (j=1;j<=NumBlinks;j++){
    digitalWrite(ledPin,HIGH);
    delay(wT);
    digitalWrite(ledPin,LOW);
    delay(wT);
  }
}