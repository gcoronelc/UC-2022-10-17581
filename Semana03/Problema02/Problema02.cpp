#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int edad;
	string mensaje;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===========================" << endl;
	cout << "Edad: "; cin >> edad;
	
	// Proceso
	mensaje = "Dato ingresado es incorrecto."; // Punto de partida
	mensaje = (edad>=0 && edad<18)?"Es menor de edad.":mensaje;
	mensaje = (edad>=18 && edad<=120)?"Es mayor de edad.":mensaje;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "===========================" << endl;
	cout << "Edad: " << edad << endl;
	cout << "Mensaje: " << mensaje << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

