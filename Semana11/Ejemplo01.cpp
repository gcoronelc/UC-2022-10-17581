#include<iostream>
using namespace std;

// Crear menú
void crearMenu(){
	system("cls");
	cout << "MENU DE OPCIONES" << endl << endl;
	cout << "1.- Suma" << endl;
	cout << "2.- Resta" << endl;
	cout << "3.- Multiplicar" << endl;
	cout << "4.- Salir" << endl;
}

// Leer opción
int leerOpcion(){
	int opcion;
	do{
		cout << "\nOpcion: "; cin >> opcion;
		if(opcion < 1 || opcion > 4){
			cout << "Opcion incorrecta." << endl;
		}
	} while(opcion < 1 || opcion > 4);
	return opcion;
}

// Proceso sumar
void procesoSumar(){
	// Variables
	int numero1, numero2, suma;
	// Entrada
	cout << endl << endl;
	cout << "PROCESO SUMAR" << endl;
	cout << "Numero 1: "; cin >> numero1;
	cout << "Numero 2: "; cin >> numero2;
	// Proceso
	suma = numero1 + numero2;	
	// Salida
	cout << "\nREPORTE\n";
	cout << "Suma: " << suma << endl;
	system("pause");
}

// Proceso restar
void procesoRestar(){
	// Variables
	
	// Entrada
	
	// Proceso
	
	
	// Salida
}

// Proceso multiplicar
void procesoMultiplicar(){
	// Variables
	
	// Entrada
	
	// Proceso
	
	
	// Salida
}

int main(){
	
	// Variables
	int opcion;
	// Proceso principal
	do{
		
		crearMenu();
		opcion = leerOpcion();
		
		switch(opcion){
			case 1:
				procesoSumar();
				break;
			case 2:
				procesoRestar();
				break;
			case 3:
				procesoMultiplicar();
				break;
		}
		
	} while(opcion != 4);
	system("pause");
}
