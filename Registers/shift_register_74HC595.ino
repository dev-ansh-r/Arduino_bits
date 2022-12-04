int latchpin=11;
int clockpin=9;
int datapin=12;
int wt=250;

byte LEDs=0xFF;
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
  shiftOut(datapin,clockpin,LSBFIRST,LEDS);
  digitalWrite(latchpin,HIGH);
  delay(wT);
}
