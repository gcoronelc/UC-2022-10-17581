#include<iostream>
using namespace std;

int leeDatoEntero()
{
	int dato;
	cin>>dato;
	return dato;	
}

void procIntercambio()
{
	int num1, num2, temp;
	
	cout<<"Ingrese valor de num1: ";
	num1 = leeDatoEntero();
	
	cout<<"Ingrese valor de num2: ";
	num2 = leeDatoEntero();
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout<<"\n";
	cout<<"El nuevo valor num1 es: " << num1 <<endl;
	cout<<"El nuevo valor num2 es: " << num2 <<endl;
	
}

int main()
{
	procIntercambio();	
	return 0;
}



