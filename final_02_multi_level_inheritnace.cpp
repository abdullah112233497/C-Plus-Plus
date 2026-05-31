#include<iostream>
using namespace std;
class father{
    public:
    father(){
        cout<<"Father constructor is called"<<endl;
    }
    father(int x){
        cout<<"Father Parameterized constructor is called"<<x<<endl;
    }
    void show(){
        cout<<"Father show function is called"<<endl;
    }
};
class mother{
    public:
    mother(){
        cout<<"Mother constructor is called"<<endl;
    }
    mother(int x){
        cout<<"Mother Parameterized constructor is called"<<x<<endl;
    }
    void show(){
        cout<<"Mother show function is called"<<endl;
    }
};
class son:public father,public mother{
    public:
    son(){
        cout<<"Son constructor is called"<<endl;
    }
    son(int a,int b):father(a),mother(b){
        cout<<"Son  Parameterized constructor is called"<<endl;
    }
    void show(){
        cout<<"Son show function is called"<<endl;
    }
};
int main(){
    son ofbj1;
    son obj2(10,20);
    return 0;
}