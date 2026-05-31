#include<iostream>
using namespace std;
class OVer{
private:
int a;
int b;
public:
OVer(){
    a=b=0;

}
OVer(int x, int y){
    a=x;
    b=y;
}
void show(){
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
}
friend ostream& operator <<(ostream& out, OVer& obj);
friend istream& operator >>(istream& in, OVer& obj);

};
ostream& operator <<(ostream& out, OVer& obj){
    out<<"The value of a is: "<<obj.a<<endl;
    out<<"The value of b is: "<<obj.b<<endl;
    return out;
}
istream& operator >>(istream& in, OVer& obj){
    cout<<"Enter the value of a: ";
    in>>obj.a;
    cout<<"Enter the value of b: ";
    in>>obj.b;
    return in;
}
int main(){
    OVer abdullah(12,12);
    cout<<abdullah;
    
    return 0;
}