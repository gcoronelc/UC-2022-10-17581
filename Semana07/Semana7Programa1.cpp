/*
 * Programa que permite gestionar las ventas mediante un menú de opciones.
*/
#include<iostream>
using namespace std;

int main()
{	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double precio, porcDescuento, importeBruto, descuento, importeFinal, sumatoriaVentas;
	int opMenu, cantidad, contClientes;
	
	// Inicialización de variables
	contClientes = 0;
	sumatoriaVentas = 0.0;

	
	do{		
	
		// Menu de opciones
		system("cls");
		cout << "=====================" << endl;
		cout << "\tFRUTERIA" << endl;
		cout << "=====================" << endl;
		cout << "1. Vender" << endl;
		cout << "2. Clientes atendidos" << endl;
		cout << "3. Importe de las ventas" << endl;
		cout << "4. Salir" << endl;
		cout << "=====================" << endl;
		
		// Leer opción del menú
		do{
			cout << endl;
			cout << "Ingrese opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>3){
				cout << "ERROR, debe 1, 2, 3 o 4. Vuelve a Ingresar." << endl;
			}		
		}while(opMenu<1 || opMenu>4);  
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){ 
			
			case 1: 
				cout << "LECTURA DE DATOS" << endl;
				cout << "======================================" << endl;
				// Lectura de cantidad
				do{		
					cout << "Ingrese cantidad: "; cin >> cantidad;
					if(cantidad<=0) {
						cout << "ERROR, la cantidad debe ser mayor que cero. Vuelve a Ingresar." << endl;
					}		
				}while(cantidad<=0);  
				// Lectura del precio
				do{
					cout << "Ingrese precio: "; cin >> precio;
					if(precio<=0){
						cout<<"ERROR, el precio debe ser mayor que cero. Vuelve a Ingresar." << endl;
					}
				}while(precio<=0.0);  
				
				// PROCESO DE DATOS
				
				// Paso 1: Contador de clientes
				contClientes++;
				
				// Paso 2: Determinar el porcentaje de descuento
				porcDescuento = 0.0;
				porcDescuento = (cantidad>2 && cantidad<=5)?0.10:porcDescuento;
				porcDescuento = (cantidad>5 && cantidad<=10)?0.15:porcDescuento;
				porcDescuento = (cantidad>10)?0.10:porcDescuento;
				
				// Paso 3: Completando los calculos
				importeBruto = precio * cantidad;
				descuento = importeBruto * porcDescuento;
				importeFinal = importeBruto - descuento;
				sumatoriaVentas += importeFinal;
				
				// REPORTE
				
				cout << endl;
				cout << "REPORTE" << endl;
				cout << "======================================" << endl;
				cout << "El importe bruto es: " << importeBruto << endl;
				cout << "El descuentoo es: " << descuento << endl;
				cout << "El importe final es: " << importeFinal << endl;
				cout << endl;

			case 2:
				cout << "REPORTE" << endl;
				cout << "========================================================" << endl;
				cout << "Cantidad de clientes: " << contClientes << endl;  
				cout << endl; 	
				break;
				
			case 3:
				cout << "REPORTE" << endl;
				cout << "========================================================" << endl;
				cout << "Suma total de las ventas: " << sumatoriaVentas << endl;  
				cout << endl; 	
				break;				
				
			// SALIR
			case 4: 
				cout<<"Adios..!. Vuelva pronto."<<"\n\n";   	
				break;
				
		}
	
		// Fin	
		system("pause");
		system("cls");	
			
	}while(opMenu != 4);  
	
	cout<<"\n";
	return 0;
}



