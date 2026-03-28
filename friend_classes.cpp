#include<iostream>
using namespace std;
class Ali{
private:
int a;

public:
Ali(){
    a=0;
}

void get(){
    cout<<"Enter the number :";
    cin>>a;
    cout<<endl;
}
friend class Abdullah;
};
class Abdullah{
    public:
    
void sq(Ali y){
    cout<<"The Square of the member data of the ALI class is: "<<y.a*y.a<<endl; 
}
};

int main (){
Ali i;
i.get();
Abdullah k;
k.sq(i);

    return 0;
}