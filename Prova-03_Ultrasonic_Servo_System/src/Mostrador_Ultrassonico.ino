#include <Servo.h> // Biblioteca nativa (não dá erro)

const int TRIG = 12;
const int ECHO = 11;
const int PINO_SERVO = 9;
const int LED_ALERTA = 13;

Servo meuMostrador;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED_ALERTA, OUTPUT);
  meuMostrador.attach(PINO_SERVO);
  
  Serial.begin(9600); // Mostrador Digital via Serial
  Serial.println("--- Sistema Iniciado ---");
}

void loop() {
  // 1. Leitura do Sensor
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duracao = pulseIn(ECHO, HIGH, 30000); // Timeout para não travar
  int distancia = duracao * 0.034 / 2;

  // 2. MOSTRADOR DIGITAL (Monitor Serial)
  Serial.print("Distancia Detectada: ");
  if (distancia > 0 && distancia < 400) {
    Serial.print(distancia);
    Serial.println(" cm");
  } else {
    Serial.println("Fora de alcance");
  }

  // 3. MOSTRADOR ANALÓGICO (Servo SG90)
  // Converte 2cm a 50cm para 0 a 180 graus
  int angulo = map(distancia, 2, 50, 0, 180);
  meuMostrador.write(constrain(angulo, 0, 180));

  // 4. LED DE ALERTA
  // Acende se o objeto estiver a menos de 10 cm
  digitalWrite(LED_ALERTA, (distancia > 0 && distancia < 10) ? HIGH : LOW);

  delay(100); 
}