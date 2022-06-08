#include <iostream>
using namespace std;


/*
 * Lee una opci�n de un rango.
*/
int LeerOpcion(int opMin, int opMax){
	int op;
	do{
		cout << "Opci�n: "; cin >> op;
		if(op<opMin || op>opMax){
			cout << "Error, opci�n fuera de rango." << endl;
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



