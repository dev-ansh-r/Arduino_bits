int lightpin=A0;
int lightval;
int buzzPin=8;
float wT;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightpin,INPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  lightval=analogRead(lightpin);

  // I have used a passive buzzer so I have calculated the delay time using Slope graph for smooth buzzer sound please refer "Buzzer"-folder in the repo to gett your calculation 
  wT=(9./550.)*lightval-(9./550.)+1.;
  Serial.println(wT);
  digitalWrite(buzzPin,HIGH);
  delay(wT);
  digitalWrite(buzzPin,LOW);
  delay(wT);
}  