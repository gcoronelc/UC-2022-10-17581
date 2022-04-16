/*
Ejemplo: Ingrese un numero "n",
y muestre la serie de 1 a "n".
*/
#include<iostream>
using namespace std;
int main(){
	// 1. Declarar variables
	int n, cont = 1;
	// 2.- Entrada de datos
	cout << "Ingrese numero: ";
	cin  >> n;
	// Proceso y Salida
	while( cont <= n){
		cout << cont << endl;
		cont++;
	}
	return 0;
}




