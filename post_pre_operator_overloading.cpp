#include<iostream>
using namespace std;
class Oh{
int n;
public:
Oh(){
    n=0;
}
void in(){
    cout<<"Enter a number: ";
    cin>>n;
}
void ou(){
    cout<<"Entered number is: "<<n<<endl;
}
Oh operator ++(){ // pre-increament operator overloading
    Oh temp;
    temp.n=++n;
return temp;
}
Oh operator ++(int){// post-increament operator overloading
    Oh temp2;
temp2.n=n++;
return temp2;
}
};
int main(){
Oh a,y;
a.in();
a.ou();
Oh b;
b=++a;
cout<<"Pre-increament overloading: "<<endl;
b.ou();
cout<<endl;
y.in();
y.ou();
Oh z=y++;
cout<<"Post-increament overloading: "<<endl;
z.ou();
    return 0;
}