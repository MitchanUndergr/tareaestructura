#include<iostream>
#include "ListArr.h"


int main() {
  ListArr lista(3);
  lista.insert_left(50);
  lista.insert_left(60);
  lista.insert_left(30);
  lista.insert_left(40);
  lista.insert_right(20);
  lista.insert_left(100);
  lista.insert_left(120);
  lista.insert_right(200);
  lista.insert_right(230);
  lista.insert_left(10);
  lista.insert_right(15);
  lista.insert_left(1);
  lista.insert_left(2);
  lista.insert_left(3);
  //lista.insert(55,4);
  lista.print();
  cout<<"la talla es "<<lista.size()<<endl;
  lista.find(15);
  return 0;
}  