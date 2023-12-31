#include<iostream>
using namespace std;
int main(){
	int edad;
	
	cin>>edad;
	/*Aqui estamos determinando mediante un bucle si un registro esta dentro de un rango utilizando la compuerta AND*/
	if((edad>=18)&&edad>=25){
		cout<<"Tu edad es "<<edad<<", estas dentro del rango;
	}
	else{
		cout<<"Tu edad se salio del rango";
	}
}
