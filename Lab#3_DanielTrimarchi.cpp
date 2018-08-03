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
	double* arreglo =new double[3];
		cout <<"Factoizacion Ax^2 + Bx + C"<<endl;
		cout <<"Ingrese el Primer Digito [A]: ";
		cin >> arreglo[0];
		cout <<"Ingrese el Segundo Digito [B]: ";
		cin >> arreglo[1];
		cout <<"Ingrese el tercer Digito [C]: ";
		cin >> arreglo[2];

	// Ax^2 + bx + c;
	double a=arreglo[0],b=arreglo[1],c=arreglo[2];
	double verificador=(b*b)-(4*a*c);
	cout<<verificador<<endl;
	if(verificador>=0){
		double raiz=sqrt(verificador);
		double cuadratica_pos=(-b+raiz)/(2*a);
		double negativa=(-b-raiz)/(2*a);	
	cout<<"(x + ("<<cuadratica_pos*-1<<"))(X + ("<<negativa*-1<<"))"<<endl;		
	

	}else if(verificador<0){
		cout<<"Es un Numero Imaginario. No se Puede Factorizar";

	}
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
