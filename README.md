# SSC0180

Relatório dos Trabalhos de Eletrônica para Computação dos alunos Arthur Domingues Rios (13731751) e Renan Sawaya Sacamoto Calusa (13672280)


Fonte:


Lista de componentes:
Ponte de Diodo / 3,90
Transformador de razão ≈ 7.05
Capacitor 470uF / 1,50
Led Verde / 0,50
Diodo Zenner 13V / 0,50
Transistor / 0,80
Resistor 3.3k ohms (x2) / 0,14
Resistor 120 ohms (x3) / 0,21 
Resistor 2.2k ohms / 0,07
Potenciômetro 5k ohms / 7,00
Protoboard / 39,10
Jumpers 

Total: 53,72

Ponte de diodo: A ponte formada por 4 diodos tem a finalidade de aproveitar os dois ciclos da fonte, tanto a positiva quanto a negativa.

Transformador: O transformador foi usado para transformar a voltagem de 127V para aproximadamente 22.4V.

Capacitor: Possui a função de armazenar e liberar carga durante os ciclos positivos e negativos da fonte.

Diodo Zenner: Regula a tensão para deixar passar apenas quando tiver 13V.

Transistor: Tem a finalidade de regular a corrente que passa.

Resistores: Foram utilizados para finalidades diferentes, como não queimar transistores e diodos, além de ajustar correntes e tensões em determinados pontos.

Potenciômetro: É uma resistência variável, então sua finalidade é ajustar a tensão na saída da fonte.

Projeto:

(imagem do eagle)




Link Falstad: https://tinyurl.com/2yx6b8p5







Funcionamento:

Link Vídeo: https://youtube.com/shorts/vt2bg8lfmSU?si=ytmtWbXtoHivT-LI
















Genius:



Lista de Componentes:
Arduino UNO / 108,00
Led Vermeho / 0,50
Led Amarelo / 0,50
Led Azul / 0,50
Led Verde / 0,50
Resistor de 150 ohms (x4) / 0,28
Resistor de 10k ohms (x4) / 0,28
Protoboard / 39,10
Jumpers

Total: 149,66

Resistores de 10k ohms: São os chamados Pull Down, que servem para manter o nível da porta em “LOW” enquanto o botão na for pressionado.

Resistores de 150 ohms: Utilizando a fórmula:

                            R = (V cc - V led)/i led

pode-se calcular a resistência necessária para colocar junto do led visando impedir a queima dele. No caso, a tensão utilizada foi de 5V, a do led de 2V e sua corrente de 20 mA, resultando na resistência de 150 ohms.

Leds coloridos: Servem para indicar a ordem em que o jogador deve apertar os botões.





Projeto:
















Funcionamento: 


Link Vídeo: https://youtube.com/shorts/dpLQA53glyI?si=3_36aOreR8srbzrT


Como mostrado no vídeo, a ideia do jogo é apertar os botões na ordem em que os leds piscam, com o máximo de 20 rodadas (no vídeo foram apenas 3 apenas para mostrar como funciona a animação de vitória).










Grupo:

Arthur Domingues Rios (13731751)
