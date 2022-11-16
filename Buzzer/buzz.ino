// Buzzer turns on when the number is greater than 10
// input number from Serial.read()

int mynumb;
int buzzpin=8;
int wT=2000;
String msg="Please Input a number";

void setup() {
 Serial.begin(9600);
 pinMode(buzzpin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){
    
  }
  mynumb=Serial.parseInt();
  if(mynumb>10){
    digitalWrite(buzzpin,HIGH);
    delay(wT);
    digitalWrite(buzzpin,LOW);
  }
}