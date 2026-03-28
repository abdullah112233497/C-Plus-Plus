#include<iostream>
using namespace std;
class B;
class A{
    private:
    int a=1;
    public:
friend void friendd(A , B );
};
class B{
        private:
    int b=2;
    public:
friend void friendd(A , B );
};
void friendd(A x, B y){
    cout<<"The Sum of the private members of the Class and the Class B: "<< x.a +y.b<<endl;
}
int main (){
A u;
B o; 
friendd(u,o);

    return 0;
}
