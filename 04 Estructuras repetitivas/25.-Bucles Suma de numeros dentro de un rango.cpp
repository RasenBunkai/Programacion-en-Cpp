#include<iostream>
using namespace std;
int main(){
	/*La variable num es para almacenar lo que el usuario escriba y suma es para almacenar la suma de todos los numeros
	escritos*/
	int num, suma=0;
	/*El bucle DO-WHILE nos va a ayudar para definir el rango que es menor a 20 y mayor a 30 y debe ser diferente a 0
	esto para detener el programa*/
	do{
		cin>>num;
		/*EL bucle IF nos servira para realizar la suma de los numeros introducidos, siempre y cuando numero sea mayor
		a 0*/
		if(num>0){
			suma+=num;
		}
	}
	while((num<20)||(num>30)&&(num!=0));
	
	cout<<suma;
	
}
/*Este programa lee los numeros introducidos y se detiene cuando un numero entre el 20 y 30 o 0 se introduzca, para eso
nos apoyamos del bucle DO-WHILE y el condicional IF*/
