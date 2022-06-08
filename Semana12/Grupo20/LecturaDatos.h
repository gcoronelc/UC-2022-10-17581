#include<iostream>
#include<string>
using namespace std;

/*
 * Lee un dato de tipo int
*/
int leeDatoEntero()
{
	int dato;
	cin>> dato;
	return dato;
}

/*
 * Lee un dato de tipo int positivo
*/
int leeDatoEnteroPositivo(string etiqueta)
{
	int dato;
	do{
		cout << etiqueta; cin>> dato;
		if( dato <= 0 ){
			cout << "ERROR, valor incorrecto." << endl;
		}
	} while( dato <= 0 );
	return dato;
}

float leedatof()
{
	float dato;
	cin>> dato;
	return dato;
}

/*
 * Lee un dato de tipo double
*/
double leeDatoDouble()
{
	double dato;
	cin>> dato;
	return dato;
}

/*
 * Lee un dato de tipo double positivo.
 * Mayor que cero.
*/
double leeDatoDoublePositivo(string etiqueta)
{
	double dato;
	do{
		cout << etiqueta; cin>> dato;
		if( dato <= 0 ){
			cout << "ERROR, valor incorrecto." << endl;
		}
	} while( dato <= 0 );
	return dato;
}


char leedatoc()
{
	char dato;
	cin>> dato;
	return dato;
}

/*
 * Lee una cadena
*/
string leeDatoString()
{
	string dato;
	cin>> dato;
	return dato;
}

/*
 * Lee una cadena
*/
string leeDatoString(string etiqueta)
{
	string dato;
	cout << etiqueta;
	cin  >> dato;
	return dato;
}

