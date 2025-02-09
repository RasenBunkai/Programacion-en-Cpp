#include<iostream>
using namespace std;
int main(){
	int num;
	
	do{
		
		cout<<"Escribe un numero entre el 1 y 10: ";
		cin>>num;
	}
	while((num<1)||(num>10));
	
	for(int i=1; i<=20;i++){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
}
/*Este programa saca la tabla de multiplicar desde el 1 hasta el 20 de un numero dentro del rango del 1 al 10, para
eso se utilizaron dos bucles, el "DO-WHILE" y "FOR". El DO-WHILE se utilizo para imprimir en pantalla un mensaje de
solicitud del numero y en el FOR se trabajo la logica, donde se declara la variable y se le da el valor "1", despues
i debe ser menor a 20 y nuestra variable i, ira en aumento de uno en uno hasta ese numero.
Despues en el cout se imprimira el resultado.*/
