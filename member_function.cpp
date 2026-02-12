#include<iostream>
using namespace std;
class Abdullah {
    public: //Access Specifier
    Abdullah(){   //Constructor
        cout<<"Constructor"<<endl;
    }
    int matric;
    int inter;
    float gpa;
    void in(int m,int i,float g){
    this->matric=m;
    this ->inter=i;
    this->gpa=g;
    }
    void out(){
        cout<<"Matric: "<<matric<<endl;
        cout<<"Inter: "<<inter<<endl;
        cout<<"GPA: "<<gpa<<endl;
    }
~Abdullah(){
        cout<<"Decontructor"<<endl;
    }
};
int main(){
    Abdullah A;
    A.in(123,456,3.7);
    A.out();
    return 0;
}