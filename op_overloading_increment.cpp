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
// For Pre-increment overloading 
void operator ++(){
    // n++;
    n+=1;
}
// For Post-increment overloading 
void operator ++(int){
    // n++;
    n+=1;
}

};
int main(){
Count c1;
c1.show();
++c1;//For pre-increment
c1++; //For post-increment
c1.show();
    return 0;
}