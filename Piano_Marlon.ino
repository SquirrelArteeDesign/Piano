// Constantes para armazenar os pinos de cada componenete conectado
const int btn1 = 5;
const int btn2 = 6;
const int btn3 = 7;
const int buzzer = 10;
const int ledG = 11;
const int ledY = 12;
const int ledR = 13;

// Frequencia de cada nota musical
const int c = 261; // Dó
const int d = 293; // Ré
const int e = 329; // Mi
const int f = 349; // Fá
const int g = 391; // Sol
const int a = 440; // Lá
const int b = 493; // Sí

void setup() {
  // Configura os Pinos
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledR, OUTPUT);
}

void loop() {
  // Definindo estados
  bool estado_btn1 = digitalRead(btn1);
  bool estado_btn2 = digitalRead(btn2);
  bool estado_btn3 = digitalRead(btn3);

  if (estado_btn1 == LOW) {
    tone(buzzer, c);
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, LOW);
    digitalWrite(ledG, HIGH);
  }
  else if (estado_btn2 == LOW) {
    tone(buzzer, d);
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, HIGH);
    digitalWrite(ledG, LOW);
  }
  else if (estado_btn3 == LOW) {
    tone(buzzer, e);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledY, LOW);
    digitalWrite(ledG, LOW);
  }
  else {
    noTone(buzzer);
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, LOW);
    digitalWrite(ledG, LOW);
  }

}
