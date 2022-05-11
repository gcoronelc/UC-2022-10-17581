/*
INTEGRANTES DEL GRUPO
- Eric Gustavo Coronel Castillo
- MAKARENA NICOLE SARMIENTO SALINAS
- LEONARDO JESUS PALACIOS MARCOS
- MANYORI IPARRAGUIRRE RAMOS
*/

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
		cout << "LA CASA DEL INKA" << endl;
		cout << "Sistema de Ventas" << endl << endl;
		cout << "Menú de Opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar vemta" << endl;
		cout << "2.- Reporte de ventas" << endl;
		cout << "3.- Salir" << endl;
		cout << "=================================================" << endl;
		// Leer opción
		do{
			cout << endl;
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>3){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>3);
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			// Opción 1: Registrar venta
			case 1:
				cout << "Proceso opción 1" << endl;
				break;
			// Opción 2: Reporte
			case 2:
				cout << "Proceso opción 2" << endl;
				break;	
			// Opción 3: Salir
			case 3:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<3);
	
	// Fin
	return 0;
}
