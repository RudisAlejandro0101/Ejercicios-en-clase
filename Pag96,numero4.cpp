/*Cree un programa que devuelva el promedio de x cantidad de numeros
el programa debe finalizar cuando el usauario escriba 0*/
#include<iostream>
using namespace std;
	int main(){
		int contador=0;
		int resultado;
		float promedio;
		float acumulador;
		float num;
		while(num==0 ){
			cout <<"Ingrese un primer numero: "<<endl; 
			cin>>num;
			cout <<"Ingrese un segundo numero: "<<endl;
			cin>>num;
			cout <<"Ingrese un tercer numero: "<<endl; 
			cin>>num;
			cout <<"Ingrese un cuarto numero: "<<endl;
			cin>>num; 
			acumulador = acumulador + num;
			contador++;
			cin >>num;
			cout <<"Tu promedio es: \n";
	}
	return 0;
}
