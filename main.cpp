#include "declare.h"
#include<iostream>
using namespace std;
int main(){
De d1(20);
d1.show();
De *d2=&d1;
d2->show();

    return 0;
}