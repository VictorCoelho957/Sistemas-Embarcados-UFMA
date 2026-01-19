\### ⚡ Desafios de Gestão de Energia e Estabilidade

Durante a implementação, foi identificado que o acionamento do Servo Motor (carga indutiva) poderia introduzir ruídos na linha de alimentação (VCC), afetando a estabilidade do microcontrolador e a precisão do sensor ultrassônico.



Aplicando os conceitos de \*\*Gestão de Energia\*\* da disciplina, a solução adotada focou na robustez das conexões de energia:

\* \*\*Aterramento Comum (Common Ground):\*\* Unificação das referências de GND entre a fonte, o sensor e o atuador para evitar flutuações de potencial.

\* \*\*Distribuição de Corrente:\*\* Utilização de barramentos de protoboard dedicados para garantir que a corrente de pico do servo não causasse queda de tensão ("sag") no pino de reset do ATmega328P.

