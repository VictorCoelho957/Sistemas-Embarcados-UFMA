\# Controle de I/O Digital e Temporização 🚦



Este projeto representa a avaliação inicial da disciplina de Sistemas Embarcados, focando no controle fundamental de \*\*GPIOs (General Purpose Input/Output)\*\* e lógica de programação estruturada para microcontroladores.



\## 🎯 Objetivos

\* Manipular saídas digitais para acionamento de cargas (LEDs).

\* Implementar algoritmos de controle de fluxo e temporização (`delay`).

\* Compreender o ciclo de funcionamento (\*loop\*) de um sistema embarcado.



\## ⚙️ Fundamentação Técnica

O desenvolvimento baseou-se na manipulação dos registradores internos do \*\*ATmega328P\*\*, abstraídos pela linguagem Wiring/C++:



\### 1. Configuração de Portas (DDR)

A definição dos pinos como saída altera o registrador \*\*DDRx\*\* (Data Direction Register), configurando o hardware para drenar ou fornecer corrente.



\### 2. Estados Lógicos (PORT)

O controle de "Ligado" (5V/HIGH) e "Desligado" (0V/LOW) é realizado através da escrita no registrador \*\*PORTx\*\*, alterando o nível de tensão no pino físico do microcontrolador.



\### 3. Temporização

O uso de funções de atraso (`delay`) permite criar intervalos precisos de tempo, essenciais para a percepção visual do acionamento sequencial (efeito de semáforo ou blink).



\## 🛠️ Hardware Utilizado

\* \*\*Microcontrolador:\*\* Arduino Uno.

\* \*\*Atuadores:\*\* LEDs (Diodo Emissor de Luz) com resistores limitadores de corrente para proteção das portas do uC.



\## 📸 Simulação

\*(Insira aqui o print do seu circuito no TinkerCad)\*



---

\*Disciplina: Sistemas Embarcados | LabSECI - UFMA\*

