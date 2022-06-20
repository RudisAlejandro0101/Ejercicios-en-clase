/*Elaborar un programa que me permita 
ingresar un numero, del 1 al 12 y elija
una festividad del mes*/
#include<iostream>
using namespace std;
int main(){
	int opcion ;
	cout <<"seleccione el mes que desea ver la festividad: \n";
	cout <<"1. Enero \n 2. Febrero\n 3. Marzo \n 4. Abril \n 5. Mayo \n 6. Junio \n 7. Julio \n 8. Agosto \n 9. Septiembre \n 10. Octubre \n 11. Noviembre \n 12. Diciembre \n";
	cin >> opcion;
	switch(opcion)
	{
		case 1:
		cout <<"Seleccionaste el mes ENERO, se celebra mi cumpleaños \n"; 
		break;
		case 2:
		cout <<"Seleccionaste el dia FEBRERO, la festividad es el dia del amor y la amistad \n";
		break;
		case 3:
		cout <<"Seleccionaste el dia MARZO, dia del padre \n"; 
		break;
		case 4:
		cout <<"Seleccionaste el dia ABRIL, dia de la tierra  \n"; 
		break;
		case 5:
		cout <<"Seleccionaste el dia MAYO, dia de la madre \n"; 
		break;
		case 6:
		cout <<"Seleccionaste el dia JUNIO, dia del estudiante  \n";
		break;
		case 7:
		cout <<"Seleccionaste el dia JULIO, dia de los abuelos \n";
		break;
		case 8:
		cout <<"Seleccionaste el dia AGOSTO, dia internacional de la juventud. \n";
		break;
		case 9:
		cout <<"Seleccionaste el dia SEPTIEMBRE; dia del niño \n";
		break;
		case 10:
		cout <<"Seleccionaste el dia OCTUBRE, dia del soldado  \n";
		break;
		case 11:
		cout <<"Seleccionaste el dia NOVIEMBRE, Dia de Todos los Santos \n";
		break;
		case 12:
		cout <<"Seleccionaste el dia DICIEMBRE, Navidad \n";
		break;
		default:
		cout <<"Numero Invalido\n";
		break;
	}
return 0;
} 
