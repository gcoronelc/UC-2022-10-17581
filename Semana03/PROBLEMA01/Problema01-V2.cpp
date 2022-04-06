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
	if(sueldo<1025){
		mensaje = "ERROR: sueldo incorrecto.";
	} else if(sueldo==1025){
		mensaje = "MENSAJE: Sueldo básico.";
	} else {
		mensaje = "MENSAJE: sueldo no es basico.";
	}
	
	
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

