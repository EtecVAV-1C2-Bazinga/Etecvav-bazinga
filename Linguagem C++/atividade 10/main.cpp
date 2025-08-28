#include <iostream>
#include <string>
using namespace std;

int contarVogais(const string &nome) {
    int contador = 0;
    int i = 0;
    while (i < (int)nome.size()) {
        char c = nome[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            contador++;
        }
        i++;
    }
    return contador;
}

int contarConsoantes(const string &nome) {
    int contador = 0;
    int i = 0;
    while (i < (int)nome.size()) {
        char c = nome[i];
        if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) &&
            !(c == 'a' || c == 'A' ||
              c == 'e' || c == 'E' ||
              c == 'i' || c == 'I' ||
              c == 'o' || c == 'O' ||
              c == 'u' || c == 'U')) {
            contador++;
        }
        i++;
    }
    return contador;
}

int main() {
    char r = 's';
    while(r == 's' || r == 'S'){
        string nome;

        cout << "\nDigite o nome completo: ";
        getline(cin, nome);

        int vogais = contarVogais(nome);
        int consoantes = contarConsoantes(nome);

        cout << "Quantidade de vogais: " << vogais << endl;
        cout << "Quantidade de consoantes: " << consoantes << endl;

        do {
            cout << "\n\nDeseja continuar (s/n)? ";
            cin >> r;
            cin.ignore();
        } while (r != 's' && r != 'S' && r != 'n' && r != 'N');
    }

    return 0;
}

