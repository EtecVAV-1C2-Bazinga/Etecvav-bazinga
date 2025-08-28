#include <iostream>
using namespace std;

// Verificar a ordem dos números
string verificaOrdem(int numeros[], int tamanho) {
    bool crescente = true, decrescente = true;

    // Verificando se estao em ordem crescente ou decrescente
    int i = 0;
    while (i < tamanho - 1) {
        if (numeros[i] > numeros[i + 1]) {
            crescente = false;
        }
        if (numeros[i] < numeros[i + 1]) {
            decrescente = false;
        }
        i++;
    }

    // Retorna o tipo
    if (crescente) return "Ordem Crescente";
    if (decrescente) return "Ordem Decrescente";
    return "Nao Ordenado";
}

int main() {
    int numeros[5];
    char r='s';
    
    while(r=='s'){
    	int i = 0;	
    	
    	// Leitura dos 5 numeros
	    while (i < 5) {
	        cout << "Digite o " << i + 1 << " num: ";
	        cin >> numeros[i];
	        i++;
	    }
	
	    // Verifica a ordem
	    cout << "\n\nA ordem dos numeros e: " << verificaOrdem(numeros, 5) << endl;

		cout << "\n\nDeseja continuar (s/n)? ";
		cin >> r;
    }

    
    return 0;
}

