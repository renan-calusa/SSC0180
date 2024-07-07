# SSC0180

Relatório dos Trabalhos de Eletrônica para Computação dos alunos Arthur Domingues Rios (13731751) e Renan Sawaya Sacamoto Calusa (13672280)

*As imagens dos projetos e o código utilizado estão em suas respectivas pastas*


# Fonte de Tensão Regulável (3V a 12V):


Lista de componentes:
* Ponte de Diodo - R$3,90
* Transformador de razão ≈ 7.05 espiras (25V)
* Capacitor 470uF - R$1,50
* Led Verde - R$0,50
* Diodo Zenner 13V - R$0,50
* Transistor / 0,80
* Resistor 3.3k ohms (x2) - R$0,14
* Resistor 120 ohms (x3) - R$0,21 
* Resistor 2.2k ohms - R$0,07
* Potenciômetro 5k ohms - R$7,00
* Protoboard - R$39,10
* Jumpers 

Total: R$53,72


1. Transformador: O transformador foi usado para transformar a voltagem de 127V para aproximadamente 25V.

2. Ponte de diodo: A ponte formada por 4 diodos tem a finalidade de aproveitar os dois ciclos da fonte, tanto a positiva quanto a negativa (cada diodo gasta 0.7 volts, portanto o gasto da ponte é 1.4 volts).

3. Capacitor: Possui a função de armazenar e liberar carga durante os ciclos positivos e negativos da fonte, fazendo com que mantenha-se uma carga "constante" (filtro de fonte).

4. Diodo Zenner: Regula a tensão para deixar passar apenas quando tiver 13V.

5. Transistor: Tem a finalidade de regular a corrente que passa.

6. Resistores: Foram utilizados para finalidades diferentes, como não queimar transistores e diodos, além de ajustar correntes e tensões em determinados pontos.

7. Potenciômetro: É uma resistência variável, então sua finalidade é ajustar a tensão na saída da fonte.

Projeto:

* Link Falstad: https://tinyurl.com/2yx6b8p5


### Funcionamento:


[![Video1](https://img.youtube.com/vi/vt2bg8lfmSU/maxresdefault.jpg)](https://youtube.com/shorts/vt2bg8lfmSU?si=ytmtWbXtoHivT-LI)


# Genius:


Lista de Componentes:
* Arduino UNO - R$108,00
* Led Vermeho - R$0,50
* Led Amarelo - R$0,50
* Led Azul - R$0,50
* Led Verde - R$0,50
* Resistor de 150 ohms (x4) - R$0,28
* Resistor de 10k ohms (x4) - R$0,28
* Protoboard - R$39,10
* Jumpers


Total: R$149,66


1. Resistores de 10k ohms: São os chamados Pull Down, que servem para manter o nível da porta em “LOW” enquanto o botão na for pressionado.

2. Resistores de 150 ohms: Utilizando a fórmula:

                            R = (V cc - V led)/i led

pode-se calcular a resistência necessária para colocar junto do led visando impedir a queima dele. No caso, a tensão utilizada foi de   
5V, a do led de 2V e sua corrente de 20 mA, resultando na resistência de 150 ohms.

3. Leds coloridos: Servem para indicar a ordem em que o jogador deve apertar os botões.


Projeto:

* Link do Tinkercad: https://www.tinkercad.com/things/bYEC9kFvOmy-genius


### Funcionamento: 


[![Video2](https://img.youtube.com/vi/dpLQA53glyI/maxresdefault.jpg)](https://youtube.com/shorts/dpLQA53glyI?si=336aOreR8srbzrT]I)


* Como mostrado no vídeo, a ideia do jogo é apertar os botões na ordem em que os leds piscam, com o máximo de 20 rodadas (no vídeo foram apenas 3 apenas para mostrar como funciona a animação de vitória).
