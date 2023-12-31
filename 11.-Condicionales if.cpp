#include<iostream>
using namespace std;
int main(){
	int num, dato=5;
	
	cin>>num;
	/*Aqui estamos usando el condicional "if-else" en donde dentro de los parentesis escribiremos que condicion
	queremos que se cumpla, si se cumple agregamos corchetes y escribimos lo que querramos que pase, si no se cumple
	ponemos un else y escribimos lo que ocurrira. Un simbolo "=" es para asignar un valor, "==" significa que estamos
	diciendo que una variable debe ser igual a otra y significa "Igualdad"*/
	if(num==dato){
		cout<<"Acertaste";
	}
	else{
		cout<<"Vueleve a intentarlo";
	}
}
/*Tambien existen otros comparadores, como lo son el de diferencia, mayor y menor, para representarlos usamos "!="
para señalar que A es diferente de B lo mismo con los demas; puede ser "<",">","<=",">="*/
