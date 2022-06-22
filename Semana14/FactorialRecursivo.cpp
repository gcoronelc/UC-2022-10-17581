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
  
	// Lectura de datos
	cout << "Valor de \"n\": ";
	cin  >> n;
	
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
