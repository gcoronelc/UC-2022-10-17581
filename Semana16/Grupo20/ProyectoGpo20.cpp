/*
**EQUIPO:
**   - Gustavo Coronel
**   - CHELSI CAROLINA HUARCAYA CENTENO
**   - MANYORI IPARRAGUIRRE RAMOS
**   - JUAN JOSE GONZALES DEL VALLE PEVES
**   - EDUARDO ÑAUPA YAPURA
**   - MIDWAR ERICK ESCOBAR QUISPE
*/

#include <iostream>
//#include "ToolBox.h"
#include "utilitario.h"
using namespace std;

int main(){
	
	// Variables del programa
	int op;
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Proceso principal
	do{
		// El menú
		mostrarMenu();
		op = LeerOpcion(1,3);
		// Procesar opcion del menú
		system("cls");
		switch(op){
			case 1:
				procesarVenta();
				break;
			case 2:
				reporteVentas();
				break;
			case 3:
				finPrograma();
				break;
		}
		
		// La pausa
		if(op!=3){
			system("pause");
		}
	} while(op!=3);
	
	// Fin
	return 0;
}
