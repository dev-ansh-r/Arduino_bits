byte mybyte=0xAB;
int wT=500;

void setup(){
  Serial.begin(9600);
  
}

void loop(){
  Serial.println(mybyte,BIN);
  mybyte+=1;
  delay(wT);
}
