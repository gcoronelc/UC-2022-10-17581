#include <iostream>
using namespace std;

float leeDatoFloat()
{
	float dato;
	cin>>dato;
	return dato;	
}

int leeDatoEntero()
{
	int dato;
	cin>>dato;
	return dato;	
}

void procHerencia()
{
	float herencia, herenciaHijo, herenciaMayor;
	int hijos;

	do{
		cout << "Ingresar importe de herencia: ";
		herencia = leeDatoFloat();
		if (herencia<=0){
			cout << "ERROR. La herencia debe ser mayor a 0." << endl;
		}
	} while (herencia<=0);

	do{
		cout << "Ingresar cantidad de hijos: ";
		hijos = leeDatoEntero();
		if (hijos<= 0){
			cout << "ERROR. La cantidad debe ser mayor a 0." << endl;
		}
	} while (hijos<= 0);
	
	if (hijos<4)
	{	
		herenciaHijo = herencia / hijos;
		cout << "La herencia a cada hijo es: " << herenciaHijo << endl;

	}
	else
	{
		herenciaMayor = herencia / 2;
		herenciaHijo = herenciaMayor / (hijos - 1);
		cout << "\nLa herencia del hermano mayor es: " << herenciaMayor;
		cout << "\nLa herencia de los demas hijos es: " << herenciaHijo;
	}
}

int main()
{
	procHerencia();
	return 0;
}




