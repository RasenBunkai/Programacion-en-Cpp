#include<iostream>
using namespace std;
int main(){
//Este programa cambia de lugar el valor de las variables para que X valga Y y Y valga X
	int x,y,aux;
	
	cin>>x;
	cin>>y;
	
	aux=x;
	x=y;
	y=aux;
	
	cout<<x<<endl<<y;	
}
