/*
Que solicite el ingreso de un n�mero y muestre n�meros m�ltiplos de 3
desde 0 hasta el n�mero ingresado while
*/

#include<iostream>
using namespace std;
int main(){
	
	int numero, i;
	
	cout << "N�mero: "; cin >> numero;
	
	i=0;
	while(i<=numero){
		if((i%3) == 0){
			cout << i << ", " ;
		}
		i++;
	}
	
	cout << endl;
	return 0;
}
