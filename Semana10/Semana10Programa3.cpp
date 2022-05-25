#include <iostream>
using namespace std;

// Declaración global
int cont = 0, mayor, menor, dato;   
char rpta;

int leeDatoEntero()
{
	int dato;
	cin>>dato;
	return dato;	
}

char leeDatoChar()
{
	char dato;
	cin>>dato;
	dato = toupper(dato);
	return dato;	
}

void Mostrar()
{
	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es: " << menor << endl;
}

void procMayorMenor()
{
	do{
		cout<<"Ingrese valor: ";
		dato = leeDatoEntero();
		
		cont = cont + 1;  // cont++;
		
		if(cont == 1)
		{
			mayor = dato;
			menor = dato;		
		}
		else
			if(dato > mayor)
				mayor = dato;
			else
				if(dato < menor)
					menor = dato;
	
		do{
			cout<<"Desea ingresar otros numero? (S/N):";
			rpta = leeDatoChar();
			
			if(rpta != 'S' && rpta != 'N')
				cout << "ERROR. Vuelva a ingresar S o N." << endl;
			
		}while(rpta != 'S' && rpta != 'N');
		
	}while(rpta == 'S');
	
	Mostrar();
}

int main()
{
	procMayorMenor();
	return 0;	
}



