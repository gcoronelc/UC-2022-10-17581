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





