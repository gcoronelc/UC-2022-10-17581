/*
Que solicite el ingreso de un número y muestre números múltiplos de 3
desde 0 hasta el número ingresado while
*/

#include<iostream>
using namespace std;
int main(){
	
	int numero, i;
	
	cout << "Número: "; cin >> numero;
	
	for(int i=0;i<=numero;i++){
		if((i%3) == 0){
			cout << i << ", " ;
		}
	}
	
	cout << endl;
	return 0;
}
