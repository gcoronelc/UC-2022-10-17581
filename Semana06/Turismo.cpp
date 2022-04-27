#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu, cantPersonas;
	double precioPersona, porcDcto;
	double dctoPersona, importe, impuesto, total;
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "SISTEMA DE PAQUETES TURISTICOS" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Punta Cana" << endl;
		cout << "2.- San Andrés" << endl;
		cout << "3.- Cancún" << endl;
		cout << "4.- Salir" << endl;
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		
		// Opción salir
		if(opMenu==4){
			cout << "Fin del programa." << endl;
			break;
		}
		
		// Lectura de datos
		cout << endl;
		cout << "Cantidad de personas: "; cin >> cantPersonas;
		
		// Procesar 
		switch(opMenu){
			case 1:
				precioPersona = 780.0;
				porcDcto = 3.5;
				break;
			case 2:
				precioPersona = 1350.0;
				porcDcto = 4;
				break;	
			case 3:
				precioPersona = 2550;
				porcDcto = 4.5;
				break;					
		}
		dctoPersona = ((cantPersonas>4)?porcDcto:0.0)*precioPersona/100;
		total = cantPersonas*(precioPersona-dctoPersona)*3.73;
		importe = total / 1.18;
		impuesto = total - importe;
		
		// Reporte
		cout << endl;
		cout << "REPORTE" << endl;
		cout << "======================================" << endl;
		cout << "Precio por persona: " << precioPersona << endl;
		cout << "Descuento por persona: " << dctoPersona << endl;
		cout << "Cantidad de personas: " << cantPersonas << endl;;
		cout << "Importe: " << importe << endl;
		cout << "Impuesto: " << impuesto << endl;
		cout << "Total: " << total << endl;		
		
		system("pause");
	} while(opMenu!=4);
	
	// Fin
	return 0;
}
