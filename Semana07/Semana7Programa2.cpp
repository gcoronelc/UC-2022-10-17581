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
	double precio, importeBruto, importeFinal, sumatoriaVentas;
	double porcBono, bono, porcDescuento, descuento;
	int opMenu, cantidad, contClientes, contGeneroFemenino, contGeneroMasculino;
	char genero;
	string nombreProducto;
	
	// Inicialización de variables
	contClientes = 0;
	sumatoriaVentas = 0.0;
	contGeneroFemenino = 0;
	contGeneroMasculino = 0;
	
	do{		
	
		// Menu de opciones
		system("cls");
		cout << "=====================" << endl;
		cout << "MENU DE VENTAS" << endl;
		cout << "=====================" << endl;
		cout << "1. Procesar venta" << endl;
		cout << "2. Reporte de ventas" << endl;
		cout << "3. Salir" << endl;
		cout << "=====================" << endl;
		
		// Leer opción del menú
		do{
			cout << endl;
			cout << "Ingrese opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>3){
				cout << "ERROR, debe 1, 2 o 3. Vuelve a Ingresar." << endl;
			}		
		}while(opMenu<1 || opMenu>3);  
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){ 
			
			case 1: 
				cout << "LECTURA DE DATOS" << endl;
				cout << "======================================" << endl;
				// Lectura del nombre del producto
				cout << "Nombre del producto: "; cin >> nombreProducto;
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
				// Lectura del genero del cliente
				do{
					cout << "Genero del cliente: "; cin >> genero;
					genero = toupper(genero);
					if(genero!='M' && genero!='F'){
						cout<<"ERROR, el genero debe ser M o F. Vuelve a Ingresar." << endl;
					}
				}while(genero!='M' && genero!='F');
				
				// PROCESO DE DATOS
				
				// Paso 1: Determinar porcentajes de bono, descuento y contador por genero
				switch(genero){
					case 'F':
						contGeneroFemenino++;
						porcBono = 0.20;
						porcDescuento = (cantidad<=10)?0.30:0.40;
						break;
					case 'M':
						contGeneroMasculino++;
						porcBono = 0.18;
						porcDescuento = (cantidad<=10)?0.20:0.50;
						break;
				}
				
				// Paso 2: Completando los calculos
				importeBruto = precio * cantidad;
				bono = importeBruto * porcBono;
				descuento = importeBruto * porcDescuento;
				importeFinal = importeBruto - bono - descuento;
				
				// Paso 3: Contador de clientes y acumulador de ventas
				contClientes++;				
				sumatoriaVentas += importeFinal;
				
				// REPORTE
				
				cout << endl;
				cout << "REPORTE DE LA VENTA" << endl;
				cout << "======================================" << endl;
				cout << "Importe bruto: " << importeBruto << endl;
				cout << "Importe del bono: " << bono << endl;
				cout << "Importe del descuento: " << descuento << endl;
				cout << "Importe final: " << importeFinal << endl;
				cout << endl;
				break;

			case 2:
				cout << "REPORTE TOTAL DE VENTAS" << endl;
				cout << "========================================================" << endl;
				cout << "Cantidad total de clientes femeninos: " << contGeneroFemenino << endl;  
				cout << "Cantidad total de clientes masculinos: " << contGeneroMasculino << endl;  
				cout << "Cantidad total de clientes: " << contClientes << endl;  
				cout << "Suma de todas las ventas: " << sumatoriaVentas << endl;  
				cout << endl; 	
				break;				
				
			case 3: 
				cout<<"Adios..!. Vuelva pronto."<<"\n\n";   	
				break;
				
		}
	
		// Fin	
		system("pause");
		system("cls");	
			
	}while(opMenu != 3);  
	
	cout<<"\n";
	return 0;
}



