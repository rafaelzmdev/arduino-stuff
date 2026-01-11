void setup() {
  Serial.begin(9600);
}

void loop() {
    for (int number = 125; number > 0;) {
        digitalWrite(2, HIGH);
        delay(number);
        number -=1;
        digitalWrite(3, HIGH);
        delay(number);
        number -=1;
        digitalWrite(5, HIGH);
        delay(number);
        number -=1;
        digitalWrite(2, LOW);
        delay(number);
        number -=1;
        digitalWrite(3, LOW);
        delay(number);
        number -=1;
        digitalWrite(5, LOW);
        delay(number);
        number -=1;
        Serial.println(number);
        if (number < 7){
            break;
        };
    };
    for (int number = 1; number < 125;) {
        digitalWrite(5, HIGH);
        delay(number);
        number +=1;
        digitalWrite(3, HIGH);
        delay(number);
        number +=1;
        digitalWrite(2, HIGH);
        delay(number);
        number +=1;
        digitalWrite(5, LOW);
        delay(number);
        number +=1;
        digitalWrite(3, LOW);
        delay(number);
        number +=1;
        digitalWrite(2, LOW);
        delay(number);
        number +=1;
        Serial.println(number);
        if (number > 125){
            break;
        };
    };
};
