int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0;
  voltage /= 1024.0;

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  float temperatureC = (voltage - 0.5) * 100;
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" degrees C");

  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print("Temperature: ");
  Serial.print(temperatureF);
  Serial.println(" degrees F");

  Serial.println();
  delay(1000);
}
