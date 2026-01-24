# Prova 01: Controle de GPIO com ATtiny85 e Regulagem de Tensão 💡

Este projeto demonstra o controle de baixo nível (Bare Metal) do microcontrolador **ATtiny85**, focando na manipulação direta de registradores e no projeto de hardware para alimentação estável.

## 🛠️ Especificações Técnicas
* **Microcontrolador:** ATtiny85 (Arquitetura AVR RISC).
* **Linguagem:** C com manipulação direta de registradores (DDR/PORT).
* **Gestão de Energia:** Implementação de regulador de tensão **L7805** para converter entrada DC em 5V estáveis, protegida por capacitores de desacoplamento.

## ⚙️ Implementação de Firmware
Diferente do uso de funções de abstração (como `pinMode`), o código utiliza escrita direta nos registradores de I/O para maior eficiência:
* **DDRB (Data Direction Register B):** Configurado como `0xFF` para definir todos os pinos como saída.
* **PORTB:** Utilizado para alternar os estados lógicos (High/Low) dos pinos com temporização via `_delay_ms`.

## 📐 Design de Hardware (KiCad)
O projeto inclui o ciclo completo de desenvolvimento de hardware:
1.  **Esquema Elétrico:** Proteção de entrada com diodo e filtragem com capacitores eletrolíticos.
2.  **Layout de PCB:** Roteamento otimizado para dimensões reduzidas, ideal para sistemas embarcados compactos.
3.  **Visualização 3D:** Validação mecânica dos componentes instalados.

## 📺 Simulação
A lógica foi validada via **Tinkercad** antes da prototipagem física, garantindo a correta polarização do LED através de resistor limitador calculado por:
$$R = \frac{V_{cc} - V_{led}}{I_{led}}$$