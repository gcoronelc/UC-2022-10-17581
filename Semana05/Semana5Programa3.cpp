#include<iostream>
using namespace std;

int main( )
{ 	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int num, i, f;
	// Lectura
	cout << "Ingrese numero para factorial: ";
	cin  >> num;
	// Proceso
	f = 1;
	for( i=1 ; i<=num ; i++ )
	{
		f = f * i;
	}
	// Reporte
	cout << endl;
	cout<<"El factorial de "<< num << " es: " << f; 
	// Fin
	return 0;
}



