//using push button as a switch to control the LED ie
//When the led is OFF and you press the button the LED will turn ON and when you press the button again the LED will turn OFF
//when the LED is ON and you press the button the LED will turn OFF and when you press the button again the LED will turn ON

int ledPin=8;
int ledState=0;
int buttonPin=12; //pull-up resistor
int buttonval;
int buttonOld=1;
int buttonNew;
float wT=100;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  buttonNew=digitalRead(buttonval);
  if(buttonOld==0 && buttonNew==1){
    if(ledState==0){
      digitalWrite(ledPin,HIGH);
      ledState=1;
    }
    else{
      digitalWrite(ledPin,LOW);
      ledState=0;
    }
  }
  buttonOld=buttonNew;
  delay(wT);
}  