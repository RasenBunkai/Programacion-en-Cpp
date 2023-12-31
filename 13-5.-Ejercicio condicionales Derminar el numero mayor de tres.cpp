#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	
	cin>>n1>>n2>>n3;
	
	if(n1>n2 && n1>n3){
		cout<<"El numero "<<n1<<" es el mayor";
	}
	else if (n2>n1 && n2>n3){
		cout<<"El numero "<<n2<<" es el mayor";
	}
	else{
		cout<<"El numero "<<n3<<" es el mayor";
	}
}
/*El "else if" nos ayuda como un "switch-break" el cual el "else" es una funcion de bloque que manda a llamar a otro
"if". El simbolo "&&" es para la compuerta logica "AND" el cual nos dice que si n1 es mayor a n2 "AND" n3 se ejecute
una seccion del codigo*/
