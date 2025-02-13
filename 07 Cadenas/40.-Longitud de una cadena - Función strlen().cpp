#include <iostream>
#include <string.h>
using namespace std;
int main (){
//	char word []="Hi";
//	int longitud = 0;
//	
//	longitud=strlen(word);
//	
//	cout<<longitud<<endl;

char word[20];
int longitud=0;

cout<<"Cuantos caracteres tiene la frase: ";
cin.getline(word,20);

longitud = strlen(word);
cout<<longitud<<endl;

return 0;
}
