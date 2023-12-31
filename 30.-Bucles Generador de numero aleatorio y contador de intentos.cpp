#include<iostream>
/*Estas dos librerias nos van a serivir para generar numeros aleatorios*/
#include<stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int num,dato,contador=0;
	/*Esta linea nos servira para generar un numero aleatorio, SRAND es para establecer los numeros, TIME NULL es
	una funcion que devuelve el tiempo actual del sistema en segundos por lo que cada vez que se ejecuta esta linea
	se genera un numero pseudo-aleatorio nuevo*/
	srand(time(NULL));
	/*Aqui el numero aleatorio se almacena en dato que vale 1 + rand que nos devuelve un numero pseudo-aleatorio*/
	dato=1 + rand()%(100);
	
	do{
		cout<<"Escribe un numero: ";
		cin>>num;
		/*Este DO-WHILE nos va a ayudar para con la condicional IF a que si un numero ingresado por el usuario es
		mayor o menor al numero generado por el programa nos imprima un mensaje y este bucle seguira mientras estos
		dos numeros sean diferentes.*/
		if(num>dato){
			cout<<"El numero escrito es muy grande,vuelve a intentarlo."<<endl;
		}
		if(num<dato){
			cout<<"El numero escrito es muy chico,vuelve a intenarlo."<<endl;
		}
		/*Este contador va a ir aumentando por cada intento que se realice*/
		contador ++;
	}while(num!=dato);
	
	cout<<"FELICIDADES, ADIVINASTE EL NUMERO"<<endl;
	cout<<"Te tomo "<<contador<<" intentos";
}
/*Este programa genera un numero aleatorio entre el 1 y 100 usando el bucle DO-WHILE y el condicional IF, el
usuario debe adivinar que numero es, al final cuando lo adivine se imprimira en pantalla cuantos intentos le tomo.*/
