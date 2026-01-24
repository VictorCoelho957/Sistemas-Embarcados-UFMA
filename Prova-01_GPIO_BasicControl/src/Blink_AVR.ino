#include <avr/io.h>
#include <util/delay.h>

void setup()
{
  // No código AVR puro, o setup é geralmente feito no início do main, 
  // mas o TinkerCad aceita a estrutura do Arduino.
  DDRB = 0xff; // Configura todos os pinos do PORTB como SAÍDA
}

void loop()
{
  PORTB = 0xff;     // Liga todos os pinos do PORTB (HIGH) -> LED ACENDE
  _delay_ms(500);   // Espera 500ms
  PORTB = 0x00;     // Desliga todos os pinos (LOW) -> LED APAGA
  _delay_ms(500);   // Espera 500ms
}