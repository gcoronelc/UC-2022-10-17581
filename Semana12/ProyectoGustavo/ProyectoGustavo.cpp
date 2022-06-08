#include <iostream>
#include "ToolBox.h"
using namespace std;


// Funciones y procedimientos
void PresentarMenu();
void ProcesarVenta();
void ReporteEstadistico();
void FinPrograma();
char LeeTipoProducto();

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
		// Procesar el menú
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
	// Variables
	char sexo, tipo;
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===========================" << endl;
	sexo = LeerSexo("Sexo del cliente: ");
	tipo = LeeTipoProducto();
	// Proceso
	
	// Reporte venta
}

void ReporteEstadistico(){
	cout << "Falta ..." << endl;
}

void FinPrograma(){
	cout << "FIN DEL PROGRAMA" << endl;
	cout << "Esperamos su pronta visita" << endl;
	cout << "Que tenga un maravilloso día" << endl << endl;
}

char LeeTipoProducto(){
	char tipo;
	cout << "Tipo de producto" << endl;
	cout << "----------------------------" << endl;
	cout << "A. Mouse" << endl;
	cout << "B. Teclado" << endl;
	cout << "C. Disco Duro" << endl;
	cout << "D. Monitor" << endl;
	cout << "----------------------------" << endl;
	do{
		cout << "Opción: "; cin >> tipo;
		tipo = toupper(tipo);
		if(tipo!='A' && tipo!='B' && tipo!='C' && tipo!='D'){
			cout << "Error, dato incorrecto." << endl;
		}
	}while(tipo!='A' && tipo!='B' && tipo!='C' && tipo!='D');
	return tipo;
}







