#include <iostream>
#include <string>
using namespace std;
class Abdullah
{
public: // Access Specifier
    Abdullah()
    { // Constructor and NON-Parametric Constructor
        cout << "Constructor" << endl;
    }

    int matric;
    string a;
    int inter;
    float gpa;
    void in(int m, int i, float g)
    {
        this->matric = m;
        this->inter = i;
        this->gpa = g;
    }
    Abdullah(string a)
    {
        this->a = a;
    }
    void out()
    {
        cout << "Matric: " << matric << endl;
        cout << "Inter: " << inter << endl;
        cout << "GPA: " << gpa << endl;
        cout << "Name: " << a << endl;
    }
    ~Abdullah()
    { // Deconstructor
        cout << "Decontructor" << endl;
    }
};
int main()
{
    Abdullah A("Abdullah");
    A.in(123, 456, 3.7);
    A.out();
    return 0;
}
// Hello my name is Abdullah and i am a student of the software engineering in the university of the GCUF and i got the 3.79 GPA in the 1st semester and the 94 percent in the Programming fundamental subject;/.