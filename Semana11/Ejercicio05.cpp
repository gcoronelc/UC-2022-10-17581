#include <iostream>
using namespace std;

// Variables Globales
double tipoCambio;
int cantPaquetesPuntaCana=0, cantPaquetesSanAndres=0, cantPaquetesCancun=0;
double totalPuntaCana=0.0, totalSanAndres=0.0, totalCancun=0.0, totalAcumulado=0.0;

// Declaración de Funciones y Procedimientos
void leerTipoCambio();
void mostrarMenu();
int leerOpcion(int opMin, int opMax);
void procesoVenta();
void procesoReporte();
void procesoSalir();
int LeerEntero(string etiqueta, int valorMinimo);

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

int LeerEntero(string etiqueta, int valorMinimo){
	int valor;
	do{
		cout << etiqueta; cin  >> valor;		
		if(valor<valorMinimo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}

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
	int paquete, cantidad;
	double precio, porcDescuento;
	double importe, descuento, total;	
	// Lectura
	cout << "LECTURA DE DATOS" << endl;
	cout << "==============================" << endl;
	cout << "PAQUETE TURISTICO" << endl;
	cout << "-------------------------------" << endl;
	cout << "1.- Punta Cana" << endl;
	cout << "2.- San Andres" << endl;
	cout << "3.- Cancun" << endl;
	cout << "-------------------------------" << endl;
	paquete = leerOpcion(1,3);
	cantidad = LeerEntero("Cantidad: ", 1);
	// Proceso
	// 1. Determinar el precio y porcentaje de descuento
	switch(paquete){
		case 1:
			precio = 780.0;
			porcDescuento = 3.5;
			break;
		case 2:
			precio = 1350.0;
			porcDescuento = 4.0;
			break;
		case 3:
			precio = 2550.0;
			porcDescuento = 4.5;
			break;
	}
	// 2. Calculos
	importe = precio * cantidad * tipoCambio;
	descuento = importe * porcDescuento / 100.0;
	total = importe - descuento;
	// 3. Actualizar estadistica
	cantPaquetesPuntaCana += (paquete==1)?cantidad:0;
	cantPaquetesSanAndres += (paquete==2)?cantidad:0;
	cantPaquetesCancun += (paquete==3)?cantidad:0;
	totalPuntaCana += (paquete==1)?total:0;
	totalSanAndres += (paquete==2)?total:0;
	totalCancun += (paquete==3)?total:0;
	totalAcumulado += total;
	// Reporte
	cout << endl;
	cout << "REPORTE VENTA" << endl;
	cout << "=================================" << endl;
	cout << "Importe: " << importe << endl;
	cout << "Porc. descuento: " << porcDescuento << "%" << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total a pagar: " << total << endl;
	cout << endl;
	
}

void procesoReporte(){
	cout << "REPORTE ESTADISTICO" << endl;
	cout << "==================================================================" << endl;
	cout << "PAQUETE\t\tCANTIDAD\tTOTAL" <<endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Punta Cana\t" << cantPaquetesPuntaCana << "\t" << totalPuntaCana << endl;
	cout << "San Andres\t" << cantPaquetesSanAndres << "\t" << totalSanAndres << endl;
	cout << "Cancun\t\t" << cantPaquetesCancun << "\t" << totalCancun<< endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Total acumulado: " << totalAcumulado << endl;
}

void procesoSalir(){
	
	cout << endl;
	cout << "Fin del programa." << endl;
	cout << "Nos vamos al mundial." << endl;
	cout << endl;
	
}
