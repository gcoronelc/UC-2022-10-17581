#include<iostream>
using namespace std;

double saldo = 0, depos, retir;  
int rpta, op, opc;

int leeDatoEntero()
{	
	int dato;
	cin >> dato;
	return dato;
}

double leeDatoDouble()
{	
	double dato;
	cin >> dato;
	return dato;
}

void Depositar()
{
	do{
		cout << endl;
		cout << "Ingrese monto a depositar: ";
		depos = leeDatoDouble();
		if (depos <= 0){
			cout << "ERROR. Vuelva a ingresar." << endl;
		}
	}while (depos <= 0);
	saldo = saldo + depos;
}

void Retirar()
{
	do{
		cout << endl;
		cout << "Ingrese monto a retirar: ";
		retir = leeDatoDouble();
		if (retir <= 0){
			cout << "ERROR. Vuelva a ingresar." << endl;
		}
	}while (retir <= 0);
	if (retir <= saldo){
		saldo = saldo - retir;
	} else {
		cout << "No se puede. No tiene saldo suficiente." << endl;
	}
}

void VerSaldo()
{
	cout << endl;
	cout << "Su saldo es: " << saldo << endl;
}

void Salida()
{
	cout << "GRACIAS. Vuelva pronto..!!" << endl;
}

void Procesar()  // Sub Menú 
{
	cout << endl << endl;
	cout << "----------CAJERO---------\t\t" << endl;
	cout << endl;
	cout << "1.Depositar." << endl;
	cout << "2.Retirar." << endl;
	cout << "3.Saldo." << endl;
	cout << "4.Salir." << endl;
	cout << endl;
	do {
		cout << "Ingrese opcion: ";
		opc = leeDatoEntero();
		if (opc < 1 || opc > 4){
			cout << "ERROR. Vuelva a Ingresar.";
		}
	}while (opc < 1 || opc > 4);

	switch (opc)
	{
		case 1: 
			Depositar();
			VerSaldo();   // para que vea la información sin entrar al submenú 
			cout << endl;
			break;
		case 2:
			Retirar();  					
			VerSaldo();  // para que vea la información sin entrar al submenú 
			cout << endl;
			break;
		case 3:
			VerSaldo();
			cout << endl;
			break;
		case 4:
			Salida();  // Sale solo del submenú..pero volverá al menú principal 
			break;
	}
}

int Menu()  // Menú principal
{
	do{
		cout << endl << endl;
		cout << "----------MENU---------\t\t" << endl;
		cout << endl;
		cout << "1.Procesar." << endl;
		cout << "2.Salir." << endl;
		cout << endl;
		cout << "Ingrese opcion: ";
		op = leeDatoEntero();
		if (op != 1 && op != 2){
			cout << "ERROR. Vuelva a Ingresar." << endl;
		}
	}while (op != 1 && op != 2);
	
	switch (op)
	{
		case 1:
			do{
				Procesar();
				cout << endl;
			} while (opc != 4);  // repite el submenú
			break;
		case 2:
			Salida();
			break;
	}
	return op;
}


int main()
{
	do{
		rpta = Menu();
	}while (rpta != 2);
	return 0;
}
