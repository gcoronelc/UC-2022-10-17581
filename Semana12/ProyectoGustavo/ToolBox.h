#include <iostream>
using namespace std;


/*
 * Lee una opción de un rango.
*/
int LeerOpcion(int opMin, int opMax){
	int op;
	do{
		cout << "Opción: "; cin >> op;
		if(op<opMin || op>opMax){
			cout << "Error, opción fuera de rango." << endl;
		}	
	}while(op<opMin || op>opMax);
	return op;
}





