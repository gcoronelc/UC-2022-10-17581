#include <iostream>
#include "ToolBox.h"
using namespace std;


// Funciones y procedimientos
void PresentarMenu();
void ProcesarVenta();
void ReporteEstadistico();
void FinPrograma();
char LeeTipoProducto();

// Datos estadisticos
int VentasTipoA=0, VentasTipoB=0, VentasTipoC=0, VentasTipoD=0;

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
	double precio, porcDescuento;
	double montoBruto, descuento, montoPagar;
	int cantidad;
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===========================" << endl;
	sexo = LeerSexo("Sexo del cliente: ");
	tipo = LeeTipoProducto();
	precio = LeerDouble("Ingrese precio: ",1.0);
	cantidad = LeerEntero("Ingrese cantidad: ",1);
	// Proceso
	// 1.- Determinar el porcentaje de descuento
	porcDescuento = 0.0;
	porcDescuento = (tipo=='A')?8.0:porcDescuento;
	porcDescuento = (tipo=='B')?10.0:porcDescuento;
	porcDescuento = (tipo=='C')?12.0:porcDescuento;
	porcDescuento = (tipo=='D')?15.0:porcDescuento;
	// 2.- Calculos de la venta
	montoBruto = precio * cantidad;
	descuento = montoBruto * porcDescuento / 100.0;
	montoPagar = montoBruto - descuento;
	// Reporte venta
	cout << endl;
	cout << "REPORTE DE VENTA" << endl;
	cout << "==============================================" << endl;
	cout << "Monto bruto: " << montoBruto << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Monto a pagar: " << montoPagar << endl << endl;
	// Calcular datos estadisticos
	VentasTipoA += (tipo=='A')?1:0;
	VentasTipoB += (tipo=='B')?1:0;
	VentasTipoC += (tipo=='C')?1:0;
	VentasTipoD += (tipo=='D')?1:0;

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







