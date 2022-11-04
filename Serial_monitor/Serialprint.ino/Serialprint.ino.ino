//Assigning values to variables

float radius=1; 
int delayTime = 750;
float area;
String String1="Area of the circle with radius ";
float pi=3.14;

void setup() {
  Serial.begin(9600);
}

void loop() {
  area = pi*radius*radius;
  Serial.print(String1);
  Serial.print(radius);
  Serial.print(" is ");
  Serial.println(area);
  radius=radius+1;
  delay(delayTime);
}
