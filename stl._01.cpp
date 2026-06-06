#include<iostream>
using namespace std;
#include<iterator>
int main(){
    int a, b,c;
    istream_iterator<int> inputt(cin);
    ostream_iterator<int> outputt(cout," ");

a=*inputt;
++inputt;
b=*inputt;
++inputt;
c=* inputt;

outputt=a+10;
outputt=b;
outputt=c;
    return 0;
}