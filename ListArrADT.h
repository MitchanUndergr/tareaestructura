#ifndef ListArrADT_H 
#define ListArrADT_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class ListArrADT{
  virtual int size()=0;
  virtual void insert_left(int v)=0;
  virtual void insert_right(int v)=0;
  virtual void insert(int v, int i)=0;
  virtual void print()=0;
  virtual bool find(int v)=0;
};

#endif