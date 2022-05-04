// Estudiante: Eric Gustavo Coronel Castillo

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu, contVentas, cantidad;
	char categoria;
	double precio, porcComision, importeVenta, importeComision;
	
	// Inicializar variables
	contVentas = 0;
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "SOBRE RUEDAS SAC" << endl;
		cout << "MENU DE OPCIONES" << endl;
		cout << "======================================" << endl;
		cout << "1.- Procesar venta" << endl;
		cout << "2.- Listado de ventas" << endl;
		cout << "3.- Resumen de ventas" << endl;
		cout << "4.- Salir" << endl;
		cout << "======================================" << endl;
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			case 1:
				// CONTADOR DE VENTAS
				contVentas++;
				// LECTURA
				cout << "SOBRE RUEDAS SAC" << endl;
				cout << "VENTA NRO: " << contVentas << endl;
				cout << "======================================" << endl;
				// Leer categoría
				do{
					cout << "Categoría: "; cin >> categoria;
					categoria = toupper(categoria);
					if(categoria!='A' && categoria!='B' && categoria!='C'){
						cout << "ERROR: La categoria es A, B o C." << endl;
					}
				}while (categoria!='A' && categoria!='B' && categoria!='C');
				// Leer cantidad
				do{
					cout << "Cantidad: "; cin >> cantidad;
					if(cantidad<=0){
						cout << "ERROR: La cantidad es un valor positivo.." << endl;
					}
				}while(cantidad<=0);
				// PROCESO
				// Obtener datos de la tabla
				switch(categoria){
					case 'A':
						precio = 55.0;
						porcComision = (cantidad<=10)?4.0:6.0;
						break;
					case 'B':
						precio = 75.0;
						porcComision = (cantidad<=10)?6.0:10.0;
						break;
					case 'C':
						precio = 93.0;
						porcComision = (cantidad<=10)?10.0:15.0;
						break;
				}
				// Calcular venta
				importeVenta = precio * cantidad;
				importeComision = importeVenta * porcComision / 100.0;
				// REPORTE
				cout << endl;
				cout << "REPORTE" << endl;
				cout << "======================================" << endl;
				cout << "Precio por camioneta: US$" << precio << endl;
				cout << "Importe de la venta: US$" << importeVenta << endl;
				cout << "Porcentaje de comisión: US$" << porcComision << "%" << endl;
				cout << "Importe de comisión: US$" << importeComision << endl;
				cout << endl;
				break;

			case 2:
				cout << "Proceso opción 2" << endl;
				break;	

			case 3:
				cout << "Proceso opción 3" << endl;
				break;					

			case 4:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}


