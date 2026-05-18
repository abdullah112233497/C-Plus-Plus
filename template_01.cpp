#include<iostream>
using namespace std;
template<class a>
a show(a x, a y){
    cout<<"the sum of "<<x<<" and "<<y<<" is "<<x+y<<endl;
}
int main(){
    show(10,20);
    show(20.5 , 25.5);
    // show("Abdullah ", "Qaisar");
    return 0;
}