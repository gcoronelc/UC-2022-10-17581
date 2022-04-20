#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int nota, bono, rango, factor;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==============================" << endl;
	cout << "Nota: "; cin >> nota;
	
	// Validación
	if(nota<0 || nota>20){
		cout << endl;
		cout << "ERROR" << endl;
		cout << "=============================================" << endl;
		cout << "Nota ingresada esta fuera de rango." << endl;
		cout << endl;
		return 0;
	}
	
	// Proceso
	bono = 0.0;
	for(int i=1; i<=4; i++){
		switch(i){
			case 1:
				rango=5;
				factor=50;
				break;
			case 2:
				rango=7;
				factor=80;
				break;
			case 3:
				rango=5;
				factor=120;
				break;	
			case 4:
				rango=3;
				factor=150;
				break;							
		}
		if(nota<rango){
			rango = nota;
			nota = 0;
		} else {
			nota -= rango;
		}
		bono += rango*factor;
	}
	
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=============================================" << endl;
	cout << "Bono: " << bono << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
