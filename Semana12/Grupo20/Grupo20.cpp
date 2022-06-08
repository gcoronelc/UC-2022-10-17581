/*
Grupo 20: LOS AMAUTAS
- Gustavo Coronel
- JOSUE JHEMY GONZALES CCENTE
- LUIS ANGEL CONDORI RAMON
- YERAL HERRERA MENDOZA
- HEIDY MILAGROS FERNANDEZ CANO
- JHONNATAN LUIS DANIEL VILCA CONTRERAS
- JUNIOR JHORDAN CORDOVA ROSALES
- WILFREDO PAUL LAZARO CARPIO
- PIERO ARMANDO RODRIGUEZ MARTINEZ
- NICOLE BRENDA REYNAGA SIUCE
- FERNANDO ALEJANDRO CAJAHUANCA CAMPOS
- JOSUE JHEMY GONZALES CCENTE
*/
#include <iostream>
#include "LibreriaEGCC.h"
#include "Utilitarios.h"
#include "LecturaDatos.h"
#include <sstream>
using namespace std;

// Variables globales
double tipoCambio;
stringstream listado;
int contPaqDestinoA, contPaqDestinoB, contPaqDestinoC;

// Funciones y procedimiento
void procLeerTipoCambio();
void procInicializarVariables();
void procRegistrarVenta();
void procListado();
void procReporte();
void procSalir();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Leer el tipo de cambio
	mostrarCabecera();
	procLeerTipoCambio();
	procInicializarVariables();	
	// Proceso principal
	do{
		// Menu
		mostrarCabecera();
		procMostrarMenu();
		opMenu = leerOpcion(1,4);

		// Procesar opción del menú
		mostrarCabecera();
		switch(opMenu){
			case 1:
				procRegistrarVenta();
				break;
			case 2:
				procListado();
				break;
			case 3:
				procReporte();
				break;
			case 4:
				procSalir();
				break;
		}
		// Fin
		if(opMenu!=4){
			system("pause");
		}
	} while(opMenu!=4);
	// Fin
	system("pause");
	return 0;
}

// Funciones y procedimiento
void procLeerTipoCambio(){
	cout << "Lectura de tipo de cambio" << endl;
	cout << "-----------------------------------" << endl;
	tipoCambio = leeDatoDoublePositivo("Ingrese tipo de cambio: ");
}

void procRegistrarVenta(){
	// Variables
	string cliente;
	char paquete;
	int cantidad;
	double precio, porcDcto, dcto, importeTotal, importeNeto;
	// Lectura
	cout << "Lectura de datos" << endl;
	cout << "-----------------------------" << endl;
	cliente = leeDatoString("Nombre del cliente: ");
	paquete = leePaquete();
	cantidad = leeDatoEnteroPositivo("Ingrese cantidad: ");
	// Proceso
	precio = obtenerPrecio(paquete) * tipoCambio;
	porcDcto = obtenerPorcDcto(paquete);
	importeTotal = precio * cantidad;
	dcto = importeTotal * porcDcto / 100;
	importeNeto = importeTotal - dcto;
	// Prepara listado
	listado << cliente << "\t" << obtenerNombrePaquete( paquete );
	listado << "\t" << cantidad << "\t" << precio << "\t";
	listado << importeTotal << "\t" << dcto << "\t" << importeNeto << "\n";
	// Contador de paquetes por destino
	contPaqDestinoA += (paquete=='A')?cantidad:0;
	contPaqDestinoB += (paquete=='B')?cantidad:0;
	contPaqDestinoC += (paquete=='C')?cantidad:0;
	// Reporte
	cout << endl;
	cout << "Reporte de venta" << endl;
	cout << "----------------------" << endl;
	cout << "Precio: " << precio << endl;
	cout << "Importe: " << importeTotal << endl;
	cout << "Porc. descuento: " << porcDcto << "%" << endl;
	cout << "Descuento: " << dcto << endl;
	cout << "Importe neto: " << importeNeto << endl;
	cout << endl;
}

void procListado(){
	system("cls");
	cout << listado.str();
	cout << endl;
}

void procReporte(){
	mostrarCabecera();
	cout << "REPORTE ESTADISTICO" << endl;
	cout << "------------------------------------------" << endl;
	cout << "Cantidad de paquetes a PUNTA CANA: " << contPaqDestinoA << endl;
	cout << "Cantidad de paquetes a SAN ANDRES: " << contPaqDestinoB << endl;
	cout << "Cantidad de paquetes a CANCUN: " << contPaqDestinoC << endl;
	cout << endl;	
}

void procSalir(){
	cout << "Fin del programa" << endl;
	cout << "Vuelva pronto" << endl;
	cout << endl;	
}

void procInicializarVariables(){
	// Cabecera del listado
	listado << endl;
	listado << "========================" << endl;
	listado << "  EMPRESA DE TURISMO" << endl;
	listado << "  Sistema de Ventas" << endl;
	listado << "========================" << endl;
	listado << endl;
	listado << "CLIENTE\tPAQUETE\t"<<endl;
	listado << "-------------------------------------------------------------------" << endl;
	// Contador de paquetes por destino
	contPaqDestinoA = 0;
	contPaqDestinoB = 0;
	contPaqDestinoC = 0;
}

