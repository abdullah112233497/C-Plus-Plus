#include<iostream>
#include<exception>
using namespace std;
class MyException:public exception{
    public:
    const char* what() const throw(){
        return "This is a custom exception ";
    }
};
int main(){

    try {
        int x=-1;
        if(x<0){
            throw MyException();
        }
    }
        catch(MyException &e){
            cout<<e.what()<<endl;

        }
} 