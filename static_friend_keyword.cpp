#include<iostream>
using namespace std;
class A{
private:
static int id; //Static member variable.
public:
A(){
    id++;
}
static void hello(){
    cout<<"I am a static function."<<endl;
}
void show();
friend class B; // Friend class can access private members of the class A.
};



void A::show(){
    cout<<id<<endl;
}
int A::id = 0;

class B{
public:
void yes(A obj){
cout<<"It is calling from the Class B: "<<obj.id<<endl;
}


};
int main(){
    A c; 
    A d;
    A e;
    c.show();
    A::hello(); // static function can be called using class name without creating the object of the class.
    B x;
    x.yes(c); // Friend class can access private members of the class A.
    return 0;
}


