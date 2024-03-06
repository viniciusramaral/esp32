//Desenvolva um programa 
//para Arduino que ao apertar um botão de 
//pressão, somente um led vermelho pisque e 
//quando soltar esse botão, outro led verde pisque.

#include <Arduino.h>

// Pinos para o botão e LEDs
const int botaoPin = 2;
const int ledVermelhoPin = 18;
const int ledVerdePin = 5;

// Variáveis para armazenar o estado do botão e LEDs
int estadoBotaoAnterior = HIGH;
int estadoBotaoAtual = HIGH;
int estadoLEDVermelho = LOW;
int estadoLEDVerde = LOW;


void setup() {

  Serial.begin(115200);

  // Inicializa os pinos como entrada (botão) e saídas (LEDs)
  pinMode(botaoPin, INPUT_PULLUP);
  pinMode(ledVermelhoPin, OUTPUT);
  pinMode(ledVerdePin, OUTPUT);

  // Inicializa os LEDs desligados
  digitalWrite(ledVermelhoPin, estadoLEDVermelho);
  digitalWrite(ledVerdePin, estadoLEDVerde);

}

void loop() {
// Lê o estado atual do botão
  estadoBotaoAtual = digitalRead(botaoPin);

  // Verifica se o botão foi pressionado (borda de descida)
  if (estadoBotaoAnterior == HIGH && estadoBotaoAtual == LOW) {
    // Pisca o LED vermelho
    piscaLED(ledVermelhoPin, 3);  // 3 piscadas

  } else if (estadoBotaoAnterior == LOW && estadoBotaoAtual == HIGH) {
    // Pisca o LED verde
    piscaLED(ledVerdePin, 3);  // 3 piscadas
  }

  // Atualiza o estado anterior do botão
  estadoBotaoAnterior = estadoBotaoAtual;
}

// Função para piscar um LED um determinado número de vezes
void piscaLED(int pinoLED, int vezes) {
  for (int i = 0; i < vezes; i++) {
    digitalWrite(pinoLED, HIGH);  // Liga o LED
    delay(500);                    // Aguarda 500 ms
    digitalWrite(pinoLED, LOW);   // Desliga o LED
    delay(500);                    // Aguarda 500 ms
  }
}
