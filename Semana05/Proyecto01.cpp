/*
Solución del proyecto 1
*/
#include<iostream>
using namespace std;
int main(){
	// 1. Declarar variables
	int importe, valorBillete = 0, cantBilletes = 0;
	string textoBillete = "";
	string linea = "----------------------------\n";
	// 2.- Entrada de datos
	cout << "Ingrese el importe: ";
	cin  >> importe;
	// Proceso y Salida
	cout << "REPORTE" << endl;
	cout << "Importe: " << importe << endl;
	cout << linea;
	for(int i = 1; i <= 8; i++){
		// Inicializando la iteracion
		valorBillete = 1000;
		textoBillete = "";
		// Valor del billete o moneda		
		switch(i){
			case 1:
				valorBillete = 200;
				textoBillete = "Billetes de 200: ";
				break;
			case 2:
				valorBillete = 100;
				textoBillete = "Billetes de 100: ";
				break;		
			case 3:
				valorBillete = 50;
				textoBillete = "Billetes de 50: ";
				break;	
      case 4:
				valorBillete = 20;
				textoBillete = "Billetes de 20: ";
				break;
			case 5:
				valorBillete = 10;
				textoBillete = "Billetes de 10: ";
				break;
			case 6:
				valorBillete = 5;
				textoBillete = "Monedas de 5: ";
				break;
			case 7:
				valorBillete = 2;
				textoBillete = "Monedas de 2: ";
				break;
			case 8:
				valorBillete = 1;
				textoBillete = "Monedas de 1: ";
				break;				
		}
		// Calculos de la iteracion
		cantBilletes = importe / valorBillete;
		// Reporte de la iteracion
		if( cantBilletes > 0 ){
			cout << textoBillete << cantBilletes << endl;
		}
		// Nuevo importe
		importe -= valorBillete * cantBilletes;
	}
	cout << linea;
	return 0;
}
