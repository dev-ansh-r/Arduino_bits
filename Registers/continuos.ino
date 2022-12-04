// blink the led continuosly
int latchpin=11;
int clockpin=9;
int datapin=12;
int wt=250;

byte LEDs1=0xFF;
byte LEDs2=0x00;
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
    shiftOut(datapin,clockpin,LSBFIRST,LEDS1);
    digitalWrite(latchpin,HIGH);
    delay(wT);
    digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,LEDS2);
    digitalWrite(latchpin,HIGH);
    delay(wT);
}
