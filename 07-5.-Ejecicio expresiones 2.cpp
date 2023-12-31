#include<iostream>
using namespace std;
int main(){
	float a,b,c,d,resultado=0;
	
	cin>>a>>b>>c>>d;
	
//	resultado=a+(b/(c-d));
	resultado=(a+(b/c)/d);
	
	cout<<endl<<resultado;
}
