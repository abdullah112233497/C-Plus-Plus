#include<iostream>
using namespace std;
class A{
    public:
   virtual void show(){
    cout<<"Class A"<<endl;
   }
};
class B:public A{
    public:
    void show(){
        cout<<"Class B"<<endl;
    }   
};
class C:public A{
    public:
    void show(){
        cout<<"Class C"<<endl;
    }
};
int main(){
    A *ptr;
    A a;
    B b;
    C c;
    ptr=&c;
    ptr->show();
    return 0;
}