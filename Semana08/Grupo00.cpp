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
	// Variables para indicadores
	int cantVentas = 0, cantVentasMujeresDcto2=0, cantVentasHombresDcto1=0;
	double sumaTotalVentasBruto=0.0, sumaTotalVentasNeto=0.0, sumaDescuentos=0.0;
	
	// Control del men� de opciones
	do{
		// EL MENU
		system("cls");
		cout << "LA CASA DEL INKA" << endl;
		cout << "Sistema de Ventas" << endl << endl;
		cout << "Men� de Opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar vemta" << endl;
		cout << "2.- Reporte de ventas" << endl;
		cout << "3.- Salir" << endl;
		cout << "=================================================" << endl;
		// Leer opci�n
		do{
			cout << endl;
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>3){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>3);
		
		// Procesar opci�n del men�
		system("cls");
		switch(opMenu){
			// Opci�n 1: Registrar venta
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
					cout << "Opci�n: "; cin >> tipoPlato;
					if(tipoPlato<1 || tipoPlato>3){
						cout << "ERROR: opci�n incorrecta." << endl;
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
				// Actualizar indicadores
				cantVentas++;
				cantVentasMujeresDcto2 += (sexo=='F' && descuento2>0)?1:0;
				cantVentasHombresDcto1 += (sexo=='M' && descuento1>0)?1:0;
				sumaTotalVentasBruto += importe;
				sumaTotalVentasNeto += total;
				sumaDescuentos += (descuento1+descuento2);
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
			// Opci�n 2: Reporte
			case 2:
				cout << endl;
				cout << "REPORTE DE INCADORES DE VENTA" << endl;
				cout << "==========================================================" << endl;
				cout << "Cantidad total de ventas: " << cantVentas << endl;
				cout << "Cantidad de ventas a clientes femeninos con el segundo descuento: " << cantVentasMujeresDcto2 << endl;
				cout << "Cantidad de ventas a clientes masculinos solo con el primer descuento: " << cantVentasHombresDcto1 << endl;
				cout << "Suma total de las ventas (Importe Bruto): " << sumaTotalVentasBruto << endl;
				cout << "Suma total de las ventas (Importe Neto): " << sumaTotalVentasNeto << endl;
				cout << "Suma de todos los descuentos realizados: " << sumaDescuentos << endl;
				cout << endl;		
				break;	
			// Opci�n 3: Salir
			case 3:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<3);
	
	// Fin
	return 0;
}
