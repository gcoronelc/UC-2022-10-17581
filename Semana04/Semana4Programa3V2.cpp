/*
 * APLICACIÓN DE MENU Y ESTRUCTURAS ANIDADAS
 * Calcular el monto total de una venta.
 * Se aplica un bono en función al genero de la persona.
 * También se aplica un descuento en función del genero y la cantidad.
*/

#include<iostream>
#include <sstream>

using namespace std;

int main()
{ 	
	// Configurar
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op, cantidad, precio, datosValidos;
	float porcBono, porcDcto, montoBruto, montoBono, montoDcto, montoTotal;
	string cliente;
	char genero;
	stringstream errores;
	
	// Lectura opción del menú
	cout << "MENÚ DE OPCIOPNES" << endl;
	cout << "================================" << endl;
	cout << "1. Procesar." << endl;
	cout << "2. Salir." << endl << endl;
	cout<<"Ingrese opción (1 o 2): "; cin>>op;
	
	// Validar opción del menú
	if(op<1 || op>2){
		cout << endl;
		cout << "ERROR: debe ingresar 1 o 2." << endl;
		return 0;
	}
	
	// Procesar opción del menú
	switch(op)
	{  
		case 1: 
			// Lectura de datos
			cout << endl;
			cout << "Lectura de datos" << endl;
			cout << "===============================" << endl;
			cout << "Nombre Cliente: "; cin >> cliente;
			cout << "Cantidad: "; cin >> cantidad;
			cout << "Precio: "; cin >> precio;
			cout << "Genero (M/F): "; cin >> genero;
			// Validar datos
			datosValidos = 1; // Datos correctos
			if(cantidad<=0){
				datosValidos = -1; // Existe error en los datos
				errores << "La cantidad debe ser mayor a 0." << endl;
			}
			if(precio<=0){
				datosValidos = -1;
				errores << "El precio debe ser mayor a 0." << endl;
			}
			genero = toupper(genero);
			if(genero!='M' && genero!='F'){
				datosValidos = -1;
				errores << "Genero es incorrecto, debe ser M o F." << endl;
			}
			if(datosValidos==-1){
				cout << endl;
				cout << "ERRORES" << endl;
				cout << "========================================" << endl;
				cout << errores.str() << endl;
				return 0;
			}
			// Proceso
			switch(genero)
			{
				case 'F':
					porcBono = 0.2;
					porcDcto = (cantidad<=10)?0.30:0.40;
				 	break;
				case 'M':
					porcBono = 0.18;
					porcDcto = (cantidad<=10)?0.20:0.50;
					break;
			}		
			montoBruto = cantidad * precio;               
			montoBono = montoBruto * porcBono;
			montoDcto = montoBruto * porcDcto;
			montoTotal = montoBruto - montoBono - montoDcto;
			// Reporte
			cout << endl;
			cout << "REPORTE" << endl;
			cout << "=======================================" << endl;
			cout<<"El monto bruto es: "<< montoBruto <<endl;
			cout<<"El monto de bono es: "<< montoBono <<endl;
			cout<<"El monto de descuento es: "<< montoDcto <<endl;
			cout<<"El monto total es: "<< montoTotal <<endl;
			break;
			
		case 2:
			// Salir
			cout << endl;
			cout << "Fin del programa" << endl;
			cout << "=========================================" << endl;
      	cout<<"Gracias..!. Vuelva pronto."<<endl;   	
			break;
	}
	cout << endl;
	return 0;
}

