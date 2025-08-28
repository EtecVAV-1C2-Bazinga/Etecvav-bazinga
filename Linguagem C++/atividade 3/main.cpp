#include <iostream>
using namespace std;

// Função para calcular para homens
float pesoIdealMasculino(float altura) {
    return 72.7 * altura - 58;
}

// Função para calcular para mulheres
float pesoIdealFeminino(float altura) {
    return 62.1 * altura - 44.7;
}


int main(int argc, char** argv) {
	
	char genero, r='s';
    float altura, pesoIdeal;
    
    
	while(r=='s'){
    	cout << "\nDigite o seu genero (M para masculino ou F para feminino): ";
	    cin >> genero;
	
	    cout << "Digite a altura (em metros): ";
	    cin >> altura;
	
	    if (genero == 'M'|| genero == 'm') {
	        pesoIdeal = pesoIdealMasculino(altura);
	        
	        cout << "\nPeso ideal (MASCULINO) e: " << pesoIdeal << " kg" << endl;
	    } 
		else if (genero == 'F'|| genero == 'f') {
	        pesoIdeal = pesoIdealFeminino(altura);
	        cout << "\nPeso ideal (FEMININO) e: " << pesoIdeal << " kg" << endl;
	    }
		else {
	        cout << "Genero invalido, digite M ou F para funcionar!!" << endl;
	    }
		
		cout << "\n\nDeseja continuar (s/n)? ";
		cin >> r;
    }

	return 0;
}
