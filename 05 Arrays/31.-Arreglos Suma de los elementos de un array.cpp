#include<iostream>
using namespace std;
int main(){
	int array[5]={4,2,1,5,6};
	
	int suma=0;
	
	for(int i=0; i<5; i++){
		suma+=array[i];
	}
	cout<<"La suma de los elementos del arreglo es: "<<suma;
}
/*Este programa nos introduce a los arreglos. Los arreglos almacenan un solo tipo de dato de manera ordenada, para
obtener la informacion obtenida en un arreglo se debe hacer mediante la posicion que ocupa dentro del mismo arreglo.
Para esto se debe tomar en cuenta que los posicionamientos de un arreglo son desde el 0 hasta "n-1", osea si se desea
almacenar 5 elementos, los elementos estarian ordenados desde el 0 hasta el 4.
Para definir un Array se debe establecer que tipo de dato se desea almacenar, el nombre del array y  dentro de "[]"
se va a declarar la cantidad de elementos que queremos que se almacenen en el arreglo, por ultimo y de forma opcional
dentro de "{}" se pueden introducir los elementos que queremos en el arreglo. Si se declaran los elementos, se puede
omitir la cantidad de elementos que habra.
El bucle FOR nos esta ayudando a hacer el recorrido dentro del arreglo donde "i=0" porque los arreglos empiezan a
almacenar desde la posicion 0, "i<5" esta es la cantidad de elementos dentro del array. Este bucle nos sirve como
indice.*/
