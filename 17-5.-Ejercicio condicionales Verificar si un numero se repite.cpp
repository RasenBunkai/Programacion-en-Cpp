#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,n4;
	
	cin>>n1>>n2>>n3>>n4;
	
	if(n4==n1 || n4==n2 || n4==n3){
		cout<<"El numero "<<n4<<" ya fue escrito";
	}
	else if(n4!=n1 && n4!=n2 && n4!=n3){
		cout<<"No se repitio ningun numero";
	}
}
/*Este programa analiza si alguno de los primeros 3 numeros coinciden con el cuarto numero ingresado, si es asi el
programa imprimira un mensaje de repeticion, para hacer este programa use compuertas logicas, AND (&&) y OR (||),
tambien se uso el "!=" que significa "Diferente a"*/
