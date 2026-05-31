#include<iostream>
using namespace std;
class A{
private:
static int count;
public:
A(){
    count++;
    cout<<"Object "<<count<<" created"<<endl;
}

};
int A::count=0;
int main(){
    A obj1,obj2,obj3;
    return 0;
}