#include <iostream>
#include "ToolBox.h"
using namespace std;

// Variables globales
int contVentas = 0;

void mostrarMenu(){
	system("cls");
	cout << "EL PESCADOR" << endl;
	cout << "===============================" << endl;
	cout << "1.- Registrar venta" << endl;
	cout << "2.- Reporte de ventas" << endl;
	cout << "3.- Salir" << endl;
	cout << "===============================" << endl;
}

void mostrarTipoProducto(){
	cout << endl;
	cout << "Tipo de producto" << endl;
	cout << "-----------------------" << endl;
	cout << "1.- Ceviches" << endl;
	cout << "2.- Sudados" << endl;
	cout << "3.- Jaleas" << endl;
	cout << "4.- Bebidas" << endl;
	cout << "-----------------------" << endl;
}

double calcPorcDcto1(int tipoProducto){
	double porcDcto = 0;
	porcDcto = (tipoProducto==1)?5:porcDcto;
	porcDcto = (tipoProducto==2)?6:porcDcto;
	porcDcto = (tipoProducto==3)?4:porcDcto;
	porcDcto = (tipoProducto==4)?2:porcDcto;
	return porcDcto;
}

double calcPorcDcto2(char sexo, int edad){
	double porcDcto = 0;
	porcDcto = (sexo=='M' && edad>50)?4:porcDcto;
	porcDcto = (sexo=='F' && edad>50)?6:porcDcto;
	return porcDcto;
}

void procesarVenta(){
	// Variables de la venta
	int tipoProducto, cantidad, edad;
	double precio, porcDcto1, porcDcto2;
	double importe, descuento1, descuento2, totalPagar;
	char sexo;
	string descripcion;
	// Cabecera
	cout << "EL PESCADOR" << endl;
	cout << "Venta Nro, " << (contVentas+1) << endl;
	cout << "===============================================" << endl;
	mostrarTipoProducto();
	tipoProducto = LeerOpcion(1,4);
	cout << "Descripción: "; cin >> descripcion;
	precio = LeerDouble("Precio: ",1);
	cantidad = LeerEntero("Cantidad: ", 1);
	sexo = LeerSexo("Sexo (M/F): ");
	edad = LeerEntero("Edad [1,150]: ", 1, 150);
	// Descuentos
	porcDcto1 = calcPorcDcto1(tipoProducto);
	porcDcto2 = calcPorcDcto2(sexo, edad);
	// Calculo de la venta
	importe = precio * cantidad;
	descuento1 = importe * porcDcto1 / 100.0;
	descuento2 = importe * porcDcto2 / 100.0;
	totalPagar = importe - descuento1 - descuento2;
	// Reporte de venta
	cout << endl;
	cout << "REPORTE DE VENTA" << endl;
	cout << "=====================================" << endl;
	cout << "Precio: " << precio << endl;
	cout << "Cantidad: " << cantidad << endl;
	cout << "% Dcto 1: " << porcDcto1 << "%" << endl;
	cout << "Descuento 1: " << descuento1 << endl;
	cout << "% Dcto 2: " << porcDcto2 << "%" << endl;
	cout << "Descuento 2: " << descuento2 << endl;
	cout << "Total a pagar: " << totalPagar << endl;
	cout << endl;
}

void reporteVentas(){
	cout << "Ventas ok" << endl;
}

void finPrograma(){
	cout << "Fin del programa" << endl;
	cout << "Que tanga un excelente día" << endl;
	cout << endl;
}
