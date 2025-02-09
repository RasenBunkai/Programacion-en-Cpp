#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Escribe un numero entre el 1 y 3: ";
	cin>>num;
	
	switch(num){
		case 1:cout<<"Escribiste el "<<num<<endl;
			break;
		case 2:cout<<"Escribiste el "<<num<<endl;
			break;
		case 3:cout<<"Escribiste el "<<num;
			break;
	default:cout<<"Te saliste del rango";
			break;
	}
	/*Una vez se almacena el dato en la variable, el switch evalua los casos disponibles comprobando que casos son
	los que se cumplen, en caso de ser asi el "Break" nos ayuda a salir del bucle del switch y evita que los demas
	casos se ejecuten*/
}
