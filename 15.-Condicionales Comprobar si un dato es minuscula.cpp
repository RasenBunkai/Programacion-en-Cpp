#include<iostream>
using namespace std;
int main(){
	char letra;
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"Es una vocal minuscula";break;
		default:cout<<"No es una vocal minuscula";break;	
	}
}
/*Aqui a diferencia del otro ejercicio podemos poner un break en el ultimo case porque hay un cout que indica una
accion, por lo tanto podemos dejar los demas case sin break*/
