/*
 * Operaciones matemáticas
*/

#include<iostream>
#include<math.h> 
using namespace std;

int main( )
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero1, numero2;
	int suma, resta, multiplicacion;
	double division, raizCuadrada, CuboPrimerNumero; 
	
	// Lectura de Datos
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "============================================" << endl;
	cout << "Ingrese valor de primer número:\t\t";  cin >> numero1;
	cout << "Ingrese valor de segundo número:\t"; cin >> numero2;
	
	// Proceso	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	raizCuadrada = sqrt(suma);
	CuboPrimerNumero = pow(numero1,3);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "============================================" << endl;	
	cout << "La suma es:\t\t\t\t" << suma << "\n";
	cout << "La resta es:\t\t\t\t" << resta << "\n";
	cout << "La multiplciaicón es:\t\t\t" << multiplicacion << "\n";
	cout << "La divisón es:\t\t\t\t" << division << "\n";
	cout << "La raiz cuadrada de la suma es:\t\t" << raizCuadrada << "\n";
	cout << "El cubo del primer numero es:\t\t" << CuboPrimerNumero << "\n";
	
	// Fin
	system("pause");
	return 0;
}


