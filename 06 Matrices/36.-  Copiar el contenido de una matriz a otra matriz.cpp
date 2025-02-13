#include <iostream>
using namespace std;
int main (){
	int matriz [2][2]={{1,2},{3,4}};
	int matrizCopy [2][2];
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matrizCopy[i][j]=matriz[i][j];
		}
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<matrizCopy[i][j];
		}
		cout<<"\n";
	}
}
