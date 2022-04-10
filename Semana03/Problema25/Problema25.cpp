#include <string>
#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	char genero;
	int cantidad;
	double precio, importeVenta, totalPagar;
	double porcDctoGenero, porcDctoCantidad;
	double dctoGenero, dctoCantidad;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=====================================" << endl;
	cout << "Genero (M/F): "; cin >> genero;
	cout << "Precio: "; cin >> precio;
	cout << "Cantidad: "; cin >> cantidad;
	
	// Proceso
	// Importe de venta
	importeVenta = precio * cantidad;
	// Descuento de genero
	genero = toupper(genero);
	porcDctoGenero = 0;
	porcDctoGenero = (genero=='M')?18:porcDctoGenero;
	porcDctoGenero = (genero=='F')?25:porcDctoGenero;
	// Descuento por cantidad
	porcDctoCantidad = 0;
	if(genero=='M'){
		porcDctoCantidad = (cantidad>=0 && cantidad<10.0)?20:porcDctoCantidad;
		porcDctoCantidad = (cantidad>10.0)?50:porcDctoCantidad;
	}
	if(genero=='F'){
		porcDctoCantidad = (cantidad>=0 && cantidad<10.0)?30:porcDctoCantidad;
		porcDctoCantidad = (cantidad>10.0)?40:porcDctoCantidad;
	}
	dctoGenero = importeVenta * porcDctoGenero/100;
	dctoCantidad = importeVenta * porcDctoCantidad/100;
	// Calcular total a pagar
	totalPagar = importeVenta - dctoGenero - dctoCantidad;
	
	// Reporte
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "=====================================" << endl;	
	cout << "Importe de la venta: " << importeVenta << endl;
	cout << "Descuento pr genero: " << dctoGenero << endl;
	cout << "Descuento por cantidad: " << dctoCantidad << endl;
	cout << "Importe a pagar: " << totalPagar << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

