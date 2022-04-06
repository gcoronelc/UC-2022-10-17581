/*
Estructura if

Caso 1: Simple

	if( condicion ){
		instrucciones
	}

Caso 2: Doble o compuesta

	if( condicion ){
		instrucciones 1
	} else {
		instrucciones 2
	}

*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int a = 126, b = 30, c;
	
	if(a>b){
		c = 100;
	} else {
		c = 200;
	}
	
	cout << "c = " << c << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}

