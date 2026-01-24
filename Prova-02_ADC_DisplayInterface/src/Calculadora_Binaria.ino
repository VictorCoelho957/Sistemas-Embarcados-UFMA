// Mapeamento dos segmentos (a, b, c, d, e, f, g) nos pinos 2 a 8
const int segmentos[] = {2, 3, 4, 5, 6, 7, 8};

// Mapa para números 0, 1, 2, 3 (Catódica)
const byte digitos[] = {0x3F, 0x06, 0x5B, 0x4F}; 

int valor1 = 0, valor2 = 0;
int cont = 0;   // Contador de 0 a 3 
int estado = 0; // 0: Valor1, 1: Valor2, 2: Resultado 
void setup() {
  for (int i = 2; i <= 13; i++) pinMode(i, OUTPUT);
  pinMode(A0, INPUT_PULLUP); // Botão Incrementar [
  pinMode(A1, INPUT_PULLUP); // Botão Enter 
}

void mostrarNoDisplay(int n) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentos[i], bitRead(digitos[n], i));
  }
}

void loop() {
  if (estado < 2) {
    mostrarNoDisplay(cont);
  } else {
    for (int i = 0; i < 7; i++) digitalWrite(segmentos[i], LOW); // Zera display 
  }

  // Lógica do Botão Incrementar (A0)
  if (digitalRead(A0) == LOW) {
    cont++; 
    if (cont > 3) cont = 0; // Limite de 0 a 3 
    delay(250); // Debounce simples 
  }

  // Lógica do Botão Enter (A1) - Máquina de Estados [
  if (digitalRead(A1) == LOW) {
    if (estado == 0) { 
      valor1 = cont; cont = 0; estado = 1; // Salva 1º valor 
    } else if (estado == 1) { 
      valor2 = cont; estado = 2;           // Salva 2º e soma 
    } else { 
      estado = 0; cont = 0;                // Reinicia 
      digitalWrite(11, LOW); digitalWrite(12, LOW); digitalWrite(13, LOW);
    }
    delay(250); // Debounce 
  }

  // Mostra Resultado em Binário nos LEDs 
  if (estado == 2) {
    int soma = valor1 + valor2;
    digitalWrite(13, bitRead(soma, 0)); // Bit menos significativo
    digitalWrite(12, bitRead(soma, 1));
    digitalWrite(11, bitRead(soma, 2)); // Bit mais significativo
  }
}