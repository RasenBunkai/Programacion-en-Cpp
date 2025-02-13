#include <iostream>
using namespace std;
int main (){
	char word[]="Rasen";
	char name[30];
	
	cout<<"Escribe tu nombre: ";
	cin.getline(name,30,'\n');
	cout<<name;
}
//cin.getline(done se guarda,espacios que ocupa, cuando quiero que termine);
