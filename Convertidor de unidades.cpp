#include<iostream>
using namespace std;
	int main(){
	int opcion;
	cout <<"Seleccione la conversion que desea realizar: \n";
	cout <<"1. Gb a Mb";
	cout <<"2. Mb a Kb";
	cout <<"3. Kb a Byte";
	cout <<"4. Salir";
	cin >> opcion;
	switch(opcion){
		case 1:
			int gb, producto1;
			cout <<"Haz seleccionado Gb a Mb, ingrese los Gb: \n";
			cin>>gb;
			producto1 = gb *1024;
			cout << "El resultado en Mb es: "<<producto1<< "Mb: \n";
			break;
		default:
			cout <<"Valor Invalido\n";
			break;
	}
	return 0;
}
