// LM35 is connected to Analog PIN
#define sensorPin A0

void setup() {
  Serial.begin(9600);

}

void loop() {
  int adcData = analogRead(sensorPin);

  // Convert that ADC Data into voltage
  float voltage = adcData * (5.0 / 1024.0);

  // Convert the voltage into temperature
  float temperature = voltage * 100;

  // Print the temperature data
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("*C");
  delay(800); // wait a second between readings
}