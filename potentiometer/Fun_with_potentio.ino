int myPin=A2;
int redLED=7;
int yellowLED=8;
int redLED=9;
int readVal;
float v2;
delaytime = 750;
void setup() {
  Serial.begin(9600);
  pinMode(myPin,INPUT);
  pinMode(ledPin,9);
}

void loop() {
  readVal = analogRead(A2);
  V2=(5./1023.)*readVal;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);
  Serial.print("Binary Output of Potentiometer is");
  Serial.println(readVal);

  if (V2<3.0){
    digitalWrite(redLED,LOW);
    digitalWrite(yellowLED,LOW);
    digitalWrite(greenLED,HIGH);
  }
  
  if (V2>3.0 && V2<4,0){
    digitalWrite(redLED,LOW);
    digitalWrite(yellowLED,HIGH);
    digitalWrite(greenLED,LOW);
  }
      
  if (V2>4.0){
    digitalWrite(redLED,HIGH);
    digitalWrite(yellowLED,LOW);
    digitalWrite(greenLED,LOW);
  }
  delay(delaytime);
}