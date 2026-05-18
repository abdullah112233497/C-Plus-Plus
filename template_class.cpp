#include<iostream>
using namespace std;
template<class a>
class A{
public:
a y;
void in(a x){
    y = x;
}
void show(){
    cout<<"Y: "<<y<<endl;
}
};
int main(){
    A<int> a;
    a.in(10);   
    a.show();
    A<string> s;
    s.in("Abdullah");
    s.show();
    return 0;
}