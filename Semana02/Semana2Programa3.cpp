/*
 * Cálculo de una venta
*/

#include<iostream>
using namespace std;

int main( )
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	string nombreProducto;
	double precio, cantidad, descuento;
	double montoBruto, montoDescuento, montoTotal; 
	
	// Lectura de datos
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================================================" << endl;
	cout << "Ingrese nombre del producto: "; cin >> nombreProducto;
	cout << "Ingrese precio del producto: "; cin >> precio;
	cout << "Ingrese cantidad a comprar del producto: "; cin>>cantidad;
	cout << "Ingrese porcentaje de descuento (en decimales): "; cin>>descuento;

	// Proceso
	montoBruto = precio * cantidad;
	montoDescuento = montoBruto * descuento;
	montoTotal = montoBruto - montoDescuento;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==========================================================" << endl;
	cout << "El monto bruto es:\t\t" << montoBruto << endl;
	cout << "El monto de descuento es:\t" << montoDescuento << endl;
	cout << "El monto total es:\t\t" << montoTotal << endl;
	
	return 0;
}


