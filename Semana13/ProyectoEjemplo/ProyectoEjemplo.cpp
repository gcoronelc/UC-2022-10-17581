#include <iostream>
#include <sstream>
using namespace std;

// Lectura del curso
int leerCurso(){
	int curso;
	cout << "CURSO" << endl;
	cout << "----------------------------------------" << endl;
	cout << "1.- Desarrollo Web con PHP" << endl;
	cout << "2.- Desarrollo Web con Java" << endl;
	cout << "3.- Desarrollo Web con Spring Framework" << endl;
	cout << "4.- Desarrollo Web con Angular y REST" << endl << endl;
	do{	
		cout << "Curso: "; cin >> curso;
		if(curso < 1 || curso > 4){
			cout << "Ingreso incorrecto." << endl;
		}
	} while(curso < 1 || curso > 4);
	return curso;
} // leerCurso


// Lectura nivel del curso
int leerNivel(){
	int nivel;
	cout << endl;
	cout << "NIVEL DEL CURSO" << endl;
	cout << "----------------------------------------" << endl;
	cout << "1.- Basico" << endl;
	cout << "2.- Intermedio" << endl;
	cout << "3.- Avanzado" << endl << endl;
	do{	
		cout << "Nivel: "; cin >> nivel;
		if(nivel < 1 || nivel > 3){
			cout << "Ingreso incorrecto." << endl;
		}
	} while(nivel < 1 || nivel > 3);
	return nivel;
} // leerNivel


// Leer cantidad de alumnos
int leerCantAlumnos(){
	int alumnos;
	cout << endl;
	do{
		cout << "Cantidad de alumnos: ";
		cin  >> alumnos;
		if(alumnos <= 0){
			cout << "Ingreso incorrecto." << endl;
		}
	} while (alumnos <= 0);
	return alumnos;
}

// Obtener duracion
int obtenerDuracion(int nivel){
	int duracion = 0;
	switch(nivel){
		case 1:
			duracion = 24;
			break;
		case 2:
			duracion = 30;
			break;
		case 3:
			duracion = 40;
			break;			
	}
	return duracion;
}

// Obtener costo
double obtenerCosto(int nivel){
	double costo = 0.0;
	switch(nivel){
		case 1:
			costo = 500.0;
			break;
		case 2:
			costo = 700.0;
			break;
		case 3:
			costo = 900;
			break;			
	}
	return costo;
} // obtenerCosto

// Obtener costo
double obtenerPagoHora(int nivel){
	double pagoHora = 0.0;
	switch(nivel){
		case 1:
			pagoHora = 60.0;
			break;
		case 2:
			pagoHora = 80.0;
			break;
		case 3:
			pagoHora = 100;
			break;			
	}
	return pagoHora;
} // obtenerPagoHora

// Modulo principal
int main(){
	// Variables
	int curso, nivel, cantAlumnos, duracion;
	double costo, pagoHora, ingresoBruto, utilidad;
	double gastoPublicidad, gastoLogistica;
	double gastoMaterial, pagoProfesor, gastosTotales;
	// Entrada
	curso = leerCurso();
	nivel = leerNivel();
	cantAlumnos = leerCantAlumnos();
	// Proceso
	duracion = obtenerDuracion( nivel );
	costo    = obtenerCosto( nivel );
	pagoHora = obtenerPagoHora(nivel);
	ingresoBruto = costo * cantAlumnos;
	gastoPublicidad = ingresoBruto * 0.07;
	gastoLogistica = ingresoBruto * 0.08;
	gastoMaterial = ingresoBruto * 0.06;
	pagoProfesor = pagoHora * duracion;
	gastosTotales = gastoPublicidad + gastoLogistica + gastoMaterial + pagoProfesor; 
	utilidad = ingresoBruto - gastosTotales;
	// Reporte
	cout << "\nREPORTE\n";
	cout << "Curso: " << curso << endl;
	cout << "Nivel: " << nivel << endl;
	cout << "Alumnos: " << cantAlumnos << endl;
	cout << "Duracion: " << duracion << endl;
	cout << "Costo del curso: " << costo << endl;
	cout << "Pago x hora: " << pagoHora << endl;
	cout << "Ingreso bruto: " << ingresoBruto << endl;
	cout << "Gasto publicidad: " << gastoPublicidad << endl;
	cout << "Gasto logistica: " << gastoLogistica << endl;
	cout << "Gasto material: " << gastoMaterial << endl;
	cout << "Pago del profesor: " << pagoProfesor << endl;
	cout << "Gastos totales: " << gastosTotales << endl;
	cout << "Utilidad: " << utilidad << endl;
	return 0;	
}
