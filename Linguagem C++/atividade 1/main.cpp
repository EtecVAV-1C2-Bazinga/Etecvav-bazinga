#include <iostream>
using namespace std;

// Verifica se o numero é impar
bool impar(int numero) {
    return numero % 2 != 0;
}

int main(int argc, char** argv) {
	int numero, soma, i;
	char r='s';

	
	while(r=='s'){
		soma = 0;
		i = 1;
		
		cout << "\nDigite um numero inteiro: ";
	    cin >> numero;
	    
	    while (i <= numero) {
	        if (impar(i)) {
	            soma += i;
	        }
	        i++;
	    }
	    
	    cout << "A soma dos numeros impares ate " << numero << " e: " << soma << endl;
	    
		cout <<"\n\nDeseja continuar (s/n)? ";
		cin >> r;
	}

	return 0;
}
