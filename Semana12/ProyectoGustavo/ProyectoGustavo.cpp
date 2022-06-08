#include <iostream>
#include "ToolBox.h"
using namespace std;


// Funciones y procedimientos
void PresentarMenu();


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Proceso principal
	do{
		PresentarMenu();
		opMenu = LeerOpcion(1,3);
		
		cout << "Opcion: " << opMenu << endl;
		system("pause");
	} while(opMenu!=3);
	
	// Fin
	system("pause");
	return 0;
}

void PresentarMenu(){
	system("cls");
	cout << "\tTIENDA TODO BARATO" << endl;
	cout << "\tMENU DE OPCIONES" << endl;
	cout << "================================" << endl;
	cout << "\t1.- Venta" << endl;
	cout << "\t2.- Reporte" << endl;
	cout << "\t3.- Salir" << endl;
	cout << "================================" << endl;
	cout << endl;
}
