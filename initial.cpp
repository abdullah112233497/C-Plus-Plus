#include <iostream>
#include "declare.h"
using namespace std;
De::De(int n){
    cout<<"Constructor called!!!"<<endl;
     p = new int;
     *p=n;
    Number=10;
     desc= "Hello";
}
 void De::show(){

    cout<<"Number: "<<Number<<endl;
    cout<<"Description: "<<desc<<endl;
    cout<<"Value of p: "<<*p<<endl;
}
