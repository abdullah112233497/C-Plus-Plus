

// Answer:
#include<iostream>
#include<string>
using namespace std;
class Student{
private:
string name;
int rollno;
float GPA;
public:
Student(string n, int r, float g){
    name=n;
rollno=r;
GPA=g;
}
Student(string n, int r){
    name=n;
    rollno=r;
    GPA=0.0;
}
Student(string n){
    name=n;
    rollno=0;
    GPA=0.0;
}
Student(){
    name="";
    rollno=0;
    GPA=0.0;
}

// Question 2 statement required a member function to display the student's information, so here is the implementation of that function:
void Display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
    cout<<"GPA: "<<GPA<<endl;
}


// Now the the Question number 3 requirement
// The Declaration of the friend function for operator overloading
friend istream& operator >>(istream &in , Student &out);

// Definition of the Frient Overloading function
friend istream& operator >>(istream& in , Student &out){
cout<<"Enter the name of the student: ";
in>>out.name;
cout<<"Enter the roll number of the student: ";
in>>out.rollno;
cout<<"Enter the GPA of the student: ";
in>>out.GPA;
return in;
}
};
int main(){
Student obj1("Abdullah",250883,3.78);
Student obj2("Duryab",250725);
Student obj3("Saad Raza");
// For the Testing of the Friend Overloading function
Student obj4;

cin>>obj4; // Using the Friend Overloading function to take input for obj4  
cout<<"Student 1: "<<endl;
// obj1.Display();
cout<<endl<<"Student 2: "<<endl;    
// obj2.Display();
cout<<endl<<"Student 3: "<<endl;
// obj3.Display();
    return 0;
}
