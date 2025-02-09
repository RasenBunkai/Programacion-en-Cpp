#include<iostream>
using namespace std;
int main(){
	int num, num0=1;
	do{
		cin>>num;
		
			if(num>0){
				num0++;
			}
	}
	while(num!=0);
	
	cout<<"Los numeros registrados son "<<num0<<endl;
}
/*Para este programa se declaran dos variables, la primera nos va a servir para determinar cuantos numero se ingresan
y la segunda nos servira de contador, usando los bucles DO-WHILE e IF.
EL programa va a almacenar datos, siempre que el numero ingresado sea menor a 0, si es asi el contador en "num0"
aumenta. Todo esto se ejecutara si "num" es diferente de 0, si se ingresa 0 se imprimira en pantalla la cantidad de
numeros ingresados antes de llegar a 0*/
