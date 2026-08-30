int ledVermelho = 10;
int ledVerde = 13;
int btn = 8;

int estado = 0;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {

  if (digitalRead(btn) == HIGH) {
    estado++;

    if (estado == 4) {
      estado = 1;
    }z

    while (digitalRead(btn) == HIGH) {
    }

    delay(100);
  }

  switch (estado) {
    case 1:
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledVerde, LOW);
      break;

    case 2:
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledVerde, HIGH);
      break;

    case 3:
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledVerde, LOW);
      break;
  }
}