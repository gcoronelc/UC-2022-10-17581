#include <iostream>
using namespace std;

/*
 * Para leer cualquier número entero.
*/
int LeeEntero(string etiqueta){
	int valor;
	cout << etiqueta;
	cin >> valor;
	return valor;
}

/*
 * Para leer un entero mayor que un valor minimo.
 * Por ejemplo, el peso debe ser un valor positivo, minimo 0 o 1.
 * peso = LeeEntero("Ingrese el peso (>0)",1);
*/
int LeeEntero(string etiqueta, int valorMinimo){
	int valor;
	do{
		cout << etiqueta; cin >> valor;
		if(valor<valorMinimo){
			cout << "ERROR: dato ingresado fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}

/*
 * Para leer un entero dentro de un rango.
 * Por ejemplo, la edad entre 1 y 120.
 * edad = LeeEntero("Ingrese la edad [1,120]:",1,120);
*/
int LeeEntero(string etiqueta, int valorMinimo, int valorMaximo){
	int valor;
	do{
		cout << etiqueta; cin >> valor;
		if(valor<valorMinimo || valor>valorMaximo){
			cout << "ERROR: dato ingresado fuera de rango." << endl;
		}
	}while(valor<valorMinimo || valor>valorMaximo);
	return valor;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int edad, cantidad, peso;
  
	// Lectura de datos
	cout << "LA MAGIA EXISTE" << endl;
	edad = LeeEntero("Ingrese la edad [1,120]: ",1,120);
	cantidad = LeeEntero("Ingrese la cantidad (>0): ",1);
	peso = LeeEntero("Ingrese el peso (Kg) (>=0): ",0);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "Edad: " << edad << endl;
	cout << "Cantidad: " << cantidad << endl;
	cout << "Peso: " << peso << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
