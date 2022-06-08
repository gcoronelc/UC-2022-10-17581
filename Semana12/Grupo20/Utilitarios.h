#include<iostream>
using namespace std;

void mostrarCabecera(){
	system("cls");
	cout << endl;
	cout << "========================" << endl;
	cout << "  EMPRESA DE TURISMO" << endl;
	cout << "  Sistema de Ventas" << endl;
	cout << "========================" << endl;
	cout << endl;
}

void procMostrarMenu(){
	cout << "Menú de opciones" << endl;
	cout << "------------------------" << endl;
	cout << "1.- Venta" << endl;
	cout << "2.- Listado" << endl;
	cout << "3.- Reporte" << endl;
	cout << "4.- Salir" << endl;
	cout << "------------------------" << endl;	
	cout << endl;	
}


char leePaquete(){
	char paquete;
	cout << "Paquetes disponibles:" << endl;
	cout << "  A.- PUNTA CANA" << endl;
	cout << "  B.- SAN ANDRES" << endl;
	cout << "  C.- cancun" << endl;
	do{
		cout << "Opción? "; cin >> paquete;
		paquete = toupper(paquete);
		if(paquete!='A' && paquete!='B' && paquete!='C'){
			cout << "ERROR: opción incorrecta." << endl;
		}
	}while(paquete!='A' && paquete!='B' && paquete!='C');
	return paquete;
}


double obtenerPrecio(char paquete){
	double precio = 0.0;
	precio = (paquete=='A')?780:precio;
	precio = (paquete=='B')?1350:precio;
	precio = (paquete=='C')?2550:precio;
	return precio;
}

double obtenerPorcDcto(char paquete){
	double porcDcto = 0.0;
	porcDcto = (paquete=='A')?3.5:porcDcto;
	porcDcto = (paquete=='B')?4.0:porcDcto;
	porcDcto = (paquete=='C')?4.5:porcDcto;
	return porcDcto;
}


string obtenerNombrePaquete(char paquete){
	string nombrePaquete = "";
	nombrePaquete = (paquete=='A')?"Punta Cana":nombrePaquete;
	nombrePaquete = (paquete=='B')?"San Andres":nombrePaquete;
	nombrePaquete = (paquete=='C')?"Cancun    ":nombrePaquete;
	return nombrePaquete;
}

