#include<iostream>
using namespace std;
	int main(){
	int Vnota [4];
	int contador = 0;
	
	do{
	
		cout <<"Ingrese la nota" <<contador + 1<<": \n";
		cin >>Vnota[contador];
		contador +=1;
		
	}
	while (contador <4);
	cout <<"\nLa nota del segundo parcial es : "<<Vnota[1];
	return 0;
}
