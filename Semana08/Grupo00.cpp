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
	int opMenu, tipoPlato, cantidad, edad;
	double precio, porcDescuento1, porcDescuento2;
	char sexo;
	double importe, descuento1, descuento2, total;
	
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
				// Cabecera
				cout << "LA CASA DEL INKA" << endl;
				cout << "Sistema de Ventas" << endl << endl;
				// LECTURA DE DATOS
				cout << "REPORTE DE VENTA" << endl;
				cout << "==========================================================" << endl;
				// Leer el tipo de plato
				cout << "TIPO DE PLATO" << endl;
				cout << "\t1.- Carnes" << endl;
				cout << "\t2.- Pescado" << endl;
				cout << "\t3.- Vinos" << endl;				
				do{
					cout << "Opción: "; cin >> tipoPlato;
					if(tipoPlato<1 || tipoPlato>3){
						cout << "ERROR: opción incorrecta." << endl;
					}
				} while( tipoPlato<1 || tipoPlato>3 );
				// Leer el precio
				do{
					cout << "Precio: "; cin >> precio;
					if(precio<=0.0){
						cout << "ERROR: el precio es positivo." << endl;
					}
				} while(precio<=0.0);
				// Leer cantidad
				do{
					cout << "Cantidad: "; cin >> cantidad;
					if(cantidad<=0){
						cout << "ERROR: la cantidad es un valor positivo." << endl;
					}
				} while(cantidad<=0);
				// Leer sexo del cliente
				do{
					cout << "Sexo (M/F): "; cin >> sexo;
					sexo = toupper(sexo);
					if(sexo!='M' && sexo!='F'){
						cout << "ERROR: ingrese M o F." << endl;
					}
				} while(sexo!='M' && sexo!='F');
				// Leer cantidad
				do{
					cout << "Edad: "; cin >> edad;
					if(edad<=0 || edad>120){
						cout << "ERROR: ingrese un valor correcto para la edad." << endl;
					}
				} while(edad<=0 || edad>120);
				// PROCESO
				// Porcentaje de desuento 1
				switch(tipoPlato){
					case 1:
						porcDescuento1 = 0;
						porcDescuento1 = (cantidad>=5 && cantidad<=10)?5:porcDescuento1;
						porcDescuento1 = (cantidad>10)?8:porcDescuento1;
					case 2:
						porcDescuento1 = 0;
						porcDescuento1 = (cantidad>=5 && cantidad<=10)?6:porcDescuento1;
						porcDescuento1 = (cantidad>10)?10:porcDescuento1;
					case 3:
						porcDescuento1 = 0;
						porcDescuento1 = (cantidad>=5 && cantidad<=10)?8:porcDescuento1;
						porcDescuento1 = (cantidad>10)?14:porcDescuento1;
				}
				// Porcentaje de desuento 2
				switch(sexo){
					case 'M':
						porcDescuento2 = 0;
						porcDescuento2 = (edad>=30 && edad<=40)?6:porcDescuento2;
						porcDescuento2 = (edad>=40)?8:porcDescuento2;
					case 'F':
						porcDescuento2 = 0;
						porcDescuento2 = (edad>=30 && edad<=40)?8:porcDescuento2;
						porcDescuento2 = (edad>=40)?10:porcDescuento2;
				}
				// Calculos de la venta
				importe = precio * cantidad;
				descuento1 = importe * porcDescuento1 / 100;
				descuento2 = importe * porcDescuento2 / 100;
				total = importe - descuento1 - descuento2;
				// Reporte de la venta
				cout << endl;
				cout << "REPORTE DE VENTA" << endl;
				cout << "==========================================================" << endl;
				cout << "Importe: " << importe << endl;
				cout << "Descuento 1: " << descuento1 << endl;
				cout << "Descuento 2: " << descuento2 << endl;
				cout << "Total: " << total << endl;
				cout << endl;
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
