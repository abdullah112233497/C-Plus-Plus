#include <iostream>
using namespace std;
class Max_Min
{
    int a[5];

public:
    void fill();
    void display();
   int  maX();
   int min();
};
void Max_Min::fill()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number at index [" << i << "] :";
        cin >> a[i];
    }
}
void Max_Min::display()
{

    for (int j = 0; j < 5; j++)
    {
        cout << "The number at index [" << j << "] :" << a[j] << endl;
    }
}
   int  Max_Min::maX()
{
    int m = a[0];
    for (int k = 0; k < 5; k++)
    {
        if (m < a[k])
        {
            m = a[k];
        }
    }
    return m;
}
   int  Max_Min::min()
{
    int m = a[0];
    for (int k = 0; k < 5; k++)
    {
        if (m > a[k])
        {
            m = a[k];
        }
    }
    return m;
}

int main(){
Max_Min obj1;
obj1.fill();
obj1.display();
cout<<"The maximum number is: "<<obj1.maX()<<endl;
cout<<"The minimum number is: "<<obj1.min()<<endl;


    return 0;
}