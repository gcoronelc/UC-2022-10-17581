#include <iostream>
using namespace std;

char leerSexoTrabajador(){
	char dato;
	do{
		cout << "Sexo (M/F): "; cin >> dato;
		if(isdigit(dato)){
			cout << "Error, se requiere un caracter, no un número." << endl;
			continue;
		}
		dato = toupper(dato);
		if(dato != 'M' && dato != 'F'){
			cout << "Error, dato incorrecto." << endl;
		}
	}while(dato != 'M' && dato != 'F');
	return dato;
}

char leerEdad(){
	string dato;
	int edad;
	do{
		cout << "Edad: "; cin >> dato;
		if(isalpha(dato[0])){
			cout << "Error, se requiere un número, no un caracter." << endl;
			continue;
		}
		edad = stoi(dato);
		if(edad <= 0){
			cout << "Error, dato incorrecto." << endl;
		}
	}while(edad <= 0);
	return edad;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	char sexo;
	int edad;
	
	// Lectura de datos
	sexo = leerSexoTrabajador();
	edad = leerEdad();
	
	// Proceso
	
	
	// Reporte
	cout << "Sexo: " << sexo << endl;
	cout << "Edad: " << edad << endl;
	
	// Fin
	system("pause");
	return 0;
}
