/*
Ejemplo: 
	Calcular la suma de "n" números.
	La lectura finaliza cuando ingresa 0.
*/
#include<iostream>
using namespace std;
int main(){
	
	// Variables
	int numero, suma;
	
	// Entrada y Proceso
	cout << "Ingreso de numeros." << endl;
	cout << "Ingreso 0 para finalizar." << endl;
	
	// Proceso
	suma=0; // Acumulador
	do{
		cout << "Numero: ";
		cin  >> numero;
		suma += numero;
	} while(numero != 0);
	
	// Reporte
	cout << endl;
	cout << "Reporte" << endl;
	cout << "Suma: " << suma << endl;
	return 0;
}



