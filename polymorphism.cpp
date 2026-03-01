#include<iostream>
using namespace std;
class Hello{
private:
int n=0;
public:
void in(){
    cout<<"Enter a number: ";
    cin>>n;
}
void display(){
    cout<<"Entered number is: "<<n<<endl;
}
};
int main(){
Hello *ptr;
ptr=new Hello;
ptr->in();
ptr->display();
delete ptr; // Free the allocated memory
}