#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	/*Este bucle FOR nos ayuda a establecer la logica para la suma de los numeros ya que lo que hace es declarar la
	variable "I" de iterador con el valor de 1, ya que este programa debe ir sumando desde el 1 hasta que se le indique,
	despues con "i<=n" establecemos que debe detenerse la suma cuando el numero de la suma llegue hasta el numero alma-
	cenado en "n"*/
	for(int i=1; i<=n; i++){
		sum+=i;
	}
	
	cout<<"El resultado de la suma es: "<<sum;
}
/*Este programa realiza la suma de numeros empezando desde el 1 hasta el numero que se indique, si se le pone en la
entrada estandar 5, va a sumar los numeros del 1 hasta el 5 y en la salida imprimira el resultado*/
