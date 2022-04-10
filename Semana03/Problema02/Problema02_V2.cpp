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
	if(edad>=0 && edad<18){
		mensaje = "Es menor de edad.";
	} else if(edad>=18 && edad<=120){
		mensaje = "Es mayor de edad.";
	} else{
		mensaje = "Dato ingresado es incorrecto.";
	}
		
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

