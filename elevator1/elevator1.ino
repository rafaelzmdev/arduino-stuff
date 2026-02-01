void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  int blue = !digitalRead(2);
  int red = !digitalRead(3);
  delay(10);
  if (red != blue) {
    if (blue = 1) {
      digitalWrite(4, HIGH);
    }
    else if (red = 1) {
      digitalWrite(5, HIGH);
    };
  };
}