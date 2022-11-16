// Active Buzzer goes high when the potentiometer value is higher than the cutoff frequency

int mynumb;
int buzzpin=8;
int wT=100;
int pot_val;
int potpin =A0;

float v2;

void setup() {
 Serial.begin(9600);
 pinMode(buzzpin,OUTPUT);
 pinMode(potpin,INPUT);
}

void loop() {
  potval=analogRead(potpin);
  v2=(5./1023.)*potval
  if(v2>4.){
    digitalWrite(buzzpin,HIGH);
    delay(wT);
    digitalWrite(buzzpin,LOW);
  }
}