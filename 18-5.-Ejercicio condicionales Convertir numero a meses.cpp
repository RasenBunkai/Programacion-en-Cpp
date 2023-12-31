#include<iostream>
using namespace std;
int main(){
	int mes;
	
	cin>>mes;
	
	if (mes >= 1 && mes <= 12) {
        switch (mes) {
            case 1:cout<<"Enero";break;
            case 2:cout<<"Febrero";break;
            case 3:cout<<"Marzo";break;
            case 4:cout<<"Abril";break;
            case 5:cout<<"Mayo";break;
            case 6:cout<<"Junio";break;
            case 7:cout<<"Julio";break;
            case 8:cout<<"Agosto";break;
            case 9:cout<<"Septiembre";break;
            case 10:cout<<"Octubre";break;
            case 11:cout<<"Noviembre";break;
            case 12:cout<<"Diciembre";break;
        }
    } else {
        cout << "El numero ingresado no corresponde a ningun mes." << endl;
    }
}
/*Este programa lee una entrada entre el 1 y 12 en donde traduce el numero a un mes del año, en caso de que el
numero ingresado no sea de un mes, se imprimira un mesaje de error, para realizar este programa se utilizo la
compuerta logica AND y el condicional IF para el mensaje de error.*/
