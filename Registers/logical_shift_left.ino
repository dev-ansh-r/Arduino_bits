int latchpin=11;
int clockpin=9;
int datapin=12;
int wT=500;

byte mybyte=0b01010101;
//byte LEDs=0x00;
//byte LEDs=0x11;
//byte LEDs=0b01101110

void setup(){
  Serial.begin(9600);
  pinMode(latchpin,OUTPUT);
  pinMode(datapin,OUTPUT);
  pinMode(clockpin,OUTPUT);
}

void loop(){
  digitalWrite(latchpin,LOW);
  shiftOut(datapin,clockpin,LSBFIRST,mybyte);
  digitalWrite(latchpin,HIGH);
  
  Serial.println(mybyte,BIN);
  delay(wT);

  mybyte*=2;
}

