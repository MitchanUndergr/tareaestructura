#include <iostream>
#include "ListArr.h"

int main() {
  srand(time(NULL));
  int num=1+rand()%(101-1);
  int v[4]={4,100,350,500};

  for(int i=0;i<4;i++){
    ListArr list(v[i]);
    cout<<"tiempo ejecucion insert_left para un vector de capacidad b= "<<v[i]<<endl;
    auto start1=chrono::system_clock::now();
    for(int i=0;i<100;i++){
      list.insert_left(num);
    } 
    auto end1=chrono::system_clock::now();
    chrono::duration<float,milli> duration=end1-start1;
    cout<<duration.count()<<"ms"<<endl;
  }  
  
  for(int i=0;i<4;i++){
    ListArr list(v[i]);
    cout<<"tiempo ejecucion insert_left para un vector de capacidad b= "<<v[i]<<"y 10000 de datos"<<endl;
    auto start1=chrono::system_clock::now();
    for(int i=0;i<10000;i++){
      list.insert_left(num);
    } 
    auto end1=chrono::system_clock::now();
    chrono::duration<float,milli> duration=end1-start1;
    cout<<duration.count()<<"ms"<<endl;
  } 

 for(int i=0;i<4;i++){
    ListArr list(v[i]);
    cout<<"tiempo ejecucion insert_left para un vector de capacidad b= "<<v[i]<<"y 100000 de datos"<<endl;
    auto start1=chrono::system_clock::now();
    for(int i=0;i<100000;i++){
      list.insert_left(num);
    } 
    auto end1=chrono::system_clock::now();
    chrono::duration<float,milli> duration=end1-start1;
    cout<<duration.count()<<"ms"<<endl;
  }

  for(int i=0;i<4;i++){
    ListArr list(v[i]);
    cout<<"tiempo ejecucion insert_right para un vector de capacidad b= "<<v[i]<<"y 100 datos"<<endl;
    auto start1=chrono::system_clock::now();
    for(int i=0;i<100;i++){
      list.insert_right(num);
    } 
    auto end1=chrono::system_clock::now();
    chrono::duration<float,milli> duration=end1-start1;
    cout<<duration.count()<<"ms"<<endl;
  }  
  
  for(int i=0;i<4;i++){
    ListArr list(v[i]);
    cout<<"tiempo ejecucion insert_right para un vector de capacidad b= "<<v[i]<<"y 10000 de datos"<<endl;
    auto start1=chrono::system_clock::now();
    for(int i=0;i<10000;i++){
      list.insert_right(num);
    } 
    auto end1=chrono::system_clock::now();
    chrono::duration<float,milli> duration=end1-start1;
    cout<<duration.count()<<"ms"<<endl;
  } 

 for(int i=0;i<4;i++){
    ListArr list(v[i]);
    cout<<"tiempo ejecucion insert_right para un vector de capacidad b= "<<v[i]<<"y 100000 de datos"<<endl;
    auto start1=chrono::system_clock::now();
    for(int i=0;i<100000;i++){
      list.insert_left(num);
    } 
    auto end1=chrono::system_clock::now();
    chrono::duration<float,milli> duration=end1-start1;
    cout<<duration.count()<<"ms"<<endl;
  }
}

