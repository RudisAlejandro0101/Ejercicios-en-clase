#include<iostream>
using namespace std;
main(){
    int edad;
    cout<<"ingrese su edad: \n";
	cin>>edad;
    if(edad>=18){
        cout<<"Usted es mayor de edad";
    }
    else if(edad<18){
        cout<<"Usted es menor de edad ";
    }
}
