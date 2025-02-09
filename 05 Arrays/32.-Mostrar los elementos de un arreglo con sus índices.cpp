#include <iostream>
#include <conio.h>
using namespace std;

int main (){

int vector [100], v;
//La variable "V" almacenara la cantidad de elementos que tendra el vector y se llama asi por el "Vector"
cin>>v;

for (int i=0;i<v;i++){
	cin>>vector[i]; // Aqui se guardaron todos los elementos del vector
	}
	
//Aqui se mostraran los elementos del vector con sus respectivos indices

for(int i=0; i<v;i++){
	cout<<i<<" -> "<<vector[i];
}

}
/*
Aca, implementamos un vector en donde el usuario define cuantos elementos quiere que tenga el vector, esa cantidad se almacena
en la variable "V", despues, mediante un for guardamos los elementos del vector, si el usuario quiere 2 elementos en el vector
entonces el for solo guardara 2 elementos. Por ultimo, usando otro for imprimimos el espacio que ocupa el valor insertado
en el vector, seguido del valor en si.*/
