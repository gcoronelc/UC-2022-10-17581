#include <iostream>
using namespace std;

int fibonacci( int n ){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int n, Tn;
  
	// Lectura de datos
	cout << "Ingresar valor de 'n': ";
	cin  >> n;
	
	// Proceso
	Tn = fibonacci(n);
	
	// Reporte
	cout << endl;
	cout << "T(" << n << ") = " << Tn << endl;
	cout << endl;
	
	// Fin
	//system("pause");
	return 0;
}
