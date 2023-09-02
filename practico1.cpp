/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <stddef.h>
#include <stdio.h>
#include "enteros.h"
#include "practico1.h"


struct Nodo{ 
    int valor; 
    Nodo* siguiente; 
}; 
typedef Nodo* nodolista;

bool isIncluded(nodolista l, nodolista p){
 //l esta incluida en p 
    
    
    nodolista iter1 = l;
    bool incluida = false;
    
    if(iter1 == NULL){
       incluida = true; 
    }else{
        while(p!=NULL){
            if (p->valor == iter1->valor){
                printf("Encontre Valor");
                iter1 = iter1->siguiente;
                p = p->siguiente;
            }else{
                printf("No encontre Valor");
                p = p->siguiente;
                iter1 = l;
            }
            
         }
    }
    
    
    
    
    return incluida;
    
    
    
}