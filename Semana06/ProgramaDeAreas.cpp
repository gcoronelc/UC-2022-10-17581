#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op; // Opci�n del men�
	double ladoCuadrado, areaCuadrado;
	
	// Control del men�
	do{
		
		// El men�
		system("cls");
		cout << "\tMENU DE AREAS" << endl;
		cout << "======================================" << endl;
		cout << "1.- Area de un cuadrado" << endl;
		cout << "2.- Area de un rectangulo" << endl;
		cout << "3.- Area de un triangulo" << endl;
		cout << "4.- Salir" << endl;
		
		// Leer opci�n del men�
		do{
			cout << endl;
			cout << "Opci�n? "; cin >> op;
			if(op<1 || op>4){
				cout << "ERROR: opci�n incorrecta." << endl;
			}
		}while(op<1 || op>4);
		
		// Programando el men�
		system("cls");
		switch(op){
			case 1:
				// Lectura de datos
				cout << "Area de un cuadrado" << endl;
				cout << "-------------------------------" << endl;
				cout << "Lado del cuadrado: "; cin >> ladoCuadrado;
				// Proceso
				areaCuadrado = ladoCuadrado * ladoCuadrado;
				// Reporte
				cout << endl;
				cout << "Reporte" << endl;
				cout << "--------------------------------" << endl;
				cout << "Area del cuadrado: " << areaCuadrado << "u2" << endl;
				cout << endl;
				break;
			case 2:
				cout << "Area de un rectangulo" << endl;
				break;
			case 3:
				cout << "Area de un triangulo" << endl;
				break;
			case 4:
				cout << "Fin del programa." << endl;
				break;	
		}
		
		
		system("pause");
	} while(op!=4);
	
	return 0;
}
