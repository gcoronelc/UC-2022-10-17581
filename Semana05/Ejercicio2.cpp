/*
Que permita el ingreso de notas mientras sean entre 0 y 20 si se
ingresa un nota no válida, finaliza mostrando la suma, cantidad de notas
y el promedio de las notas ingresadas do while
*/

#include<iostream>
using namespace std;
int main(){
	
	int nota, contNotas;
	double sumaNotas, promedio;
	
	sumaNotas = 0.0;
	contNotas = 0;
	promedio = 0.0;
	do{
		
		// Lectura de nota
		cout << endl;
		cout << "Nota: "; cin >> nota;
		
		if(nota>=0 && nota<=20){
			contNotas = contNotas + 1; // contNotas++;
			sumaNotas += nota; // sumaNotas = sumaNotas + nota;
		}
		
	}while(nota>=0 && nota<=20);
	
	if(contNotas>0){
		promedio = sumaNotas / contNotas;
	}
	
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "Suma de notas: " << sumaNotas << endl;
	cout << "Cantidad de notas: " << contNotas << endl;
	cout << "Promedio: " << promedio << endl;
	cout << "Nos vemos en el mundial." << endl;
	return 0;
}
