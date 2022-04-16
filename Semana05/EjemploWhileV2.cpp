/*
Ejemplo: Ingrese un numero "n",
y muestre la serie de 1 a "n".
*/
#include <iostream>
#include <sstream>
using namespace std;
int main(){
	// 1. Declarar variables
	int n, cont;
	stringstream reporte;
	string linea = "-------------------------------\n";
	// 2.- Entrada de datos
	cout << linea;
	cout << "ENTRADA DE DATOS";
	cout << linea;
	cout << "Ingrese numero: ";
	cin  >> n;
	// Proceso y Salida
	cont = 1;
	while( cont <= n){
		reporte << cont;
		if(cont<n){
			reporte << ",";
		}
		cont++;
	}
	// Reporte
	cout << endl << linea;
	cout << "REPORTE" << endl;
	cout << linea;
	cout << "Serie: " << reporte.str() << endl;
	system("pause");
	return 0;
}
