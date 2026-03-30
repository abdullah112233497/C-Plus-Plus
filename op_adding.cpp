#include<iostream>
using namespace std;
class A{
private:
int a;
public:
void get(){
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<endl;
}
void show(){
    cout<<"The value in the a data member of the class is: "<<a<<endl;
}
A operator +(A b){
    A temp;
    temp.a=a+ b.a;
    return temp;
}
A(){
    a=0;
}
};

int main(){
A obj1, obj2,obj3;
obj1.get();
obj2.get();
obj1.show();
obj2.show();
obj3=obj1+obj2;
cout<<"The value of a in obj3 is: ";
obj3.show();



    return 0;
}