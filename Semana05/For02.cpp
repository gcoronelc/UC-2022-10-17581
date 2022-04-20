#include<iostream>
using namespace std;
int main(){
	
	int n=1;
	
	for(;n<=10;n++){
		cout << n << ".- Alianza campeon" << endl;
		if(n==5){
			break; // Sale del bucle
		}
	}
	
	return 0;
}
