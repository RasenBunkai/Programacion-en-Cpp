#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x,y,resultado=0;
	
	cin>>x>>y;
/*Aqui el "sqrt" es para sacar raiz cuadrada, para eso debemos poner entre parentesis el numero o variable al 
que queremos sacar raiz cuadrada. La expresion "POW" nos sirve para elevar expresiones, par eso debemos poner entre
parentesis que variable queremos elevar y seguido de una coma a que potencia lo queremos elevar. Todo esto usando la
libreria "math"*/
	resultado= (sqrt(x))/(pow(y,2)-1);
	
	cout<<endl<<resultado;
}
