#include <iostream>
#include <string>
using namespace std;

string diaDaSemana(int numero) {
    switch (numero) {
        case 1: return "Domingo";
        case 2: return "Segunda-feira";
        case 3: return "Terca-feira";
        case 4: return "Quarta-feira";
        case 5: return "Quinta-feira";
        case 6: return "Sexta-feira";
        case 7: return "Sabado";
        default: return "Numero invalido (digite de 1 a 7)";
    }
}

int main() {
    
    char r='s';
    while(r=='s'){
        
    int numero;

    cout << "\nDigite um numero (1 a 7): ";
    cin >> numero;

    cout << "Dia correspondente: " << diaDaSemana(numero) << endl;
    
    cout <<"\n\nDeseja continuar(s/n)?";
    cin >> r;

    }
        return 0;
}
