#include <iostream>
#include <string>
using namespace std;

	bool ehVogal(char c) {
	    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
	           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
	}
	
	int main() {
		char r='s';
		while( r=='s')
		
		{
			
	    string palavra;
	    string resultado = "";
	    int i = 0;
	
	    cout << "\nDigite uma palavra: ";
	    cin >> palavra;
	
	    while (i < palavra.length()) {
	        if (ehVogal(palavra[i])) {
	            resultado += '*';
	        } else {
	            resultado += palavra[i];
	        }
	        i++;
	    }
	    
	    cout << "Palavra modificada: " << resultado << endl;
	    
	      cout<< "\n\nDeseja Continuar(s/n)? ";
	      cin>> r;
	      
		}
	
	    return 0;
	}

