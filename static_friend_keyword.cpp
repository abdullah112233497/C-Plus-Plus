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

};
void A::show(){
cout<<id<<endl;
}
int A::id = 0;

int main(){
A c; 
A d;
A e;
c.show();
A::hello(); // static function can be called using class name without creating the object of the class.
    return 0;
}

