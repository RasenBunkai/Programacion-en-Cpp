#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int vector[10],v,Nmayor=0;
	cout<<"Escribe la cantidad de elementos que quieres que tenga el arreglo: ";
	cin>>v;
	//Aca definimos el vector y la variable "V" que nos va a guardar 
	for (int i=0; i<v; i++){
		cout<<i+1<<". Escribe un numero: ";
		cin>>vector[i];
		//Este for es para almacenar los numeros en el vector
		
		//Este if nos va a ayudar a comparar los numeros insertados en el vector
		if(vector[i]>Nmayor){
			Nmayor=vector[i];
		}
	}
	cout<<"\nEl numero mas grande dentro del vector es: "<<Nmayor<<endl;
}
/*
Este programa define un arreglo en donde compara los elementos dentro de este y muestra por salida la cantidad mas grande
*/
