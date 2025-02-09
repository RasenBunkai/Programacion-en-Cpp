#include<iostream>
using namespace std;
int main(){
	/*Toda esta parte del codigo sirve para declarar las variables, en el caso de las variables que se usaran para
	los operadores se inicializan en 0 para evitar que tengan datos basura*/
	int num1, num2,sum=0, resta=0,mult=0, div=0;
	cin>>num1;
	cin>>num2;
	/*Aqui se estan realizando las operaciones, dandole a las variables el resultado de las operaciones*/
	sum=num1+num2;
	resta=num1-num2;
	mult=num1*num2;
	div=num1/num2;
	
	cout<<"El resultado de la suma es: "<<sum<<endl;
	cout<<"El resultado de la resta es: "<<resta<<endl;
	cout<<"El resultado de la multiplicacion es: "<<mult<<endl;
	cout<<"El resultado de la division es: "<<div;
		
}
