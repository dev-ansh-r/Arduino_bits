int ledPin=8;
int buttonPin=12; //pull-up resistor
int buttonval;
float wT=100;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  buttonval=digitalRead(buttonPin);
  delay(wT);
  Serial.println(buttonval);
  if(buttonval==1){
    digitalWrite(ledPin,LOW);
  }
  if(buttonval==0){
    digitalWrite(ledPin,HIGH);
  }
}  