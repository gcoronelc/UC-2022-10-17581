#include <iostream>
using namespace std;

// FUNCIONES

// Leer un número entero

int leerEntero( string etiqueta){
	int numero;
	cout << etiqueta;
	cin  >> numero;
	return numero;
}

// Calcula la suma de dos números
int fnSuma(int n1, int n2){
	int suma;
	suma = n1 + n2;
	return suma; // Retorna el resultado
}


// PROCEDIMIENTOS

void mostrarReporte(int suma){
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "====================================" << endl;
	cout << "Suma: " << suma << endl;
	cout << endl;
}


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero1, numero2, suma, potencia;
  
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "====================================" << endl;
	numero1 = leerEntero("Número 1: ");	
	numero2 = leerEntero("Número 2: ");	
	
	// Proceso
	suma = fnSuma(numero1, numero2);
	
	// Reporte
	mostrarReporte(suma);
	
	// Fin
	system("pause");
	return 0;
}
