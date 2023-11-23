#include <iostream>

using namespace std;


struct estructuraNodo{
    int valor;
    struct estructuraNodo *siguiente;
};

typedef struct estructuraNodo *nodo;

void push(int valorInsertar,nodo &pila){
    nodo nuevo = new (struct estructuraNodo);
    nuevo->valor = valorInsertar;
    nuevo->siguiente = pila;
    pila = nuevo;
}

void mostrarPila(nodo pila){
    if(pila !=NULL){
        cout<<"| "<<pila->valor<<" |"<<endl;
        cout<<"+----+"<<endl;
        mostrarPila(pila->siguiente);
    }
}

void pop(nodo &pila){
    nodo aux = pila;
    pila = pila->siguiente;
    delete aux;
}


int main(){

cout<<"Pila"<<endl;
nodo pila = NULL;

push(35,pila);
push(15,pila);
push(80,pila);
push(10,pila);
push(20,pila);
push(18,pila);
push(17,pila);
push(50,pila);
pop(pila);
pop(pila);

mostrarPila(pila);



}