/*
 * Operador ternario: condicion?expresion1:expresion2
*/
#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int a = 10, b = 30, c;
	
	c = (a>b)?100:200;
	
	cout << "c = " << c << endl;
	cout << endl;
	
	
	// Fin
	system("pause");
	return 0;
}

