#include <iostream>  
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

double div(double a, double b) {
    return a / b;
}

int main() {
    int a, b;
    char r='s';
    
    while(r=='s'){
	    cout << "\nDigite o primeiro num: ";
	    cin >> a;
	
	    cout << "Digite o segundo num: ";
	    cin >> b;
	
	    cout << "\n\nSoma: " << a << " + " << b <<" = " << soma(a, b) << endl;
	    cout << "Subtracao: " << a <<" - " << b <<" = " << sub(a, b) << endl;
	    cout << "Divisao: " << a <<" / " << b <<" = " << div(a, b) << endl;
	    cout << "Multiplicacao: " << a <<" x " << b << " = "<< mult(a, b) << endl;
	    
	    cout << "\n\nDeseja continuar (s/n)? ";
	    cin >> r;
    }

 

    return 0;
}


