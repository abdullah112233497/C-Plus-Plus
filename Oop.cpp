#include<iostream>
#include <string>
using namespace std;
// Creating the Class
class Teacher{
    // Access Modifier: public, private, protect---
public:
string name;
string Department;
int salary;
};
int main(){
Teacher t1[5];
for (int i=0;i<5;i++){
    cout<<"Enter the Details of the teacher "<<i+1<<endl;
    cout<<"Name: ";'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    cin>>t1[i].name;
    cout<<endl;
      cout<<"Department: ";
    cin>>t1[i].Department;
     cout<<endl;
       cout<<"Salary: ";
    cin>>t1[i].salary; 
    cout<<endl;
    cout<<"------------------------";
    cout<<endl;
}
    cout<<"========================";
for (int j=0;j<5;j++){
cout<<"Database:"<<j+1<<endl;
 cout<<"Name: ";
cout<<t1[j].name;
cout<<endl;
cout<<"Department: ";
cout<<t1[j].Department;
cout<<endl;
cout<<"Salary: ";
cout<<t1[j].salary;
cout<<endl;
cout<<"------------------------";
   cout<<endl;
}
cin.ignore();
cin.get();
    return 0;
}