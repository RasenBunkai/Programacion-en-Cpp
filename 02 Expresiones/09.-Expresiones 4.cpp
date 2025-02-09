#include<iostream>
using namespace std;
int main(){
	float NPractica,NTeorica,NParticipacion, NFinal;
	
	cin>>NPractica>>NTeorica>>NParticipacion;
/*Aqui el simbolo "*=" es para simplificar volver a escribir el nombre de la variable y de esta manera reducimos codigo.
Esta linea de codigo nos sirve para que el valor que se inserte en la variable se multiplique por .60 y de esta manera
ya este porcentualizado*/
	NPractica=NPractica*.30;
	NTeorica*=.60;
	NParticipacion*=.10;
	
	NFinal=NPractica+NTeorica+NParticipacion;
	
	cout<<endl<<NFinal;
//	El proposito de este programa es hacer un promedio usando porcentajes
}
