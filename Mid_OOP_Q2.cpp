// Mid OOP Q2: Create a class named "Student" with the following attributes: name, roll number, and GPA. Implement three constructors for the class: one that initializes all attributes, one that initializes only the name and roll number (setting GPA to 0.0), and one that initializes only the name (setting roll number to 0 and GPA to 0.0). Include a member function to display the student's information. In the main function, create three Student objects using each of the constructors and display their information.


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
void Display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
    cout<<"GPA: "<<GPA<<endl;
}
};
int main(){
Student obj1("Abdullah",250883,3.78);
Student obj2("Duryab",250725);
Student obj3("Saad Raza");

cout<<"Student 1: "<<endl;
obj1.Display();
cout<<endl<<"Student 2: "<<endl;    
obj2.Display();
cout<<endl<<"Student 3: "<<endl;
obj3.Display();
    return 0;
}
