#include<iostream>
using namespace std;
int main(){
	int n1;
	
	cin>>n1;
	/*Aca el simbolo "%" se llama "Modulo" y nos ayuda a devolver el residuo de una division por el numero que
	indiquemos en este caso, 2 y si este residuo es igual a 0 entonces sabremos que ese numero es par, de lo contrario
	sera impar*/
	if(n1==0){
		cout<<"Escribiste 0";
	}
	else if(n1%2==0){
		cout<<"Escribiste un numero par";
	}
	else{
		cout<<"Escribiste un numero impar";
	}
}
