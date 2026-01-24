\# Prova 02: Calculadora Binária com Máquina de Estados e Display de 7 Segmentos 🧮



Este projeto consiste em uma calculadora embarcada desenvolvida com o microcontrolador \*\*ATmega328P\*\*. O sistema realiza a soma de dois valores (0 a 3) inseridos via interface de botões e exibe o resultado final em formato binário.



\## 🛠️ Especificações Técnicas

\* \*\*Microcontrolador:\*\* ATmega328P (Arduino Uno).

\* \*\*Entradas:\*\* 2 botões com resistores de \*pull-up\* internos (Incrementar e Enter).

\* \*\*Saída Visual:\*\* Display de 7 segmentos (cátodo comum) para interface do usuário e 3 LEDs para o resultado binário.



\## ⚙️ Lógica de Software (Máquina de Estados)

O firmware foi estruturado como uma máquina de estados finitos para gerenciar o fluxo de operação:

\* \*\*Estado 0:\*\* Seleção do primeiro valor (0-3).

\* \*\*Estado 1:\*\* Seleção do segundo valor (0-3).

\* \*\*Estado 2:\*\* Processamento e exibição da soma em binário nos LEDs.



Foi implementada uma lógica de \*\*Debounce\*\* via software para garantir a integridade da leitura dos botões.



\## 📐 Design de Hardware (KiCad)

O desenvolvimento incluiu o design completo da PCB no \*\*KiCad 9.0.6\*\*, com os seguintes diferenciais:

\* \*\*Regulação de Tensão:\*\* Uso de um regulador \*\*L7805\*\* com capacitores de filtragem para garantir alimentação estável de 5V ao sistema.

\* \*\*Otimização de Layout:\*\* Roteamento de trilhas para os 7 segmentos do display e barramento de saída para os LEDs.



\## 📺 Simulação e Validação

A validação lógica foi feita através do \*\*Tinkercad\*\*, garantindo que o mapeamento dos bits via `bitRead()` correspondesse corretamente aos pinos físicos do hardware.

