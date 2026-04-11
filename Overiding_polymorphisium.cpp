#include<iostream>
using namespace std;
class Shape{
    
public:
virtual void show()=0; 
};
class Rectangle:public Shape{
    float w,h; 
    public:
    Rectangle( ){
     w=0;
     h=0;
    
    }
    Rectangle(float w,float h ){
    this->w=w;
    this ->h=h;
 
}
void show(){
    cout<<"Area of rectangle is :"<<w*h<<endl;
}



};
class Circle:public Shape{
private:
float r;
public:
Circle(){
    r=0;
}
Circle(float radius){
    this ->r=radius;
}
void show(){
    cout<<"Area of hte Circle is : "<<3.14*r*r<<endl;
}
};
int main (){
Shape *s;
Rectangle r(10,10);
Circle c(10);
s=&r;
s->show();
s=&c;
s->show();


}