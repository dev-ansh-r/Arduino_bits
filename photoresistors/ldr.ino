int lightpin=A0;
int lightval;
int redpin=9;
int greenpin=8;
int wT=250;
void setup() {
  // put your setup code here, to run once:
  pinMode(lightpin,INPUT);
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightval=analogRead(lightpin);
  Serial.println(lightval);
  delay(wT);
  if(lightval>350){
    digitalWrite(greenpin,HIGH);
    digitalWrite(redpin,LOW);
  }
  if(lightval<350){
    digitalWrite(greenpin,LOW);
    digitalWrite(redpin,HIGH);
  }
  
}