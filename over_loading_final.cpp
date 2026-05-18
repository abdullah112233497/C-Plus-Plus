#include<iostream>
using namespace std;
class A{
private:
int a;
public:
A(int g){
a=g;
}
void show(){
    cout<<"Show: "<<a<<endl;
}
friend ostream& operator<<(ostream& out, A& x);
};
ostream& operator<<(ostream& out, A& x){
    out<<x.a;
    return out;
}
int main(){
    A obj1(10);
    cout<<obj1;

}