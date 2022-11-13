int j;
int count = 1;
int wT=500; //Wait time
void setup() {
  Serial.begin(9600);
}

void loop() {
  for(j=10;j>=count;j--){
    Serial.println(j);
    delay(wT);
  }
Serial.println();
}