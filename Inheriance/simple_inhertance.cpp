#include<iostream>
using namespace std;
class A{
    protected:
int a;
public:
A(){
    a=0;
}
void in(){
    cout<<"Enter a nubmer: ";
    cin>>a;

}
};
class B:public A{
    public:
    void Show(){
        cout<<"This is class B"<<endl;
        cout<<"Value of a of the class A: "<<a<<endl;
    }
};
int main(){
B obj;
obj.in();
obj.Show();

    return 0;
}