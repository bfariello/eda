/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <stddef.h>
#include <stdio.h>
#include "enteros.h"

void debug() {
    int a = 1 +5;
    printf( "%d", a);
}


//structuras 

struct Nodo{ 
    int valor; 
    Nodo* siguiente; 
}; 

typedef Nodo* nodolista;

struct Lista{
    nodolista primero;
    nodolista ultimo;
    int cantidad;
};


ListaEnteros crearListaEnteros () { 
    ListaEnteros lista=new Lista;
    lista->primero= NULL;
    lista->ultimo=NULL;
    lista->cantidad=0;
    return lista; 
} 

bool esVaciaListaEnteros(ListaEnteros lista){
     return (lista->cantidad==0); 
}

void agregarEnteroLista(ListaEnteros &lista, int entero){
    nodolista aux = new Nodo;
    aux->valor=entero;
    aux->siguiente=NULL; 
    if(esVaciaListaEnteros(lista)){ 
        lista->primero=aux; 
        lista->ultimo=aux;
    }
    else{ 
          lista->ultimo->siguiente=aux;
          lista->ultimo=aux;
          aux=NULL;
    }
    lista->cantidad++;
}

int primeroListaEnteros(ListaEnteros lista){
    return lista->primero->valor; 
}

void eliminarPrimeroLista(ListaEnteros &lista){
    nodolista aux = lista->primero; 
     if (lista->primero->siguiente==NULL){
         delete lista->primero;
         lista->primero=NULL;
         lista->ultimo=NULL;
         aux=NULL;
     }
     else{
        lista->primero=lista->primero->siguiente; 
        delete aux;
        aux=NULL;
     }
     lista->cantidad--;
}

int cantidadEnterosLIstaEnteros(ListaEnteros lista){
    return lista->cantidad;
}

void destruirListaEnteros(ListaEnteros &lista){
     nodolista aux = lista->primero; 
     while (!esVaciaListaEnteros(lista)){
            lista->primero = lista->primero->siguiente; 
            delete aux; 
            aux = lista->primero; 
     } 
     lista->primero=NULL;
     lista->ultimo=NULL;
     delete lista;
}