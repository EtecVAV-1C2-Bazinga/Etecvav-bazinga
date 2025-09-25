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

void inicializarJogo() {
	// Variaveis char
    char palavraSecreta[30];
    char palavraOculta[30];
    char letrasUsadas[27] = ""; // 26 letras + terminador nulo
    
    // Variaveis int (numeros)
    int tentativas = 0;
    int erros = 0;
    int letrasAcertadas = 0;
    char letra;
    
    
    
    
    // Escolher palavra aleatória
    int indice = rand() % 30;
    strcpy(palavraSecreta, palavras[indice]);
    int tamanhoPalavra = strlen(palavraSecreta);
    
    
    
    
    
    // Coloca a palavra "oculta" esconde ela
    for(int i = 0; i < tamanhoPalavra; i++) {
        if(palavraSecreta[i] == ' ') {
            palavraOculta[i] = ' ';  // Mantém espaços visíveis
            letrasAcertadas++;       // Conta espaços como já acertados
        } else {
            palavraOculta[i] = '_';
        }
    }
    palavraOculta[tamanhoPalavra] = '\0';
    
    // Mostra a quantidade de letras da palavra
    cout << "\n\nA palavra tem " << tamanhoPalavra << " caracteres (incluindo espacos)." << endl;
    
  
	// Loop principal do jogo (onde td acontece)
    while(erros < 6 && letrasAcertadas < tamanhoPalavra) {
        cout << "\n=========================" << endl;
        
        exibirForca(erros);
        exibirPalavraOculta(palavraOculta, tamanhoPalavra);
        exibirLetrasUsadas(letrasUsadas);
        cout << "Erros: " << erros << "/6" << endl;
        
        cout << "\nDigite uma letra: ";
        cin >> letra;
        letra = toupper(letra);
        
        // Verificar se a letra já foi usada
        bool jaUsada = false;
        for(int i = 0; letrasUsadas[i]; i++) {
            if(letrasUsadas[i] == letra) {
                jaUsada = true;
                break;
            }
        }
        
        if(jaUsada) {
            cout << "Voce ja usou essa letra! Tente outra." << endl;
            continue;
        }
        
        // Adicionar letra para as letras usadas
        int pos = strlen(letrasUsadas);
        letrasUsadas[pos] = letra;
        letrasUsadas[pos + 1] = '\0';
        
        // Verificar se a letra está na palavra sorteada
        if(verificarLetra(letra, palavraSecreta, palavraOculta)) {
            cout << "A letra '" << letra << "' esta na palavra!" << endl;
            
            // Contar quantas letras foram acertadas
            letrasAcertadas = 0;
            for(int i = 0; i < tamanhoPalavra; i++) {
                if(palavraOculta[i] != '_') {
                    letrasAcertadas++;
                }
            }
        } 
		// Mostra se a letra nao esta na palavra
		else {
            erros++;
            cout << "A letra '" << letra << "' nao esta na palavra!" << endl;
        }
        
        tentativas++;
    }
    
    // Fim do jogo
    cout << "\n=========================" << endl;
    exibirForca(erros);
    
    if(erros == 6) {
        cout << "\n\nVoce perdeu! A palavra era: " << palavraSecreta << endl;
    } else {
        cout << "\n\nParabens! Voce acertou a palavra: " << palavraSecreta << endl;
    }
    
    cout << "Total de tentativas: " << tentativas << endl;
}

