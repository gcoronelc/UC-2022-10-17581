#include <iostream>
using namespace std;


/*
 * Para leer cualquier número entero.
*/
int LeeEntero(string etiqueta){
	int valor;
	cout << etiqueta;
	cin >> valor;
	return valor;
}

/*
 * Para leer un entero mayor que un valor minimo.
 * Por ejemplo, el peso debe ser un valor positivo, minimo 0 o 1.
 * peso = LeeEntero("Ingrese el peso (>0)",1);
*/
int LeeEntero(string etiqueta, int valorMinimo){
	int valor;
	do{
		cout << etiqueta; cin >> valor;
		if(valor<valorMinimo){
			cout << "ERROR: dato ingresado fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}


/*
 * Para leer un entero dentro de un rango.
 * Por ejemplo, la edad entre 1 y 120.
 * edad = LeeEntero("Ingrese la edad [1,120]:",1,120);
*/
int LeeEntero(string etiqueta, int valorMinimo, int valorMaximo){
	int valor;
	do{
		cout << etiqueta; cin >> valor;
		if(valor<valorMinimo || valor>valorMaximo){
			cout << "ERROR: dato ingresado fuera de rango." << endl;
		}
	}while(valor<valorMinimo || valor>valorMaximo);
	return valor;
}


/*
 * Para leer un decimal mayor que un valor minimo.
 * Por ejemplo, el precio debe ser un valor positivo, minimo 0 o 1.
 * peso = LeeDecimal("Ingrese el peso (>0)",1);
*/
int LeeDecimal(string etiqueta, double valorMinimo){
	double valor;
	do{
		cout << etiqueta; cin >> valor;
		if(valor<valorMinimo){
			cout << "ERROR: dato ingresado fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}

void CalculaVenta(double precio, int cantidad, double &importe, double &impuesto, double &total){
	total = precio*cantidad;
	importe = total / 1.18;
	impuesto = total - importe;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double precio, importe, impuesto, total;
	int cantidad;
  
	// Lectura de datos
	precio = LeeDecimal("Ingrese precio: ", 1);
	cantidad = LeeEntero("Ingrese cantidad: ", 1);
	
	// Proceso  
	CalculaVenta(precio,cantidad,importe,impuesto,total);

	// Reporte
	cout << endl;
	cout << "Importe: " << importe << endl;
	cout << "Impuesto: " << impuesto << endl;
	cout << "Total: " << total << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
