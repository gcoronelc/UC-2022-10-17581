/*
Solución del proyecto 2
*/
#include<iostream>
using namespace std;
int main(){
	// 1. Declarar variables
	int promedio, guardaPromedio, bono = 0, rango, factor;
	string linea = "----------------------------------\n";
	// 2.- Entrada de datos
	cout << "Ingrese promedio: ";
	cin  >> promedio;
	guardaPromedio = promedio;
	// Proceso 
	for(int i = 1; i <= 4; i++){
		// Rango y factor
		switch(i){
			case 1:
				factor = 50;
				rango = 5;
				break;
			case 2:
				factor = 80;
				rango = 7;
				break;
			case 3:
				factor = 120;
				rango = 5;
				break;
			case 4:
				factor = 150;
				rango = 3;
				break;
		}
		if(promedio < rango){
			rango = promedio;
		}
		// Calculo del bono
		bono += rango * factor;
		// Promedio para la siguiente iteracion
		promedio -= rango;
	}
	// Salida o Reporte
	cout << "REPORTE" << endl;
	cout << linea;
	cout << "Promedio: " << guardaPromedio << endl;
	cout << "Bono: " << bono << endl;
	cout << linea;
	return 0;
}
