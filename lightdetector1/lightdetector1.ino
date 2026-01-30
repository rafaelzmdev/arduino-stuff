void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  int lightValue = analogRead(A0);
  Serial.println(lightValue);
  if (lightValue > 1000) {
    digitalWrite(4, HIGH);
  }
  else if (lightValue > 900 && lightValue < 1000) {
    digitalWrite(3, HIGH);
  }
  else if (lightValue < 900) {
    digitalWrite(2, HIGH);
  };
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(100);
}