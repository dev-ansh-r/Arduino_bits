int speedPin=5;
int dir1 = 4;
int dir2=3;
int mSpeed;
int jpin=A1;
int jval;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(jpin,INPUT);
}

void loop() {
  jval=analogRead(jpin);
  Serial.println(jval);
  if(jval<512){
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    mspeed=(-255./512.)*jval+255.;
    analogWrite(speedPin,mSpeed);
  }
  if(jval>=512){
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    mspeed=(255./512.)*jval-255.;
    analogWrite(speedPin,mSpeed);
  }
  }  