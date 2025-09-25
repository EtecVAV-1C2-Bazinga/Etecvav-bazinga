#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

using namespace std;

// Funções do jogo
void inicializarJogo();
void exibirForca(int erros);
void exibirPalavraOculta(const char* palavraOculta, int tamanho);
void exibirLetrasUsadas(const char* letrasUsadas);
bool verificarLetra(char letra, const char* palavraSecreta, char* palavraOculta);
bool jogarNovamente();

// Variáveis globais
char palavras[30][30] = {"BOB ESPONJA", "RICK AND MORTY", "HORA DE AVENTURA", "FUTURAMA", "O INCRIVEL MUNDO DE GUMBALL", "THE BOYS", "COBRA KAI", "OS SIMPSONS",
						 "FAMILY GUY", "CLARENCIO O OTIMISTA", "APENAS UM SHOW", "BREAKING BAD", "SQUID GAME", "SCOOBY DOO", "LOKI", "INVENCIVEL", 
						 "LOONEY TUNES", "PICA PAU", "PADRINHOS MAGICOS", "FLINSTONES", "PEPPA PIG", "SUPERNATURAL", "DEXTER", "BETTER CALL SAUL", "THE BIG BANG THEORY",
						 "TEEN TITANS", "HENRY DANGER", "WANDINHA", "GAME OF THRONES", "STRANGER THINGS"};

int main() {
    srand(time(NULL));
    char resposta[5];
    
    cout << "=== JOGO DA FORCA ===" << endl;
    cout << "Tema: SERIES E DESENHOS ";
    cout << "\n\nQuer jogar? (s/n)? ";
    cin >> resposta;
    
    // Converter para minúsculas para comparação
    for(int i = 0; resposta[i]; i++) {
        resposta[i] = toupper(resposta[i]);
    }
    
    if(strcmp(resposta, "S") == 0) {
        cout << "Otimo! Vamos comecar!\n" << endl;
        
        do {
            inicializarJogo();
        } while(jogarNovamente());
        
        cout << "Obrigado por jogar! " << endl;
    } else {
        cout << "Ate a proxima!" << endl;
    }
    
    return 0;
}
