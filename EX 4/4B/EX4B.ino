int led = 12;
int buzzer = 10;
int smoke = A5;
int sensorThres = 300;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smoke, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smoke);
  Serial.print("Smoke Level: ");
  Serial.println(analogSensor);

  if (analogSensor > sensorThres) {
    digitalWrite(led, HIGH);
    tone(buzzer, 1000);
    Serial.print("Smoke detected ");
  } else {
    digitalWrite(led, LOW);
    noTone(buzzer);
    Serial.print("Smoke not detected ");
  }

  delay(100);
}
