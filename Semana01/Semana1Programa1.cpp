/*
 * Ejemplo de calcular el área del triángulo
 * area = (base*altura)/2
*/

#include<iostream>
using namespace std;

int main()
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
		
	// Declaración de variables (según el ejemplo)
	double area, base, altura;
	
	// Lectura de Datos
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================" << endl;	
	cout << "Ingrese base: ";    cin >> base;
	cout << "Ingrese altura: ";  cin >> altura;
	
	// Proceso
	area = (base * altura)/2;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==========================" << endl;	
	cout <<"EL área del triangulo es: " << area << endl;
	cout << endl;
	
	return 0;
}





