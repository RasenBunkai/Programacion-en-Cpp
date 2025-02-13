#include <iostream>
using namespace std;
int main (){
	int Matriz [10][10],fila,columna;
	char Bandera='F';
	
	cout<<"Numero de filas: ";cin>>fila;
	cout<<"Numero de columnas: ";cin>>columna;
	
	for(int i=0;i<fila; i++){
		for(int j=0; j<columna; j++){
			cout<<"["<<i<<"]["<<j<<"]: ";
			cin>>Matriz[i][j];
		}
	}
	if(fila==columna){
		for(int i=0; i<fila; i++){
			for(int j=0; j<columna; j++){
				if(Matriz[i][j]==Matriz[j][i]){
					Bandera='T';
				}
			}
		}
	}
	if(Bandera== 'T'){
		cout<<"Matriz simetrica";
	}
	else{
		cout<<"Matriz no simetrica";
	}
}
