#include<iostream>
/*Para realizar este ejercicio recurriremos a la libreria math por la funcion "POW" que es para las potencias*/
#include<math.h>
using namespace std;
int main(){
	int suma=0, elevacion=0, num;
	
	cin>>num;
	
	for(int i=1; i<=num; i++){
		/*El numero 2 es el numero a elevar y la variable "i" es la potencia a la que se va a elevar y como es una
		elevacion iterativa el 2 seguira aumentando hasta el numero almacenado en "i"*/
		elevacion =pow(2,i);
		suma+=elevacion;
	}
	cout<<suma;
}
/*Lo que hace este programa es sumar el resultado de la elevacion de los numeros que se le indiquen utilizando el bucle
FOR; por ejemplo, si se le pide que sume 4 numeros lo que el programa hara es sumar 2^1=2 + 2^2=4 + 2^3=8 + 2^4=16 =30
lo que esta sumando es el resultado de las potencias 2+4+8+16*/
