#include<iostream>
using namespace std;
class F{
private:
// static  inline int  a=0;   Ye C++17 feature hai. 
static int a; 
public:
F(){
    a++;
}
void show(){
    cout<<a<<endl;
}
};
int F::a=0; 
int main(){
F x;
F y,z;
x.show();
    return 0;
}