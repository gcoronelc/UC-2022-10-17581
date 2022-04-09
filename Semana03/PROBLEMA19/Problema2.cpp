#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double sueldo, porcDcto, descuento, sueldoNeto;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================================" << endl;
	cout << "Sueldo: "; cin >> sueldo;
	
	// Proceso
	// Paso 1: Determinar % de descuento
	porcDcto = 0;
	porcDcto = (sueldo>=0 && sueldo<=1000.0)?10:porcDcto;
	porcDcto = (sueldo>1000.0 && sueldo<=2000.0)?15:porcDcto;
	porcDcto = (sueldo>2000.0)?20:porcDcto;
	// Paso 2: Calcular el descuento
	descuento = sueldo * porcDcto / 100;
	// Paso 3: Calcular el sueldo neto
	sueldoNeto = sueldo - descuento;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==================================" << endl;
	cout << "Sueldo: " << sueldo << endl;
	cout << "% de descuento: " << porcDcto << "%" << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Sueldo neto: " << sueldoNeto << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

