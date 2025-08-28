#include <iostream>
#include <string>
using namespace std;

bool palindromo(string palavra) {
    int inicio = 0;
    int fim = palavra.length() - 1;
    
    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            return false;
        }
        inicio++;
        fim--;
    }

    return true;
}


int main(int argc, char** argv) {
	string palavra;
	char r='s';
	
	while(r=='s'){
		cout << "\nDigite uma palavra: ";
	    cin >> palavra;
	
	    
	    if (palindromo(palavra)) {
	        cout << palavra << " e um palindromo" << endl;
	    }
		else {
	        cout << palavra << " nao e um palindromo." << endl;
		}
		
		cout << "\n\nDeseja continuar (s/n)? ";
    	cin >> r;
	}
  
	
	return 0;
	
	
	
}
