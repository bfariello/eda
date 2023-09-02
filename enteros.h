/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   enteros.h
 * Author: Bibiana
 *
 * Created on 10 de agosto de 2023, 08:58
 */


#ifndef ENTEROS_H
#define ENTEROS_H


//variables
struct Lista;
typedef Lista * ListaEnteros;


void debug();

ListaEnteros crearListaEnteros();
void agregarEnteroLista(ListaEnteros &lista, int entero);
int primeroListaEnteros(ListaEnteros lista);
void eliminarPrimeroLista(ListaEnteros &lista);
bool esVaciaListaEnteros(ListaEnteros lista);
int cantidadEnterosLIstaEnteros(ListaEnteros lista);
void destruirListaEnteros(ListaEnteros &lista);

#endif /* ENTEROS_H */

