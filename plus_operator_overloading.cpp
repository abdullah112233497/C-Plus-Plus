#include<iostream>
using namespace std;
class yes{
int num1;
public:
yes(){
;
    num1=0;
}
void in(){
    cout<<"Enter a number: ";
    cin>>num1;
}
void ou(){
    cout<<"Entered number is: "<<num1<<endl;
}
yes operator +(yes &abj){ //Add two objects: 
    yes temp;
    temp.num1=num1+abj.num1;
    return temp;
}
};
int main(){
yes h1;
yes h2;
h1.in();
h2.in();
cout<<"First Object: ";
h1.ou();
cout<<"Second Object: ";
h2.ou();

(h1+h2).ou();


    return 0;
}