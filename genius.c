#define MAXROUND 20


// Variaveis globais e blibiotecas
bool game_over = false;
int* sequence;
int round = 1;
int leds[] = {1, 2, 3, 4} // Saidas digitais dos Leds
int buttons[] = {5, 6, 7, 8} // Saidas digitais dos botoes


void setup() {
	
	// Inicializar o vetor de sequencia e popular com numeros aleatorios [0, 3]
	sequence = (int*) malloc(sizeof(int)*MAXROUND);
	for (int i=0; i<MAXROUND; i++) sequence[i] = random(4);
}


void loop() {

	// Verificar se o jogo acabou por numero de round ou resposta incorreta
	if (round == MAXROUND && game_over) return; // (...)

	// Mostra a sequencia do proximo round
	showSequence();
	
	// Espera o input do jogador e verifica a resposta para a sequencia inteira
	waitPlayer();
	
	round++;
}


void showSequence() {
	
	// Mostrar a sequencia da rodada atual, ligando os leds
	for (int i=0; i<round; i++) {
	
		digitalWrite(leds[sequence[i]], HIGH); // Liga o led atual
		delay(500);
		digitalWrite(leds[sequence[i]], LOW); // Desliga o led atual
		delay(100);
	}
}


void waitPlayer() {

	for (int i=0; i<round; i++) {
	
		bool notPlay = true;
		int answer;
	
		while (notPlay) {

			// Verificar qual botao foi pressionado
			for (int k=0; k<4; k++) {
			
				if (digitalRead(buttons[k] == HIGH)) {
					
					// k guarda qual botao foi pressionado
					digitalWrite(leds[k], HIGH);
					delay(500);
					digitalWrite(leds[k], LOW);
					delay(100);
					
					notPlay = false;
					answer = k;
				}
			}
		}
		
		// Verificar se errou
		checkPlay(answer, i);
	}
}


void checkPlay(int guess, int round) {

	if (sequence[round] != guess) {
		
		// Caso que errou - pisca todos os leds 3 vezes
		for (int i=0; i<3; i++) {
		
			for (int k=0; k<4; k++) digitalWrite(leds[k], HIGH);
			delay(100);
			for (int k=0; k<4; k++) digitalWrite(leds[k], LOW);
			delay(100);
		}
		
		// Terminar o jogo por escolha errada
		game_over = true;
	}
	
	// Caso acerte, apenas vai para o proximo round
}
