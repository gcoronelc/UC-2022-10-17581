#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op; // Opción del menú
	
	// Control del menú
	do{
		
		// El menú
		system("cls");
		cout << "\tMENU DE AREAS" << endl;
		cout << "======================================" << endl;
		cout << "1.- Area de un cuadrado" << endl;
		cout << "2.- Area de un rectangulo" << endl;
		cout << "3.- Area de un triangulo" << endl;
		cout << "4.- Salir" << endl;
		
		// Leer opción del menú
		do{
			cout << endl;
			cout << "Opción? "; cin >> op;
			if(op<1 || op>4){
				cout << "ERROR: opción incorrecta." << endl;
			}
		}while(op<1 || op>4);
		
		// Programando el menú
		system("cls");
		switch(op){
			case 1:
				cout << "Area de un cuadrado" << endl;
				break;
			case 2:
				cout << "Area de un rectangulo" << endl;
				break;
			case 3:
				cout << "Area de un triangulo" << endl;
				break;
			case 4:
				cout << "Fin del programa." << endl;
				break;	
		}
		
		system("pause");
	} while(op!=4);
	
	return 0;
}
