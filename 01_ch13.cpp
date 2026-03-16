#include<iostream>
using namespace std;
class Hello{
private:
int a;
public:
void in(){
    cout<<"Enter the Number: ";
    cin>>a;
    cout<<endl;
}
void out(){
    cout<<"The entered number is: "<<a;
}

};
int main(){
Hello h;
h.in();
h.out();
    return 0;
}