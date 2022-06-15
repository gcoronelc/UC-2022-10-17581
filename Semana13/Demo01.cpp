#include<iostream>
#include<ctype.h>
#include<math.h>
using namespace std;

int main()
{
	char dato, mayuscula, minuscula;
	int codASCIIMayuscula, codASCIIMinuscula;
	
	cout << "Ingrese un caracter: ";
	cin >> dato;
	
	mayuscula = toupper(dato);
	codASCIIMayuscula = int(mayuscula);
	
	minuscula =  tolower(dato);
	codASCIIMinuscula = int(minuscula);
	
	cout << endl;
	cout << "Original: " << dato << endl;	
	cout << "En mayuscula: " << mayuscula << endl;	
	cout << "Código ASCII: " << codASCIIMayuscula << endl;	
	cout << "En minuscula: " << minuscula << endl;
	cout << "Código ASCII: " << codASCIIMinuscula << endl;
	cout << endl;	
	
}
