#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int numeros[20],*posnumeros;
	
	for(int i=0;i<20;i++){
		
		cout<<"Ingrese un numero";cin >>numeros[i];
	}
	
	posnumeros=numeros;
	
	cout<<"Lista de numeros ordenada"<<endl;
	for(int i=0;i<20;i++){
		
		
			cout<<*posnumeros<<endl;
		posnumeros++;
	        
		} 
	
	
	
	
	
	
	
	getch();
	return 0;
	
}
