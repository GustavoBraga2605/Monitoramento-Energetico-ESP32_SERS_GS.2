// Pinos
int sensorLDR = 34;      // Entrada analógica do LDR
int ledBaixo  = 26;      // LED vermelho  → baixa luz
int ledMedio  = 27;      // LED amarelo   → luz média
int ledAlto   = 25;      // LED verde     → luz alta

void setup() {
  Serial.begin(115200);

  pinMode(ledBaixo, OUTPUT);
  pinMode(ledMedio, OUTPUT);
  pinMode(ledAlto, OUTPUT);

  Serial.println("Sistema de monitoramento de luminosidade iniciado.");
}

void loop() {
  int valor = analogRead(sensorLDR);  // leitura do LDR

  Serial.print("LDR = ");
  Serial.print(valor);
  Serial.print(" // ");

  // Limites (ajustáveis conforme a simulação)
  if (valor < 1000) {
    Serial.println("Luminosidade BAIXA");
    digitalWrite(ledBaixo, HIGH);
    digitalWrite(ledMedio, LOW);
    digitalWrite(ledAlto, LOW);

  } else if (valor >= 1000 && valor < 3000) {
    Serial.println("Luminosidade MÉDIA");
    digitalWrite(ledBaixo, LOW);
    digitalWrite(ledMedio, HIGH);
    digitalWrite(ledAlto, LOW);

  } else {
    Serial.println("Luminosidade ALTA");
    digitalWrite(ledBaixo, LOW);
    digitalWrite(ledMedio, LOW);
    digitalWrite(ledAlto, HIGH);
  }

  delay(300);
}
