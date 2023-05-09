#include <iostream>

using namespace std;

struct Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int dato) {
        this->dato = dato;
        this->siguiente = NULL;
    }
};

class LinkedList {
private:
  int capacidad;
  int size;  
  Nodo* frente;

public:
    LinkedList(int b) {
      capacidad=b;
      frente = NULL;
      size=0;
    }

    int getsize(){
      return size;
    }

    void insert_left(int v) {
        if(size-1<=capacidad){
          Nodo* aux = new Nodo(v);
          aux->siguiente = frente;
          frente = aux;
          size++;
        }
        else{
          throw "outofbounds";
        }
    }

    void insert_right(int dato) {
      if(size-1<=capacidad){
        Nodo* aux = new Nodo(dato);
        if (frente == NULL) {
            frente = aux;
          
        }
        Nodo* actual = frente;
        while (actual-> siguiente!= NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = aux;
        size++;
      }
      else{
        throw "outofbounds";
      }
    }

    void print_list() {
        Nodo* actual = frente;
        while (actual != NULL) {
            cout << actual->dato << " ";
            actual = actual->siguiente;
        }
        cout << endl;
    }
};
