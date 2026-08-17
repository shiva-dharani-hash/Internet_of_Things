void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.print("potentiometer value : ");
  Serial.println(sensorValue);
  delay(100);
}
