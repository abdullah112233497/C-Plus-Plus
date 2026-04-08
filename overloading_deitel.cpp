#include<iostream>
#include<cstring>
using namespace std;
class A{
private:
char c[100];
int a;
public:
A(){
    a=0;
    c[100]='\0';
}
A(int x ){
a=x;

}
A(int x,const char* p ){
a=x;
strcpy(c,p);
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

// Overlaoding fo the Comparision operator (==):
bool operator ==(A o) const{
    if (strlen(this->c)==strlen(o.c)){
        return true;
    
    }
    else{
        return false;
    }
}
};


int main(){
A y(3,"sa"),z(6,"Ali"),v;
if (y<z){
    cout << "true" << endl;
}
else{
    cout << "false" << endl;
}
v=y+z;
cout<<v<<endl;

cout<<"The Overloading for the += operator: "<<endl;
v+=y;
cout<<v<<endl  ;
if (y==z){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
    return 0;
}