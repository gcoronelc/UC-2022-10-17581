/*
Ejemplo: Serie del 100 al 10.
*/
#include<iostream>
using namespace std;
int main(){
	// Variables
	int suma = 0;
	// Proceso
	cout << "Serie: ";
	for(int i = 100; i >= 10; i--){
		cout << i << ",";
		suma += i;
	}
	cout << endl;
	cout << "Suma: " << suma << endl;
	return 0;
}

