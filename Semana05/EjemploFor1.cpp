/*
Ejemplo: Serie del 10 al 100.
*/
#include<iostream>
using namespace std;
int main(){
	// Variables
	int suma = 0;
	// Proceso
	cout << "Serie: ";
	for(int i = 10; i <= 100; i++){
		cout << i << ",";
		suma += i;
	}
	cout << endl;
	cout << "Suma: " << suma << endl;
	return 0;
}

