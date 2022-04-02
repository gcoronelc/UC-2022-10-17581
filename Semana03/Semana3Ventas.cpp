#include<iostream>
using namespace std;
int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	double Cant, Prec, dcto, MBruto, MDcto, MFinal;
	
	cout << "Ingrese cantidad: "; cin  >> Cant;
	if(Cant>0){
		cout << "Ingrese precio: "; cin >> Prec;
		if(Prec>0){
			if(Cant<=2){
				dcto = 0;
			} else if(Cant<=5){
				dcto = 0.10;
			} else if(Cant<=10){
				dcto = 0.15;
			} else {
				dcto = 0.20;
			}
			MBruto = Prec * Cant;
			MDcto = MBruto * dcto;
			MFinal = MBruto - MDcto;
			cout << "El monto final es: " << MFinal << endl;
		} else {
			cout << "ERROR: Debe ser > 0." << endl;
		}
	} else {
		cout << "ERROR: Debe ser > 0." << endl;
	}
	
	cout << endl;
	return 0;
}	
