#include <iostream>
#include "ToolBox.h"
using namespace std;


// Funciones y procedimientos
void PresentarMenu();
void ProcesarVenta();
void ReporteEstadistico();
void FinPrograma();

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso principal
	do{
		// Menu
		PresentarMenu();
		opMenu = LeerOpcion(1,3);
		// Procesar el men�
		system("cls");
		switch(opMenu){
			case 1:
				ProcesarVenta(); break;
			case 2:
				ReporteEstadistico(); break;
			case 3:
				FinPrograma(); break;
		}
		// Control de la pausa
		if(opMenu!=3){
			system("pause");
		}
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

void ProcesarVenta(){
	cout << "Falta ..." << endl;
}

void ReporteEstadistico(){
	cout << "Falta ..." << endl;
}

void FinPrograma(){
	cout << "FIN DEL PROGRAMA" << endl;
	cout << "Esperamos su pronta visita" << endl;
	cout << "Que tenga un maravilloso d�a" << endl;
}
