#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double sueldoActual, nuevoSueldo;
	char categoria;
	double porcAumento, aumento;
	int control;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===============================" << endl;
	cout << "Sueldo actual: "; cin >> sueldoActual;
	cout << "Categoría (S/C/D/E): "; cin >> categoria;
	
	// Validación
	categoria = toupper(categoria); // Convierte a mayúscula si esta en minúscula
	control = 1; // Datos correctos
	control = (sueldoActual<=0)?-1:control;
	control = (categoria!='S' && categoria!='C' && categoria!='D' && categoria!='E')?-1:control;
	if(control==-1){
		cout << endl;
		cout << "ERROR" << endl;
		cout << "=======================================" << endl;
		cout << "Existe error en los datos ingresados." << endl;
		return 0;
	}
	
	// Proceso
	// Paso 1: Determinar el porcentaje de aumento
	porcAumento = 0.0;
	switch(categoria){
		case 'S':
			porcAumento = 0.20;
			break;
		case 'C':
			porcAumento = 0.10;
			break;
		case 'D':
			porcAumento = 0.05;
			break;
	}
	// Paso 2: Calcular aumento
	aumento = sueldoActual * porcAumento;
	// Paso 3: Calcular nuevo sueldo
	nuevoSueldo = sueldoActual + aumento;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "===========================================" << endl;
	cout << "Sueldo actual: " << sueldoActual << endl;
	cout << "Categoría: " << categoria << endl;
	cout << "Aumento: " << aumento << endl;
	cout << "Nuevo sueldo: " << nuevoSueldo << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
