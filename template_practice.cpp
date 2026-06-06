#include<iostream>
using namespace std;
template<class T>
T Max(T a,T b){
    if(a>b){
        return a;
    }
    else{
        return b;   
    }
}
int main(){
    cout<<"Max of 10 and 20 is: "<<Max(10,20)<<endl;
    cout<<"Max of 3.14 and 2.71 is: "<<Max(3.14,2.71)<<endl;
    cout<<"Max of 'A' and 'B' is: "<<Max('A','B')<<endl;
    return 0;
}