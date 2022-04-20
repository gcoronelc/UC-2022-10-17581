/*
Ejemplo: Ingrese un numero "n",
y muestre la serie de 1 a "n".
*/
#include<iostream>
using namespace std;
int main(){
	
	// 1. Declarar variables
	int n, cont;
	
	// 2.- Entrada de datos
	cout << "Ingrese numero: ";
	cin  >> n;
	
	// Proceso y Salida
	cont = 1;
	while( cont <= n ){
		cout << cont << endl;
		cont+=2;
	}
	
	return 0;
}




