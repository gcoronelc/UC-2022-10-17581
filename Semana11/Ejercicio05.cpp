#include <iostream>
using namespace std;

// Variables Globales


// Declaraci�n de Funciones y Procedimientos
void mostrarMenu();
int leerOpcion(int opMin, int opMax);


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Proceso general
	do{
		// El men�
		mostrarMenu();
		opMenu = leerOpcion(1,3);
  
		// Lectura de datos
		
		
		// Validaci�n
	
		// Proceso
		
		
		// Reporte
	
	
	} while(opMenu!=3);
	
	// Fin
	system("pause");
	return 0;
}

// Implementaci�n de Funciones y Procedimientos

void mostrarMenu(){
	system("cls");
	cout << "\tMENU DE OPCIONES" << endl;
	cout << "================================" << endl;
	cout << "\t1.- Venta" << endl;
	cout << "\t2.- Reporte" << endl;
	cout << "\t3.- Salir" << endl;
	cout << "================================" << endl;
	cout << endl;
}

int leerOpcion(int opMin, int opMax){
	int op;
	do{
		cout << "Opci�n: "; cin >> op;
		if(op<opMin || op>opMax){
			cout << "Error, opci�n fuera de rango." << endl;
		}	
	}while(op<opMin || op>opMax);
	return op;
}

