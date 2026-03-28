#include<iostream>
using namespace std;
class Obj_Para{
private:
int h,km;
public:
Obj_Para(){
    h=km=0;
}
void get(){
    cout<<"Enter the Hours: ";
    cin>>h;
    
    cout<<"Enter the Km: ";
    cin>>km;
}
void show(){
    cout<<"Hour: "<<h<<" Km: "<<km<<endl;
}
Obj_Para yes(Obj_Para j){
    Obj_Para final;
    final.h=h+j.h;
    final.km=km+j.km;
    return final;
}
};
int main(){
Obj_Para obj1,obj2 ,r;
obj1.get();
obj1.show();
cout<<endl;
obj2.get();
obj2.show();

r=obj1.yes(obj2);
r.show();
    return 0;
}