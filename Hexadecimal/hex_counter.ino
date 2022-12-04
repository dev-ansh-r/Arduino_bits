byte mybyte=0x0;
int wT=500;

void setup(){
  Serial.begin(9600);
  
}

void loop(){
  Serial.println(mybyte,HEX);
  mybyte+=1;
  delay(wT);
}
