const int buzzerPin = 10;
const int flamePin = 8;
int redled = 9;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(flamePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int Flame = digitalRead(flamePin);

  if (Flame == HIGH) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(redled, HIGH);
    Serial.println("Fire Alarm");
    delay(1000);
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(redled, LOW);
    Serial.println("Fire Alarm not detect");
    delay(1000);
  }
}
