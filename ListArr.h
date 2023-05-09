#ifndef LISTARR_H
#define LISTARR_H

#include <iostream>
#include <chrono>
#include<time.h>

#include <vector>
using namespace std;

struct nodo{
  int b;
  int talla=0;  
  vector<int>contenedor;
  nodo *siguiente;
  nodo(int b){
    this->b=b;
    contenedor=vector<int>(b);
  }
};

class ListArr {
private:
  int Size;
  int b;
  int relacionar;
  nodo* frente;
  nodo* actual; 
public:
  ListArr(int capacidad) {
    Size=0;
    relacionar=0;
    b=capacidad;  
    frente = NULL;
    actual=NULL;
  }

  int size(){
    return Size;  
  }

  void insert_left(int v) {
    if ((frente == NULL && relacionar==0) || (frente->talla == b && relacionar==0)) {
      nodo* aux = new nodo(b);
      aux->siguiente = frente;
      aux->contenedor.push_back(v);
      frente = aux;
      frente->talla=1;
    }
      
    else if(frente->talla<b && relacionar==0){
      frente->contenedor.push_back(v);
      frente->talla=frente->talla+1;
    }
    else if(relacionar==1){
      nodo* aux = new nodo(b);
      aux->siguiente = frente;
      aux->contenedor.push_back(v);
      frente = aux;
      frente->talla=1;
      relacionar=0;
    }
    Size++;
  }
 


  void insert_right(int v) {
    if (frente == NULL) {
      nodo* aux = new nodo(b);
      aux->contenedor.push_back(v);
      frente = aux;
      relacionar=1;
    }
    else if (actual == NULL || actual->talla==b) {
      nodo* aux = new nodo(b);
      actual = frente;
      while (actual->siguiente != NULL) {
        actual = actual->siguiente;
      }
      actual->siguiente = aux;
      actual->contenedor.push_back(v);
      actual->talla=1;
      relacionar=1;
    }
    
    else{  
      actual->contenedor.push_back(v);
      actual->talla=actual->talla+1;
      relacionar=1;
    }
    
    Size++;
  }

  void insert(int v, int i) {
    if (i < 0 || i > Size) {
      throw out_of_range("index out of range");
    }
    if (frente == NULL) {
      frente = new nodo(b);
      frente->contenedor.push_back(v);
    }
    else {
      nodo* n = frente;
      int indice = 0;
      while (n->siguiente != NULL && indice + n->contenedor.capacity() <= i) {
        indice += n->contenedor.size();
        cout<<indice<<endl;
        n = n->siguiente;
      }
      if (n->contenedor.size() == b) {
        nodo* aux = new nodo(b);
        aux->contenedor.push_back(v);
        aux->siguiente = n->siguiente;
        n->siguiente = aux;
      }
      else {
        n->contenedor.insert(n->contenedor.begin() + i - indice, v);
      }
    }
    
    Size++;
  }


  void print() {
    nodo* inicio = frente;
    int indice = 0;
    while (inicio != NULL) {
      for (int i = 0; i < inicio->contenedor.size(); i++) {
        if (inicio->contenedor[i] != 0) {
          cout << inicio->contenedor[i] << " ";
          indice++;
        }
      }
      inicio = inicio->siguiente; 
    }
    cout << endl;
  }

  void find(int v) {
    nodo* actual = frente;
    int j = 0;
    while (actual != NULL) {
      for (int i = 0; i < actual->contenedor.capacity(); i++) {
        if (actual->contenedor[i] == v) {
          cout << "El elemento " << v << " se encontro en la posicion " << j + i << endl;
          return;
        }
      }
      actual = actual->siguiente; 
      j+= b;
    }
    cout << "El elemento " << v << " no se encuentra en la lista" << endl;
  }

};

#endif
