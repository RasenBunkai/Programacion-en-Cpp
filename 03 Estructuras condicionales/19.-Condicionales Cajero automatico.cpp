#include<iostream>
using namespace std;
int main(){
	int saldoI=1000, opc;
	float dineroIngresado, saldo=0,dineroRetirado;
	
	cout<<"1.-Ingresar saldo"<<endl;
	cout<<"2.-Retirar saldo"<<endl;
	cout<<"3.-Salir"<<endl;
	cout<<": ";
	cin>>opc;
	
	switch(opc){
		case 1:cout<<"Cuanto dinero deseas agregar: ";
			cin>>dineroIngresado;
			saldo=saldoI+dineroIngresado;
			cout<<"Tu nuevo saldo es "<<saldo;
			break;
		
		case 2:cout<<"Escribe cuanto deseas retirar: ";
			cin>>dineroRetirado;
			if(dineroRetirado>saldoI){
				cout<<"Saldo insuficiente!!";
			}
			else{
				saldo=saldoI-dineroRetirado;
				cout<<"Tu nuevo saldo es "<<saldo;
			}
		case 3:break;
	}
}
