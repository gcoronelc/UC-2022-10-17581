#include<iostream>
using namespace std;

int main()
{
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int op, opc;
	
	do{
		cout<<"\n\n"<<"------- MENU --------"<<endl;
		cout<<"1. Procesar."<<endl;
		cout<<"2. Salir"<<"\n";
		
		do{
			cout<<"Ingrese opcion:\t\t";
			cin>>op;
			
			if(op<1 || op>2)
				cout<<"\n"ERROR, debe 1 o 2. Vuelve a Ingresar."<<"\n\n";

		}while(op<1 || op>2);  // Es para Validar el ingreso de op
				
		switch(op)
		{  
			case 1: {	//PROCESAR: Ingresar, validar, calcular, mostrar
						do{
								cout<<"\n-------- SUB MENÚ --------\n\n";
								cout<<"1. Calcular."<<"\n";
								cout<<"2. Volver."<<"\n";
							
								do{
									cout<<"Ingrese opcion:\t\t";
									cin>>opc;
									
									if(opc<1 || opc>2)
										cout<<"\n"ERROR, debe 1 o 2. Vuelve a Ingresar."<<"\n\n";
						
								}while(opc<1 || opc>2);  // Es para Validar el ingreso de opc
								
								switch(opc)
								{  
									case 1: {	//PROCESAR: Ingresar, validar, calcular, mostrar
							
		 									}break;
									
									case 2: {	//VOLVER
										       	cout<<"Gracias..!. Regresa a Menú Principal."<<endl; 
													     	
											}break;
								}
								
						}while(opc != 2);
				  	
					}break;
					
			case 2: {	//SALIR
					    cout<<"Adios..!. Vuelva pronto."<<"\n\n";   	
					}break;
		}
		
		system("pause");
		system("cls");	// clear screen
			
	}while(op != 2);  // Es para repetir el menú (repetir el proceso)
	
	cout<<"\n";
	return 0;
}


