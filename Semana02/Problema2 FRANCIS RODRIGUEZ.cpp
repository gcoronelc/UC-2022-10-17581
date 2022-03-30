//AUTOR: FRANCIS RODRIGUEZ Y.

#include<iostream>
#include<math.h>
using namespace std;

int main( )
{
setlocale (LC_CTYPE,"Spanish");

int Cantidadvendida;
float Preciodelproducto;
float Importe, Impuesto,Total;


cout<<"Lectura de datos" <<endl;
cout<<"=============================" << endl;
cout <<"Precio del producto: "; cin >> Preciodelproducto;
cout <<"Cantidad vendida: "; cin >> Cantidadvendida;

Total = Preciodelproducto * Cantidadvendida;
Importe = Total / 1.18;
Impuesto = Total - Importe;

cout << endl;
cout <<"REPORTE" << endl;
cout <<"=============================" << endl;
cout <<"Importe:" << Importe << endl;
cout <<"Impuesto:" << Impuesto << endl;
cout <<"Total:" << Total << endl;

}


