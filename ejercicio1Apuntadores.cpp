#include <iostream>
using namespace std; 
struct dato{
	int dato1; 
	char dato2[20];
};
struct dato2 {
	int dato3; 
	struct dato;
};
int main(){
	struct dato valor1;
	struct dato *ptr;
	ptr= &valor1; 
	cout<< "Punteros: "<<&ptr<<endl; 
	//Imprime el vlor del puntero 
	cout<< "Direccion de puntero: "<<ptr<<endl;
	//cout<< "Valor 1: "<<&valor1<<endl;
	cout<<"Ingresa por puntador: "; 
	//cin>> ptr->dato1;
	cout<<endl; 
	//imprime la direccion del puntero
	cout<<"Valor Ingresado: " <<ptr->dato1<<endl;
	cout<< "ingresar por puntero: ";
	cin>>ptr->dato2;
	cout<<endl; 
	cout<<"Cadena ingresada: "<<ptr->dato2<<endl<<endl; 
	return 0;
}
# EjercicioEstructuras
# EjerciciosEstructuras
