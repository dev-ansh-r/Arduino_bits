#define rainfall A0

#define buzzer 5

int value;

int set=10;

void setup() {

  Serial.begin(9600);

  pinMode(buzzer,OUTPUT);

  pinMode(rainfall,INPUT);
  }


void loop() {

  

 value = analogRead(rainfall);

 Serial.println("LOL");


 Serial.println(value);

 value = map(value,0,1023,225,0);

 Serial.println(value);

 if(value>=set){

  Serial.println("rain detected");

  digitalWrite(buzzer,HIGH);

 }

 else{

  digitalWrite(buzzer,LOW);

 }

 delay(200);

}

