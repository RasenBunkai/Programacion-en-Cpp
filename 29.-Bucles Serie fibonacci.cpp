#include<iostream>
using namespace std;
int main(){
	int num; 
	long long x=0, y=1, z=1;
	
	cout<<"Escribe cuantos numeros quieres sumar usando el metodo fibonacci: ";
	cin>>num;
	
	for(int i=1; i<=num; i++){
	/*Lo que el programa esta haciendo aqui es sumar X + Y, almacenarlo en Z e imprimirlo*/
		z=x+y;
		cout<<z<<" ";
		
		/*Ahora X que valia 0, adquiere el valor de Y*/
		x=y;
		/*Y ahora tiene el valor de Z*/
		y=z;
	}
	cout<<endl;	
}
/*Este programa utiliza la serie fibonacci para sumar la cantidad de numeros establecidos por el usuario, para
realizarlo utilizamos el bucle FOR. Esta serie lo que hace es sumar de forma iterativa empezando desde el 1+1=2
despues 2+1=3, 3+2=5, 5+3=8, etc.
Se deicidio utilizar el tipo "LONG LONG" para los valores X, Y y Z ya que despues de cierta cantidad de numeros
solicitados empieza a imprimir numeros negativos debido a un desbordamiento aritmetico y para evitarlo estas
variables no forman parte de INT.*/
