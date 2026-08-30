Discente: Gabriela Baartz Ferreira
Docente: Amanda Paul Dull

Sistema de Controle de 2 LEDs com Botão

Este projeto utiliza um botão para controlar o funcionamento de dois LEDs conectados ao Arduino. A cada acionamento do botão, o sistema altera o estado dos LEDs de forma sequencial.

O funcionamento ocorre da seguinte maneira:

1º clique: LED 1 aceso e LED 2 apagado;
2º clique: LED 1 apagado e LED 2 aceso;
3º clique: ambos os LEDs apagados;
4º clique: o ciclo retorna ao primeiro estado e se repete continuamente.

O Arduino realiza a leitura do botão através do pino digital 8 e controla os LEDs pelos pinos digitais 10 e 13.

Ligações Utilizadas
Botão conectado ao pino digital 8;
LED 1 conectado ao pino digital 10;
LED 2 conectado ao pino digital 13;
Resistor de 10 kΩ para o botão (pull-down);
Resistores de 220 Ω para proteção dos LEDs.
Materiais Necessários

Objetivo

Demonstrar o uso de estruturas condicionais e variáveis de controle no Arduino, permitindo alternar entre diferentes estados dos LEDs por meio de um único botão.