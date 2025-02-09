#include<iostream>
/*Esta es una libreria que nos ayuda a interactuar con la consola y manejar la entrada/salida facilmente*/
#include<conio.h>
using namespace std;
int main(){
	int i=1;
	
	while(i<=10){
		cout<<i<<endl;
		i++;
	}
	getch();
	/*Esta funcion impedira que el programa se cierre hasta que detecte la activacion de una tecla*/
}
/*Este es un programa que utiliza el bucle "while", el cual nos indica que mientras una condicion se cumpla, el ciclo
se ejecutara. Para indicar la condicion que debe cumplirse se debe escribir entre parentesis y dentro de los corchetes
poner que ocurrira cuando esta condicion se cumpla.
En este caso es un bucle que imprimira los numeros del 1 al 10 para eso usamos el "i++" en donde "i" es el nombre de
la variable y el "++" es un operador de incremento, el cual nos dice que una vez se imprima un dato este aumentara**/
