/*cree un programa que muestre todos los 
sueldos dentro del ARRAY y la suma de esto.
en este ejemplo creara un array que tiene 
los siguientes sueldos {5000, 6000, 7890, 
15000, 16780, 10000, 9000*/

#include<iostream>
using namespace std;
	int main(){
	int vSueldo [] = {5000, 6000, 7890, 15000, 16780, 10000, 9000};
	int vSuma = 0;
	cout <<"**************Mostrar los Sueldos***************"<<endl;
	for(int i =0; i < 7;i++){
		//mostrar el valor que tenga la posicion 1 en vSueldo
		cout << vSueldo [i] <<endl;
		/*increentar el valor de vSuma de la pocision i en vSueldo*/
		vSuma = vSuma + vSueldo [i]; 
	}
	cout <<"\n**************Suma de Sueldos***************"<<endl;
	cout <<"La suma de los sueldos es: "<<vSuma<<endl;
	return 0;
}
