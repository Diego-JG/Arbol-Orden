#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo* der;
	Nodo* izq;
	
};
Nodo *crearNodo(int);
void agregar(Nodo *&,int );
void mostrar(Nodo *, int);
bool busqueda(Nodo *, int);
void orden(Nodo *);

Nodo *arbol=NULL;

int main(){
	int dato, opcion, contador=0;
	
	do{
		cout<<"\t ...:::M E N Ú::..."<<endl;
		cout<<"1.- Agregar un nuevo nodo"<<endl;
		cout<<"2.- Mostrar el arbol completo"<<endl;
		cout<<"3.- Buscar un elemento en el arbol"<<endl;
		cout<<"4.- Recorrer el arbol en Orden"<<endl;
		cout<<"6.- Salir"<<endl;
		cout<<"¿Cual opcion deseas? ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"Digite un numero que desee: ";
				cin>>dato;
				agregar(arbol,dato);
				cout<<"\n";
				system("pause");
				break;
			case 3:
				cout<<"Digite el numero a buscar: ";
				cin>>dato;
				if(busqueda(arbol,dato)==true){
					cout<<"Elemento "<<dato<<" encontrado";
				}
				else{
					cout<<"No enontrado";
				}
				cout<<"\n";
				system("pause");
				break;
			case 4:
				cout<<"Recorrido en Orden: "<<endl;
				orden(arbol);
				cout<<"\n\n";
				system("pause");
		}
		system("cls");
		
	}while(opcion != 5);
	
	getch();
	return 0;
}

Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato= n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq =NULL;
	
	return nuevo_nodo;
}
void agregar(int x){
	
	
}
