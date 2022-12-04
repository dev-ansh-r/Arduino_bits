float sinval;
float cosval;
float j;
float parab;
float parab2;

void setup(){
  Serial.begin(9600);
}

void loop(){
  for(j=-4;j<=4;j=j+0.1){
    //sinval=sin(j);
    //cosval=cos(j);
//    sinval=sin(j*10);
//    cosval=cos(2*j);
    parab=j*j;
    parab2=-(j*j);
    Serial.print(parab);
    Serial.print(",");
    Serial.println(parab2);
  }
}

