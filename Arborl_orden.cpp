#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo* der;
	Nodo* izq;
	
};
void agregar(int x);

int main(){
	int x;
	Nodo *Arbol=NULL;
	agregar( x);
	
}
void agregar(int x)
{
	if(Arbol==NULL){
		Arbol=new Nodo();
		Arbol.dato=x;
		Arbol.izq=NULL;
		Arbol.der=NULL;
	}else while(true){
			if(x>aux->dato){
				if(aux->izq==NULL){
					aux->izq=new Nodos();
					aux=aux->izq;
					aux->dato=x;
					aux->izq=NULL;
					aux->der=NULL;
					break;	
				}
				
			}else if(x<aux->dato){
				if(aux->der==NULL){
					aux->der=new Nodos();
					aux=aux->der;
					aux->dato=x;
					aux->izq=NULL;
					aux->der=NULL;
					break;	
				}else{
					cout<<"Numero ya existente"<<endl;
					break;
				}
			}
		}
	
}
void orden(Nodo*raiz){
	if(raiz==NULL){
		return;
	}
	orden(raiz->izq){
		cout<<raiz->dato<<endl;
		orden(raiz->der);
	}
}
