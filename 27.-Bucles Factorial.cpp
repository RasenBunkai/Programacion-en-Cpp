#include<iostream>
using namespace std;
int main(){
	/*La variable "fact" se inicializa en 1 y no 0 porque estamos realizando una multiplicacion iterativa*/
	int num, fact=1;
	
	cin>>num;
	
	for(int i=1;i<=num; i++){
	/*Aqui se multiplica factorial por "i", por eso no se puede establecer su valor en 0 porque estariamos multiplicando
	por 0*/
		fact*=i;
	}
	
	cout<<"El factorial del numero escrito es: "<<fact;
}
/*Este programa calcula el factorial de numero que se le indique utilizando el bucle FOR*/
