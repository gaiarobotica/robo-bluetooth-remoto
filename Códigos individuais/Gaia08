void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char value = Serial.read();
    Serial.println(value);

    if (value == 'U') {
      Forward();
    } else if (value == 'D') {
      Backward();
    } else if (value == 'S') {
      Stop();
    } else if (value == 'L') {
      Left();
    } else if (value == 'R') {
      Right();
    }
  }
}

void Forward() {
  analogWrite(5, 157);
  digitalWrite(6, LOW);
  analogWrite(9, 150);
  digitalWrite(10, LOW);
}
void Backward() {
  analogWrite(6, 150);
  digitalWrite(5, LOW);
  analogWrite(10, 150);
  digitalWrite(9, LOW);
}
void Stop() {
  digitalWrite(5, LOW);
  digitalWrite(6, LOW); 
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}
void Left() {
  analogWrite(5, 150);
  digitalWrite(6, LOW); 
  analogWrite(10, 150);
  digitalWrite(9, LOW);
}
void Right() {
  analogWrite(6, 150);
  digitalWrite(5, LOW);
  analogWrite(9, 150);
  digitalWrite(10, LOW);
}
