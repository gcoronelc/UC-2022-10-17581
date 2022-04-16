/*
Lectura de un número positivo con validación.
*/
#include<iostream>
using namespace std;

int main( )
{ 	
  // Configuración
	setlocale(LC_CTYPE,"Spanish");
	// Variable
	int num;
	// Proceso de lectura
	do{	
		cout << "Ingrese un numero positivo: ";
		cin  >> num;		
		if(num <= 0){
			cout <<"ERROR. Ingrese nuevamente." << endl;
		}
	} while(num <= 0);
	cout << "Lograste ingresar un número positivo.";
	// Fin
	return 0;
}




