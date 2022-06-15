#include<iostream>
#include<ctype.h>
#include<math.h>
using namespace std;

int main()
{
	int numero, absNumero;
	
	cout << "Ingrese un número entero: ";
	cin  >> numero;
	
	absNumero = abs(numero);
	
	cout << endl;
	cout << "Valor original: " << numero << endl;
	cout << "Valor absoluto: " << absNumero << endl;
	cout << endl;
	
}
