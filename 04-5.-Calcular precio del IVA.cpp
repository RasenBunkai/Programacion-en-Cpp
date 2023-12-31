#include<iostream>
using namespace std;
int main(){
	float precio=0, totalIVA=0, totalSIVA;
	cin>>precio;
	//Para calcular el precio del IVA se debe ingresar una cantidad y posteriormente multiplicarla por 1.16
	totalIVA=precio*1.16;
	totalSIVA=precio/1.16;
	
	cout<<"El precio con IVA es: "<<totalIVA<<endl;
	cout<<"El precio sin IVA es: "<<totalSIVA;		
}
