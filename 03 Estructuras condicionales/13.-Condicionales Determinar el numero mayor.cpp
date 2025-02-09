#include<iostream>
using namespace std;
int main(){
	int n1, n2;
	
	cin>>n1>>n2;
	//Comprobamos que ambos numeros ingresados son iguales
	if(n1==n2){
		cout<<"Ambos numero son iguales";
	}
	//Si no son iguales se ejecuta el else que dentro tiene otro if-else que determina si uno es mayor que otro
	else{
	
	 	if (n1 > n2) {
	        cout << "El numero " << n1 << " es mayor que el numero " << n2;
	    }
			else {
	        	cout << "El numero " << n1 << " es menor que el numero " << n2;
	    	}
	}
}
/*Al momento de ejecutar los "if-else" es posible agregar uno dentro de otro*/
