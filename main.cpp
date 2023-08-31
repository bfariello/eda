
/* 
 * File:   main.cpp
 * Author: bfari
 *
 * Created on 17 de agosto de 2023, 17:24
 */


#include "enteros.h"
#include "practico1.h"
#include <cstdlib>
#include <stdio.h> 


using namespace std;
void imprimirListaEnteros(ListaEnteros &lista);

int main(int argc, char** argv) {

    ListaEnteros lista = crearListaEnteros ();
    agregarEnteroLista (lista, 10);
    agregarEnteroLista (lista, 4); 
    agregarEnteroLista (lista, 10); 
    agregarEnteroLista (lista, 8); 
    agregarEnteroLista (lista, 23);
    agregarEnteroLista (lista, 8);
    
    imprimirListaEnteros(lista);
    
    ListaEnteros p = crearListaEnteros ();
    agregarEnteroLista (p, 8);
    agregarEnteroLista (lista, 4); 
    agregarEnteroLista (p, 10); 
    agregarEnteroLista (p, 8); 
    agregarEnteroLista (p, 5);
    agregarEnteroLista (p, 3);
    
    imprimirListaEnteros(p);
    return 0;
}

void imprimirListaEnteros(ListaEnteros &lista){ 
    printf("["); 
    int cant = cantidadEnterosLIstaEnteros(lista); 
    for(int i=1;i<=cant;i++){ 
        if (i==cant){
            printf("%d]\n",primeroListaEnteros(lista));
            eliminarPrimeroLista (lista);
        }
        else{
        printf("%d-",primeroListaEnteros(lista)); 
        eliminarPrimeroLista (lista); 
        }
    }                        
}       
