/*
 * Desarrollar un programa que muestre la serie de Fibonacci.
*/
#include<iostream>
using namespace std;

int main( )
{ 	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int lim, a=0, b=1;
	int c; 
		
	// LEctura
	cout << "Ingrese límite: ";
	cin >> lim;
	
	// Proceso y Reporte
	cout << a << " ";
	while( b <= lim )
	{	
		cout << b << " ";
		c=a+b;
		a=b;
		b=c;
	}

	// Fin
	return 0;
}



