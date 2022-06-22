#include <iostream>
using namespace std;

int sumaDigitos( int n ){
	if(n==0){
		return 0;
	} else {
		return (n%10) + sumaDigitos(n/10);
	}
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int n, s;
  
	// Lectura de datos
	cout << "Ingresar 'n': "; cin >> n;
		
	// Proceso
	s = sumaDigitos(n);
	
	// Reporte
	cout << endl;
	cout << "Suma: " << s << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
