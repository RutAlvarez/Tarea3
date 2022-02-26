#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main(){
int num1, num2, op,resul;
 bool terminar = false;
 	int fondo=5000,pago ;
    do  // Inicio del ciclo do - while
    {
     cout<<""<<endl;
    cout<<"Elija una de las siguientes opciones: "<<endl;
    cout<<" 1-Suma \n 2-Division \n 3-Multiplicacion \n 4-Resta \n 5-Ingreso de dinero \n 6-Egreso de dinero \n z-Salir "<<endl;
    cin>> op ;
	if(op==1) {
		cout<< "Ingrese el primer numero:  "<<endl;
  		cin>> num1 ;
		cout<< "Ingrese el segundo numero:  "<<endl;
  		cin>> num2 ;
		resul=num1 + num2;
      	cout<<"El Resultado de su operacion es:"<<resul<<endl;
      	}
	else if (op==2) {
		cout<< "Ingrese el primer numero:  "<<endl;
  		cin>> num1 ;
		cout<< "Ingrese el segundo numero:  "<<endl;
  		cin>> num2 ;
		if (num2==0){
		cout <<"No se puede dividir entre 0"<<endl;	
		}	
		else {
    	resul=num1 / num2;
      cout<<"El Resultado de su operacion es:"<<resul<<endl;
      }
    }
    else if (op==3) {
    	cout<< "Ingrese el primer numero:  "<<endl;
  		cin>> num1 ;
		cout<< "Ingrese el segundo numero:  "<<endl;
  		cin>> num2 ;
		resul=num1 * num2;
      	cout<<"El Resultado de su operacion es:"<<resul<<endl;
    }
     else if (op==4) {
     	cout<< "Ingrese el primer numero:  "<<endl;
  		cin>> num1 ;
		cout<< "Ingrese el segundo numero:  "<<endl;
  		cin>> num2 ;
		resul=num1 - num2;
      	cout<<"El Resultado de su operacion es:"<<resul<<endl;
    }
    else if (op==5) {
     	cout<< "Introduzca cantidad que va a ingresar"<<endl;
			cin>> pago ;
     	cout<< "La cantidad ingresada es "<<pago<< " , su nuevo fondo es de "<<fondo+pago<<endl;
     	fondo=fondo +pago;
    }
    else if (op==6) {
     cout<< "Introduzca cantidad que va a sacar"<<endl;
			cin>> pago ;
			if(pago<=fondo) {
				cout<< "El pago de "<<pago<< " fue realizado, su nuevo fondo es de "<<fondo-pago<<endl;
			}
			else {
				cout<< "Fondos insuficientes"<<endl;
			}
     
    }
     else if (op==0) {
     	cout <<"Vuelva pronto"<<endl;	
     	terminar = true;
    }
     else {
      	cout <<"La opcion es invalida "<<endl;	
    }
    
     } while (!terminar);
     return 0;
    }
