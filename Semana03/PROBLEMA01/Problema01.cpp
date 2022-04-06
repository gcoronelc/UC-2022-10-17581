#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int sueldo;
	string mensaje;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "====================================" << endl;
	cout << "Sueldo: "; cin >> sueldo;
	
	// Proceso
	mensaje = "ERROR: sueldo incorrecto."; // Mensaje por defecto
	mensaje = (sueldo==1025)?"MENSAJE: Sueldo básico.":mensaje;
	mensaje = (sueldo>1025)?"MENSAJE: sueldo no es basico.":mensaje;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "====================================" << endl;
	cout << mensaje << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

