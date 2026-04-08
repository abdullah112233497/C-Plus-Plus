#include<iostream>
using namespace std;
class A{
private:
public:
int a;
A(){
    a=0;
}
A(int x){
a=x;
}
// Display function

// OVerloading for the less than operator:
bool operator<(const A b) {
    return a<b.a; 
}
A operator +(A c){
    A temp;
    temp.a=this->a+c.a;
    return temp;
}
// Overloading for the insertion operator:
friend ostream& operator <<(ostream& o, A &d){
    o<<d.a;
    return o;   
}
// OVerloading for the += / -= operator:
A operator +=(A j){
 a+=j.a;
 return *this; //This means return the whole current object

}
};

int main(){
A y(3),z(6),v;
if (y<z){
    cout << "true" << endl;
}
else{
    cout << "false" << endl;
}
v=y+z;
cout<<v;

cout<<"The Overloading for the += operator: "<<endl;
v+=y;
cout<<v;
    return 0;
}