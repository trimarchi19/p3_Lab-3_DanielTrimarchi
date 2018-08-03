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
	long double seno=0,coseno=0,num,dem,factorial=1,x,potencia,val_x,ang,fac_2=1,den;
	do{
	cout<<"Ingrese un Angulo[0-N]: ";
	cin>>x;	
	ang=x*(PI/180);
	cout<<x<< " X"<<endl;
	}while(x<0);
	for(long double i=0;i<20;i++){	
		//num=pow(-1,i);
		den=2*i;
		dem=(2*i)+1;
		potencia=(2*i)+1;		
										
		for(long double j=1;j<=dem;j++){
			factorial*=j;	
			//cout<<factorial;		
		}
		for(long double j=1;j<=(den);j++){
			fac_2*=j;	
			//cout<<factorial;		
		}			
			seno+=((pow(-1,i))*(pow(ang,potencia)))/factorial;
			coseno+=((pow(-1,i))*(pow(ang,2*i)))/fac_2;				
				factorial=1;
				fac_2=1;
	}
	cout<<"Seno: "<<seno<<endl;
	cout<<"Coseno: "<<coseno<<endl;

}

void Pascal(){
	int filas=0,fac_i=1,fac_j=1,num,fac=1;
	cout<< "Ingrese el Numero de Filas: ";
	cin >> filas;
	//int array[0];
	for(int i=0;i<filas;i++){
	cout<<setw(50-i);

		//factorial n
		for(int k=1;k<=i;k++){
			fac_i*=k;
				}
				
		for(int j=0;j<=i;j++){
				//factorial r
				for(int k=1;k<=j;k++){
				fac_j*=k;
				}
				//factorial n-r
				for(int k=1;k<=i-j;k++){
				fac*=k;
				}
				num=(fac_i)/((fac_j)*fac);
				if(num%2==0){
				cout<<"* ";
				}else if(num%2!=0){
				cout<<"o ";
				}
				fac_j=1;
				fac=1;
		}
		cout<<endl;
		fac_i=1;
		}
}



int main(){
	int resp=0;
	do{
		cout <<endl;
		cout <<"		MENU PRINCIPAL"<<endl
		     <<"1. Factorización"<<endl
		     <<"2. Seno & Coseno"<<endl
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
