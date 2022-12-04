byte mybyte=0x00;
//byte mybyte=B1111;
int wT=500;

void setup(){
  Serial.begin(9600);
  
}

void loop(){
  Serial.print(mybyte,DEC);
  Serial.print("    ");
  Serial.print(mybyte,BIN);
  Serial.print("    ");
  Serial.println(mybyte,HEX);
  mybyte+=1;
  delay(wT);
}
