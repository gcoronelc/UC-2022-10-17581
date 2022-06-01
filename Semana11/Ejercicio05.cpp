#include <iostream>
using namespace std;

// Variables Globales
double tipoCambio;


// Declaración de Funciones y Procedimientos
void leerTipoCambio();
void mostrarMenu();
int leerOpcion(int opMin, int opMax);
void procesoVenta();
void procesoReporte();
void procesoSalir();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Proceso general
	leerTipoCambio();
	do{
		// El menú
		mostrarMenu();
		opMenu = leerOpcion(1,3);
  
		// El proceso del menú
		system("cls");
		switch(opMenu){
			case 1:
				procesoVenta();
				break;
			case 2:
				procesoReporte();
				break;
			case 3:
				procesoSalir();
				break;
		}
		
		if(opMenu==1 || opMenu==2){
			system("pause");
		}
	} while(opMenu!=3);
	
	// Fin
	return 0;
}

// Implementación de Funciones y Procedimientos

void leerTipoCambio(){
	system("cls");
	do{
		cout << "Tipo de cambio del día: "; cin >> tipoCambio;
		if(tipoCambio<=0.0){
			cout << "Error, debe ser un valor positivo." << endl;
		}
	}while(tipoCambio<=0.0);
}

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
		cout << "Opción: "; cin >> op;
		if(op<opMin || op>opMax){
			cout << "Error, opción fuera de rango." << endl;
		}	
	}while(op<opMin || op>opMax);
	return op;
}

void procesoVenta(){
	// Variables
	
	// Lectura
	
	
	// Proceso
	
	
	// Reporte
	
	
}

void procesoReporte(){
	
}

void procesoSalir(){
	
	cout << endl;
	cout << "Fin del programa." << endl;
	cout << "Nos vamos al mundial." << endl;
	cout << endl;
	
}
