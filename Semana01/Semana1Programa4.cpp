/*
 * Aplicando la librería math.h 
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int x;
	double z;
	
	// Lectura de datos
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "===================================================" << endl;
	cout << "Ingrese valor de x: "; cin >> x;
	
	// Proceso
	z = (pow(x+3,2) + x + sqrt(x+5))/(pow(x,2.0/3.0) + 1);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "===================================================" << endl;	
	cout << "El valor de z es: " << z << endl;
	cout << endl;
	
	system("pause");
	return 0;
}



