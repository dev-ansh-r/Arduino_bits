byte mybyte=0xAB;
// byte mybyte=0x0;
// byte mybyte=0xFF;
//byte mybyte=0;
int wT=500;

void setup(){
  Serial.begin(9600);
  
}

void loop(){
  Serial.println(mybyte,BIN);
  mybyte+=1;
  delay(wT);
}
