#include<iostream>
using namespace std;
int main(){
	float num1, num2, resultado=0;
	
	cin>>num1>>num2;
	
	resultado=num1/num2 +1;
	//Este comando es para establecer que el resultado se redondee a 2 decimales
	cout.precision(2);
	cout<<resultado;	
}
