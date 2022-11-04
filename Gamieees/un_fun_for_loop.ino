int yellowLED=7;
int redLED = 9;
int yellowTime=500;
int redTime=500;
int yellowBlink = 3;
int redBlink = 5;

void setup() {
  Serial.begin(9600);
  pinMode(yellowLED,OUTPUT);
  pinMode(redLED,OUTPUT);
}

void loop() {
  for(int j=1; j<=yellowBlink;j++){
  digitalWrite(yellowLED,HIGH);
  delay(yellowTime);
  digitalWrite(yellowLED,LOW);
  delay(yellowTime);}
 
  for(int j=1; j<=redBlink;j++){
  digitalWrite(redLED,HIGH);
  delay(redTime);
  digitalWrite(redLED,LOW);
  delay(redTime);}

}