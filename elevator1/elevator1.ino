void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  const int up = !digitalRead(3);
  const int down = !digitalRead(2);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  if (up == 1 && down == 1) {
    void;
  }
  else {
    if (up == 1) {
      digitalWrite(4, HIGH);
      Serial.println("4 is high");
    }
    else if (down == 1) {
      digitalWrite(5, HIGH);
      Serial.println("5 is high");
    }
  };
}