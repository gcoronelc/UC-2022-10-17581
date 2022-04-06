/*
Estructura: switch


	switch(expresion){
		case valor1:
			instrucciones;
			[break;]
		case valor2:
			instrucciones;
			[break;]
		case valor3:
			instrucciones;
			[break;]
			...
		case valorn:
			instrucciones;
			[break;]
		[default:
			instrucciones;
			[break;]			
		]					
	}

*/
#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int n;
	string dato;
	
	// Generar numero aleatorio
	n = 
	
	switch(n){
		case 1:
			dato = "Hola todos.";
			break;
		case 2:
			dato = "Adios todos.";
			break;
		default:
			dato = "Opción incorrecta.";
			break;
	}
	
	cout << "Dato: " << dato << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

