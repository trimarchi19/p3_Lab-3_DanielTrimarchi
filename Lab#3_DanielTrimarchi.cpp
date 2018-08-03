#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <iomanip>
using std::setw;

#include <stdio.h>      /* printf */
#include <math.h>       /* asin */

#define PI 3.14159265



void Factorizacion(){
	int* arreglo =new int[3];
		cout <<"Factoizacion Ax^2 + Bx + C"<<endl;
		cout <<"Ingrese el Primer Digito [A]: ";
		cin >> arreglo[0];
		cout <<"Ingrese el Segundo Digito [B]: ";
		cin >> arreglo[1];
		cout <<"Ingrese el tercer Digito [C]: ";
		cin >> arreglo[2];
	
	if(arreglo[0]==1){
		if(arreglo[2]==0){
			cout <<"X^2 + "<<arreglo[1]<<"X"<<endl;
		}else if(arreglo[2]!=0){
			cout <<"X^2 + "<<arreglo[1]<<"X"<<endl;

		}

	}else if(){

	}else if(){

	}
		
	
	//cout<<*(arreglo+1)<<endl;// == aregglo[2];
		

	delete[] arreglo;


}

void Seno(){


}


void Pascal(){



}
int main(){
	int resp=0;
	do{
		cout <<endl;
		cout <<"		MENU PRINCIPAL"<<endl
		     <<"1. Factorización"<<endl
		     <<"2. Seno"<<endl
		     <<"3. Triangulo Pascal"<<endl
		     <<"4. Salir"<<endl
		     <<"Escoja su respuesta: "<<endl;
		cin>> resp;
		switch (resp){
			case 1:
				Factorizacion();
				break;
			case 2:
				Seno();
				break;
			case 3: 
				Pascal();
				break;
		}
		if(resp<1||resp>4){
		cout <<"El Numero Ingresado es Invalido. Intente de Nuevo"<<endl;
		}
	}while(resp!=4);
	return 0;
}
