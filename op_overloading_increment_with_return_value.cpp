#include<iostream>
using namespace std;
class Count{
private:
int n;
public:
Count(){
    n=0;
}
void show(){
    cout<<"The value of n is: "<<n<<endl;

}
// For Pre-increment overloading with return value
Count operator ++(){
    // n++;
    // n+=1;
    // return *this;
    Count temp;
    temp.n=n+1;
    return temp;

}


};
int main(){
Count c1,c2;
c1.show();
c2=++c1;//For pre-increment
cout<<"The value of n in c2 is: ";
c2.show();
cout<<endl;

    return 0;
}