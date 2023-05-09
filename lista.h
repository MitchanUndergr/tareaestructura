#include <iostream>

using namespace std;

class Nodo {
public:
    int dato;
    Nodo* siguiente;
    Nodo(int v) {
        dato = v;
        siguiente = NULL;
    }
};

class ListaLigada {
private:
  Nodo* frente;
  int capacidad;
  int iterador;

public:
    
    ListaLigada(int b) {
        frente = NULL;
        capacidad=b;
        iterador=0;
    }

    void insert_left(int v) {
      if(iterador<=capacidad){
        Nodo* aux = new Nodo(v);
        aux->siguiente = frente;
        frente = aux;
      }
      else{
        throw out_of_range("index out of range");
      }
      iterador++;
    }

    void insert_right(int v) {
      if(iterador<=capacidad){
        Nodo* aux = new Nodo(v);
        if (frente == NULL) {
            frente = aux;
        }
        else {
            Nodo* actual = frente;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = aux;
        }
      }
      else{
        throw out_of_range("index out of range");
      }
    }
    void print() {
        Nodo* actual = frente;
        while (actual != NULL) {
            cout << actual->dato << " ";
            actual = actual->siguiente;
        }
    }
};
