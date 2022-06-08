/*
Este programa ilustra el uso de menu y submenu.
*/
#include<iostream>
#include "LecturaDatos.h"
using namespace std;

int may, men; 
//int num, cont=0, may, men, dig; 


void Digitos()
{
	int num, cont, dig;
	cout << endl;
	do{
		cout<<"Ingrese numero:\t";
		num = leedatoe();
		if(num < 0){
			cout << "No se puede obtener digito. vuelva a ingresar." << endl;
		}
	}while(num < 0);

	if(num == 0){
		cout<<"El digito es CERO.";
	} else {
		cont = 0;
		while(num>0)
		{
			dig=num%10;
			cont = cont+1;
			if(cont ==1)
			{
				may= dig;
				men= dig;
			}
			else
			{
				may = (dig>may)?dig:may;
				men = (dig<men)?dig:men;
			}
			num = num/10;
		}
	}
}

void Mostrar()
{	cout << endl << endl;
	cout<<"El digito mayor es: "<<may<<"\n";
	cout<<"El digito menor es: "<<men<<"\n";
}

void Salida()
{
	cout << endl;
	cout << "GRACIAS. Vuelva pronto..!!" << endl;
}

void Procesar()  // Sub Menú 
{
	int opc;
	do{
		cout << endl << endl;
		cout << "DETERMINA DIGITOS" << endl;
		cout << "==========================" << endl;
		cout << "1.Digitos." << endl;
		cout << "2.Mostrar." << endl;
		cout << "3.Salir." << endl;
		do {
			cout << endl;
			cout << "Ingrese opcion: ";
			opc = leedatoe();
			if (opc < 1 || opc > 3){
				cout << "ERROR. Vuelva a Ingresar.";
			}
		} while (opc < 1 || opc > 3);

		switch (opc)
		{
			case 1:
				Digitos();
				break;
			case 2:
				Mostrar();  
				break;
			case 3:
				Salida();  
				break;
		}		
		
	}while(opc != 3);
}

void MenuPrincipal()  // Menú principal
{
	int op;
	do{
		cout << endl << endl;
		cout << "MENU DE OPCIONES" << endl;
		cout << endl;
		cout << "1.Procesar." << endl;
		cout << "2.Salir." << endl;
		cout << endl;
		
		do{
			cout << "Ingrese opcion: ";
			op = leedatoe();
			if (op != 1 && op != 2){
				cout << "ERROR. Vuelva a Ingresar." << endl;
			}
			
		}while (op != 1 && op != 2);
		
		switch (op)
		{
			case 1:
				Procesar();
				break;
			case 2:
				Salida();
				break;
		}
		
	}while(op!=2);
}

int main()
{
	MenuPrincipal();
	return 0;
}


