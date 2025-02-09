#include <iostream>
using namespace std;
int main (){
	char vector1[]={'a','b','c','d','e'};
	char vector2[]={'f','g','h','i','j'};
	char vector3[10];
	
//	Este for son para copiar los elementos del array 1 en el array 3
	for(int i=0;i<5;i++){
		vector3[i]=vector1[i];
	}
//	Este array es para copiar los elementos del array 2 en el array 3
	for(int i=5;i<10;i++){
		vector3[i]=vector2[i-5];
	}
//	Aqui imprimimos los elementos del array 3
	for(int i=0; i<10; i++){
		cout<<vector3[i]<<endl;
	}
}
