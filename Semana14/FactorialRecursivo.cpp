#include <iostream>
using namespace std;

int factorial(int n){
	if(n==0){
		return 1;	
	} else {
		return n * factorial(n-1);
	}
}


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int n, fact;
	string ns;
  
	// Lectura de datos
	do{
		n=-1;
		cout << "Valor de \"n\": "; cin  >> ns;
		if(isalpha(ns[0])){
			cout << "Error, se requiere un número, no un caracter." << endl;
			continue;
		}
		n = stoi(ns);
		if(n<0){
			cout << "Error, se requiere un número mayor que cero." << endl;
		}
	}while(n < 0);
	
	
	// Proceso
	fact = factorial(n);
	
	// Reporte
	cout << endl;
	cout << "Factorial: " << fact << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
