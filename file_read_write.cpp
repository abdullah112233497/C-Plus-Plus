#include<iostream>
#include<fstream>
#include<cstring>
#include<conio.h>
using namespace std;
class student{
char name[50];
int rollno;
char Semester[50];
public:
void in(){
    cout<<"Enter a name: ";
    cin.getline(name, 50);
    cout<<"Enter roll number: ";
    cin>>rollno;
    cout<<"Enter semester: ";
    cin.ignore();
    cin.getline(Semester, 50);
    cout<<endl;
};
void ou(){
    cout<<"Entered name is: "<<name<<endl;
    cout<<"Entered roll number is: "<<rollno<<endl;
    cout<<"Entered semester is: "<<Semester<<endl;
    cout<<"----------------------"<<endl;
    
}
};
int main(int nu,char* []){
student s;
ofstream file;
file.open("file.dat "  ,ios:: out | ios::binary);
for(int i=0;i<10;i++){
s.in();
file.write((char*)&s,sizeof(s));
}
// file.open("file.dat ", ios:: out | ios::binary);
file.close();

cout<<"---------------------Reading from file--------------------"<<endl;
ifstream file1;
file1.open("file.dat ", ios:: in | ios::binary );
for(int i=0;i<10;i++){
    file1.seekg(i*sizeof(s), ios::beg);

file1.read((char*)&s,sizeof(s));
s.ou();
}
file1.close();
return 0;

}