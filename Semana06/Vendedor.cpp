#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Control del menú de opciones
	do{
		
		// EL MENU
		system("cls");
		cout << "SISTEMA DE COMISION" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Enero - Marzo" << endl;
		cout << "2.- Abril – Junio" << endl;
		cout << "3.- Julio – Setiembre" << endl;
		cout << "4.- Octubre - Diciembre" << endl;
		
		cout << "5.- Salir" << endl;
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>5){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>5);
		
		// Opción salir
		if(opMenu==5){
			cout << endl;
			cout << "Fin del programa." << endl;
			cout << endl;
			return 0;
		}
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			// Opción 1: aaaa
			case 1:
				cout << "Proceso opción 1" << endl;
				break;
			// Opción 2: bbbbb
			case 2:
				cout << "Proceso opción 2" << endl;
				break;	
			// Opción 3: cccccccc
			case 3:
				cout << "Proceso opción 3" << endl;
				break;					
			// Opción 4: dddddddd
			case 4:
				cout << "Proceso opción 4" << endl;
				break;
			// Opción 5: Salir
			case 5:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<5);
	
	// Fin
	return 0;
}
