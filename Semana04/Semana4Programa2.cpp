#include<iostream>
using namespace std;

int main( )
{ 	
	setlocale(LC_CTYPE,"Spanish");
	
	int op, opc;

	cout<<"-------- MENÚ PRINCIPAL --------\n\n";
	cout<<"1. Procesar."<<"\n";
	cout<<"2. Salir."<<"\n";
	
	cout<<"Ingrese opción (1 o 2):\t\t";
	cin>>op;
	
	if(op==1 || op==2) //VALIDAR
	{
		switch(op)
		{  
			case 1: {
						cout<<"-------- SUB MENÚ --------\n\n";
						cout<<"1. Calcular."<<"\n";
						cout<<"2. Volver."<<"\n";
					
						cout<<"Ingrese opción (1 o 2):\t\t";
						cin>>opc;
					
						if(opc==1 || opc==2) //VALIDAR
						{
							switch(opc)
							{  
								case 1: {
										//PROCESAR: Ingresar, validar, calcular, mostrar
	  	
										}break;
							
								case 2: {
											//SALIR
								       		cout<<"Gracias..!. Vuelva pronto."<<endl;   	
										}break;
							}
						}
						else
							cout<<"\nERROR. Debe ser 1 o 2.\n";
					  	
					}break;
			
			case 2: {
						//SALIR
				       cout<<"Gracias..!. Vuelva pronto."<<endl;   	
					}break;
		}
	}
	else
		cout<<"\nERROR. Debe ser 1 o 2.\n";
	
	cout<<"\n";
	
	return 0;
}


