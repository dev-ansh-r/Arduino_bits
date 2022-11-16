int redPin=8;
int greenPin=9;
int bluePin=10;
String myColor;
String msg="What color LED do you want ?";
int wT=500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
Serial.println(msg);
while(Serial.available()==0){
  
}
myColor=Serial.readString();

if(myColor=="red" || myColor=="RED"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(wT);
}
if(myColor=="green" || myColor=="GREEN"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  delay(wT);
}

if(myColor=="blue" || myColor=="BLUE"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
  delay(wT);
}
if(myColor=="off" || myColor=="OFF"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(wT);
}
if(myColor=="aqua" || myColor=="AQUA"){
  analogWrite(redPin,LOW);
  analogWrite(greenPin,255);
  analogWrite(bluePin,80);
  delay(wT);
}
if(mycolor=="yellow" || mycolor=="YELLOW"){
  analogWrite(redPin,255);
  analogWrite(greenPin,80);
  analogWrite(bluePin,LOW);
}
if(mycolor=="yellow" || mycolor=="YELLOW"){
  analogWrite(redPin,255);
  analogWrite(greenPin,100);
  analogWrite(bluePin,LOW);
}
if(mycolor=="cyan" || mycolor=="CYAN"){
  analogWrite(redPin,LOW);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
}
if(mycolor=="magenta" || mycolor=="MAGENTA"){
  analogWrite(redPin,255);
  analogWrite(greenPin,LOW);
  analogWrite(bluePin,100);
}
}