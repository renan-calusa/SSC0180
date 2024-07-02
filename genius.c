// Variaveis globais e blibiotecas
bool game_over = false;
int* sequence;
int MAXROUND = 3;
int rodada = 1;
int leds[] = {2, 3, 4, 5}; // Saidas digitais dos Leds
int buttons[] = {8, 9, 10, 11}; // Saidas digitais dos botoes


void setup() {
  
  // Inicializar o vetor de sequencia e popular com numeros aleatorios [0, 3]
  sequence = (int*) malloc(sizeof(int)*MAXROUND);
  randomSeed(analogRead(0));
  for (int i=0; i<MAXROUND; i++) sequence[i] = random(4);

  // Config dos leds
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // Config dos botoes
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}


void loop() {

  // Verificar se o jogo acabou por numero de round
  if (rodada == MAXROUND + 1) {

    // Animacaçao de vitoria
    
    for (int j=0; j<3; j++) {
      for (int i=0; i<4; i++) {
    
        digitalWrite(leds[i], HIGH);
        delay(100);
        digitalWrite(leds[i], LOW);
        delay(100);
      }
    }

    reset_game();
  }

  // Verificar fim de jogo por resposta incorreta
  else if (game_over) {

    reset_game();
  }

  // Mostra a sequencia do proximo round
  showSequence();
  
  // Espera o input do jogador e verifica a resposta para a sequencia inteira
  waitPlayer();
  
  rodada++;
}


void showSequence() {
  
  // Mostrar a sequencia da rodada atual, ligando os leds
  for (int i=0; i<rodada; i++) {
  
    digitalWrite(leds[sequence[i]], HIGH); // Liga o led atual
    delay(500);
    digitalWrite(leds[sequence[i]], LOW); // Desliga o led atual
    delay(500);
  }
}


void waitPlayer() {

  for (int i=0; i<rodada; i++) {
  
    bool notPlay = true;
    int answer;
  
    while (notPlay) {

      // Verificar qual botao foi pressionado
      for (int k=0; k<4; k++) {
      
        if ((digitalRead(buttons[k]) == HIGH)) {
          
          // k guarda qual botao foi pressionado
          digitalWrite(leds[k], HIGH);
          delay(200);
          digitalWrite(leds[k], LOW);
          delay(600);
          
          notPlay = false;
          answer = k;
          break;
        }
      }
    }
    
    // Verificar se errou
    checkPlay(answer, i);
  }
}


void checkPlay(int guess, int rodada) {

  if (sequence[rodada] != guess) {
    
    // Caso que errou - pisca todos os leds 5 vezes
    for (int i=0; i<5; i++) {
    
      for (int k=0; k<4; k++) digitalWrite(leds[k], HIGH);
      delay(100);
      for (int k=0; k<4; k++) digitalWrite(leds[k], LOW);
      delay(100);
    }
    
    // Terminar o jogo por escolha errada
    game_over = true;
    rodada--;
  }
  
  // Caso acerte, apenas vai para o proximo round
}


void reset_game() {

  randomSeed(analogRead(0));
  for (int i=0; i<MAXROUND; i++) sequence[i] = random(4);
  rodada = 1;
  game_over = false;
  delay(2000);
}
