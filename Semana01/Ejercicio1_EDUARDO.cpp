#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int sol, dolar;
	
	// Lectura de datos
	cout << endl;
	cout << "Cambio de soles a dolares" << endl;
	cout << "==========================" << endl;
	cout << "sol: "; cin >> sol;
	
	
	// Proceso
	dolar = sol / 3.78;
	
	
	// Reporte
	cout << endl;
	cout << "Cambio" << endl;
	cout << "==========================" << endl;
	cout << "Dolar: " << dolar << endl;
	cout << endl;	
	
	// Fin
	system("pause");
	return 0;
}
