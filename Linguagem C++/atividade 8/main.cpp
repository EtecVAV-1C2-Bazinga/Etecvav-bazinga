#include <iostream>
#include <cmath>  // Para fazer o raio
using namespace std;

// Função que calcula a área 
double calcularArea(double raio) {
    return 3.14 * pow(raio, 2);
}


int main(int argc, char** argv) {
	double raio, somaAreas = 0.0;
	int contador = 1;
	char r='s';
	
	while(r=='s'){
		
		while (contador <= 5) {
	        cout << "\nDigite o raio do circulo " << contador << ": ";
	        cin >> raio;
	
	        somaAreas += calcularArea(raio);
	        contador++;
    }

    cout << "\n\nSoma da area dos 5 circulos e: " << somaAreas << endl;
	
	cout << "\n\nDeseja continuar (s/n)? ";
	cin >> r;
	}
	
	return 0;
	
}
