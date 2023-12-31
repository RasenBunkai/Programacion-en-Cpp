#include<iostream>
/*Esta libreria nos sirve para funciones y macros que se usan para realizar operaciones de utilidad general, como
la gestion de memoria, conversion de cadenas, generacion de numeros aleatorios y control del programa*/
#include<stdlib.h>
using namespace std;
int main(){
	int i=1;
	
	do{
		cout<<i<<endl;
		i++;
	}
	while(i<=10);
	
	/*Este comando detiene el programa esperando a que el usuario presione una tecla para finalizar el programa*/
	system("pause");
}
/*Este bucle funciona de la siguiente manera: en el "do" va todo lo que se va a ejecutar mientras que todo lo que 
este en el "while" se cumpla*/
