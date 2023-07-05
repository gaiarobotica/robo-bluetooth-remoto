
void setup() {
  // Inicializa a transferência de dados com o computador, 9600 Bytes/s
  Serial.begin(9600);
}

void loop() {
  // "Serial" são as portas Rx Tx do Arduino
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
  // Roda direita
  analogWrite(5, 157);
  digitalWrite(6, LOW);
  // Roda esquerda
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
  analogWrite(5, 120);
  digitalWrite(6, LOW);
  analogWrite(10, 120);
  digitalWrite(9, LOW);
}
void Right() {
  analogWrite(6, 120);
  digitalWrite(5, LOW);
  analogWrite(9, 120);
  digitalWrite(10, LOW);
}