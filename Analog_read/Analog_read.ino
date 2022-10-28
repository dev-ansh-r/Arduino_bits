int readPin=A3;
int readval;
float V2=0;
int delayTime=500;

void setup() {
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  readval=analogRead(readPin);
  V2=(5./1023.)*readval;
  Serial.Print(V2);
  delay(delayTime);
}