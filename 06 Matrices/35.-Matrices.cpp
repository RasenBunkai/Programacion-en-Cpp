#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int num [10][10], fila,columna;
	cout<<"Escribe el numero de filas: ";
	cin>>fila;
	cout<<"Escribe el numero de columnas: ";
	cin>>columna;
//	Almacenando elementos en matriz
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
			cout<<"Digita un numero ["<<i<<"]["<<j<<"]: ";
			cin>>num [i][j];
		}
	}
//	Mostrando matriz
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
			cout<<num[i][j];
		}
//		Salto de linea
		cout<<"\n";
	}
	getch();
	return 0;
}
