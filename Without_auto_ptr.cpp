#include<iostream>
#include<memory> //We not use it
#include<new>
using namespace std;
int main(){
    
    int *ptr=new (nothrow) int[100000000];
    if(ptr==NULL){
     cout<<"Memory allocation failed"<<endl;
    }
    
  else{  cout<<"Value Of ptr: "<<*ptr<<endl;
delete [] ptr;}
    return 0;
 
}