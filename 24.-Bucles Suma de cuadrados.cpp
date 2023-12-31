#include<iostream>
using namespace std;
int main(){
	int sum, cuadrado=0;
	/*El FOR recorre los numeros del 1 al 10 con la variable "i" como contador del bucle, dentro del bucle se
	calcula el cuadrado del numero actual y se almacena en "cuadrado". Despues agrega el resultado a la cantidad
	acumulada en "sum"*/
	for(int i=1; i<=10; i++){
		cuadrado=i*i;
		sum+=cuadrado;
	}
	
	cout<<sum;
}
/*Este programa utilizando el bucle FOR calcula la suma de los cuadrados de los numeros del 1 al 10 e imprime el
resultado.*/
