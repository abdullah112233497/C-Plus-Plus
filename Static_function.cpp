#include<iostream>
using namespace std;
class First {
private:
static int a;
public:
static void get(){
    cout<<"Enter the value: ";
    cin>>a;
    cout<<endl;
}
static void b(){
cout<<"The square of the static data member of the class: "<<a*a;

cout<<endl;
}
};
int First::a=12;
int main(){
First::get();
 First::b();

    return 0;
}