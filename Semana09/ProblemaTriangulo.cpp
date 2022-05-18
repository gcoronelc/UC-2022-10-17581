#include <iostream>
using namespace std;

// FUNCIONES

// Leer un número entero

int leerEntero( string etiqueta){
	int numero;
	cout << etiqueta;
	cin  >> numero;
	return numero;
}

// Calcula el perimetro del triangulo
int perimetroTriangulo(int a, int b, int c){
	int perimetro;
	perimetro = a + b + c;
	return perimetro; // Retorna el perimetro
}

// Calcula el area del triangulo
int areaTriangulo(int a, int b, int c){
	float area = 10000;
	// Falta algo
	return area;
}


// PROCEDIMIENTOS

void mostrarReporte(int perimetro, float area){
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "====================================" << endl;
	cout << "Perimetro: " << perimetro << endl;
	cout << "Area: " << area << endl;
	cout << endl;
}


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int ladoA, ladoB, ladoC;
	float perimetro, area;
  
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "====================================" << endl;
	ladoA = leerEntero("Lado A: ");	
	ladoB = leerEntero("Lado B: ");	
	ladoC = leerEntero("Lado C: ");	
	
	// Proceso
	perimetro = perimetroTriangulo(ladoA, ladoB, ladoC);
	area = areaTriangulo(ladoA, ladoB, ladoC);
	
	// Reporte
	mostrarReporte(perimetro, area);
	
	// Fin
	system("pause");
	return 0;
}
