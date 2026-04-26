# Prova 02: Calculadora Binária com Máquina de Estados 🧮



Desenvolvimento de uma calculadora funcional para soma de dois números (0 a 3) utilizando o microcontrolador *ATmega328P*.



## 🛠️ Requisitos de Hardware (KiCad)

Arquitetura Mínima: Uso do ATmega328P com cristal externo e capacitores de carga.

Gestão de Energia Regulador de tensão para 5V e capacitores de desacoplamento, com bornes para alimentação externa (7-12V).

Interface Display de 7 segmentos (catodo comum) para entrada e 3 LEDs para o resultado da soma em binário .



## ⚙️ Firmware e Lógica

Máquina de Estados O sistema alterna entre entrada do Valor 1, Valor 2 e exibição do Resultado.

Debounce Implementação de filtro via temporização (delay) para garantir a leitura correta dos botões.

Lógica Binária O resultado da soma é processado e decomposto em bits para acionamento individual dos LEDs.

