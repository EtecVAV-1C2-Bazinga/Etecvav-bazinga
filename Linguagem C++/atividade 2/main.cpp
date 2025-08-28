#include <iostream>
using namespace std;

int potencia(int base, int expoente) {
    int resultado = 1;
    int contador = 1;

    while (contador <= expoente) {
        resultado *= base;
        contador++;
    }

    return resultado;
}



int main(int argc, char** argv) {
 	int base, expoente;
 	char r='s';
 	
 	while(r=='s'){
	 	cout << "\nDigite a base: ";
	    cin >> base;
	
	    cout << "Digite o expoente: ";
	    cin >> expoente;
	
	    int resultado = potencia(base, expoente);
	
	    cout << "\nA potencia de: " << base << "^" << expoente << " = " << resultado << endl;

		cout << "\n\nDeseja continuar (s/n)? ";
		cin >> r;
 	}

	
	return 0;
	
}
