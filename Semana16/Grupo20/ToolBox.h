#include <iostream>
using namespace std;


/*
 * Lee una opción de un rango.
*/
int LeerOpcion(int opMin, int opMax){
	int op;
	do{
		cout << "Opcion: "; cin >> op;
		if(op<opMin || op>opMax){
			cout << "Error, opcion fuera de rango." << endl;
		}	
	}while(op<opMin || op>opMax);
	return op;
}

/*
 * Lee el sexo de una persona.
*/
char LeerSexo(string etiqueta){
	char rpta;
	do{
		cout << etiqueta; cin >> rpta;
		rpta = toupper(rpta);
		if(rpta!='M' && rpta!='F'){
			cout << "Error, el sexo debe ser M o F." << endl;
		}
	}while(rpta!='M' && rpta!='F');
	return rpta;
} 


/*
 *  Lee un valor Double.
*/
int LeerDouble(string etiqueta, int valorMinimo){
	double valor;
	do{
		cout << etiqueta; cin  >> valor;		
		if(valor<valorMinimo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}

/*
 * Lee un valor entero
*/
int LeerEntero(string etiqueta, int valorMinimo){
	int valor;
	do{
		cout << etiqueta; cin  >> valor;		
		if(valor<valorMinimo){
			cout << "ERROR: el valor esta fuera de rango." << endl;
		}
	}while(valor<valorMinimo);
	return valor;
}

