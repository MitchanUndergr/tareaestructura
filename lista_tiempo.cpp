#include "lista.h"
#include <iostream>
#include <chrono>
#include<time.h>


int main() {
  srand(time(NULL));
  int num=1+rand()%(101-1);

  
    LinkedList list(100);
    cout<<"tiempo ejecucion insert_left para un vector de capacidad b= "<<100<<endl;
    auto start1=chrono::system_clock::now();
    for(int i=0;i<100;i++){
      list.insert_left(num);
    } 
    auto end1=chrono::system_clock::now();
    chrono::duration<float,milli> duration=end1-start1;
    cout<<duration.count()<<"ms"<<endl;
    

    cout<<"tiempo ejecucion insert_right para un vector de capacidad b= "<<100<<"y 100 datos"<<endl;
    auto start11=chrono::system_clock::now();
    for(int i=0;i<100;i++){
      list.insert_right(num);
    } 
    auto end11=chrono::system_clock::now();
    chrono::duration<float,milli> duration11=end11-start11;
    cout<<duration11.count()<<"ms"<<endl;
  
  
    LinkedList list2(10000);
    cout<<"tiempo ejecucion insert_left para un vector de capacidad b= "<<10000<<"y 10000 de datos"<<endl;
    auto start2=chrono::system_clock::now();
    for(int i=0;i<10000;i++){
      list2.insert_left(num);
    } 
    auto end2=chrono::system_clock::now();
    chrono::duration<float,milli> duration2=end2-start2;
    cout<<duration.count()<<"ms"<<endl;
  
    cout<<"tiempo ejecucion insert_right para un vector de capacidad b= "<<10000<<"y 10000 de datos"<<endl;
    auto start22=chrono::system_clock::now();
    for(int i=0;i<10000;i++){
      list2.insert_right(num);
    } 
    auto end22=chrono::system_clock::now();
    chrono::duration<float,milli> duration22=end22-start22;
    cout<<duration22.count()<<"ms"<<endl;
   
 
    LinkedList list3(100000);
    cout<<"tiempo ejecucion insert_left para un vector de capacidad b= "<<10000<<"y 100000 de datos"<<endl;
    auto start3=chrono::system_clock::now();
    for(int i=0;i<100000;i++){
      list3.insert_left(num);
    } 
    auto end3=chrono::system_clock::now();
    chrono::duration<float,milli> duration3=end3-start3;
    cout<<duration3.count()<<"ms"<<endl;
  

 cout<<"tiempo ejecucion insert_right para un vector de capacidad b= "<<100000<<"y 100000 de datos"<<endl;
    auto start33=chrono::system_clock::now();
    for(int i=0;i<100000;i++){
      list3.insert_right(num);
    } 
    auto end33=chrono::system_clock::now();
    chrono::duration<float,milli> duration33=end33-start33;
    cout<<duration33.count()<<"ms"<<endl;
  
}

