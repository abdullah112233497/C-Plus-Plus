#include<iostream>
using namespace std;
class A{
private:
int a;
public:
A(int x){
a=x;
}
// OVerloading for the less than operator:
bool operator<(const A b) {
    return a<b.a; 
}
};

int main(){
A y(3),z(6);
if (y<z){
    cout << "true" << endl;
}
else{
    cout << "false" << endl;
}

    return 0;
}