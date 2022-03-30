#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero1, numero2;
	int suma, resta, producto, division1, resto;
	double division2;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "========================================" << endl;
	cout << "Número 1: "; cin >> numero1;
	cout << "Número 2: "; cin >> numero2;
	
	// Proceso
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	producto = numero1 * numero2;
	division1 = numero1 / numero2;
	division2 = numero1 * 1.0 / numero2;
	resto = numero1 % numero2;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "========================================" << endl;
	cout << "Suma: " << suma << endl;
	cout << "Resta: " << resta << endl;
	cout << "Producto: " << producto << endl;
	cout << "División 1: " << division1 << endl;
	cout << "División 2: " << division2 << endl;
	cout << "Resto: " << resto << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

