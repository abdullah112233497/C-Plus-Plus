#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    friend istream& operator >>(istream & in , A& obj1);  
    friend ostream& operator <<(ostream & ou , A& obj2);
};
istream& operator >>(istream & in , A& obj1){
    cout<<"Enter the value of the a: ";
    in>>obj1.a;
    return in;
}
ostream& operator<<(ostream & ou , A& obj2){
    cout<<"The value of the a: ";
    ou<<obj2.a;
    cout<<endl;
    return ou;
}

int main(){
A duryab_dalahh, Juniad_BC;
cout<<"Object 1: ";
cin>>duryab_dalahh;
cout<<endl;
cout<<"Object 2: ";
cin>>Juniad_BC;
cout<<endl;
cout<<"Object 1: ";
cout<<duryab_dalahh;
cout<<"Object 2: ";
cout<<Juniad_BC;

cout<<duryab_dalahh;
    return 0;
}