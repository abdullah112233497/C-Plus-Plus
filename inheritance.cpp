#include <iostream>
using namespace std;
class One{
protected:
int position;
public:
One(int n){
    position =n;
    cout<<"The constructor of the base class is called with value(PARENT): "<<n<<endl;
}
One(){
    position =0;
}
void move(){
    position++;
}
void show(){
    cout<<position<<endl;
}
};
class Two: public One{
    public:
  Two(int x):One(x){
cout<<"The constructor of the derived class is called with value(cHILD): "<<x<<endl;
  }
void move_back(){
    position--;
}
};
int main(){
    Two obj(5)  ;  

    obj.move();
    
    obj.move();
    obj.move();
    obj.show();
    obj.move_back();
    obj.show();
    return 0;
}