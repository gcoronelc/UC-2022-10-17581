//Cisneros Mayra Fernanda


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

// Configuracion
setlocale(LC_CTYPE,"Spanish");

int n ;
string dato;

srand(time(NULL));
n = rand()%5+1;//Genera numeros entre 1 y 5 inclusive      
     


switch(n){
case 1:
dato = "Bienvenidos.";
break;
case 2:
dato = "Como estan.";
break;
default:
dato = "Opción incorrecta.";
break;
}

cout << "N: " << n << endl;
cout << "Dato: " << dato << endl;
cout << endl;

// Fin
system("pause");
return 0;
}

