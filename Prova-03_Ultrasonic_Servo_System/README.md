\# Prova 03: Mostrador de Sensor Híbrido (Digital/Analógico) 📡



Este projeto consiste na implementação de um sistema de monitoramento que utiliza o microcontrolador \*\*ATmega328P\*\* para processar dados de um sensor e exibi-los em duas interfaces distintas.



\## 🛠️ Especificações do Projeto

\* \*\*Sensor Utilizado:\*\* Ultrassônico HC-SR04 (Medição de distância via Time-of-Flight)\[cite: 124, 134].

\* \*\*Mostrador Analógico:\*\* Servo Motor SG90 atuando como um ponteiro físico\[cite: 127, 133].

\* \*\*Mostrador Digital:\*\* Telemetria via Monitor Serial (UART).

\* \*\*Alerta Visual:\*\* LED de segurança para detecção em curto alcance (< 10cm).



\## ⚙️ Funcionamento e Lógica

Conforme solicitado na avaliação, o sistema realiza a leitura do sensor e converte a informação para a movimentação do eixo do servo\[cite: 126]:

1\. \*\*Aquisição:\*\* Leitura da duração do pulso de eco do sensor ultrassônico.

2\. \*\*Processamento:\*\* Conversão da distância (2cm a 50cm) para um ângulo correspondente (0° a 180°) no servo\[cite: 127].

3\. \*\*Exibição:\*\* O servo posiciona o ponteiro proporcionalmente à distância, enquanto a telemetria digital envia os valores exatos via Serial\[cite: 126].



\## 📺 Validação

O circuito foi validado via simulação no \*\*Tinkercad\*\*, garantindo a precisão da biblioteca de manuseio do servo e a correta integração dos componentes.

