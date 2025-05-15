//1. when the actual referred object/variable is not const.

#include<iostream>

using namespace std;

int main()
{
    const int a=10;
    const int *b1=&a;
   
    int *d1=const_cast<int*>(b1);
    *d1=15;   //invalid and undefined behaviour
    cout<<*d1<<endl;

    int a2=20;
    const int *b2=&a2;
    int *d2=const_cast<int*>(b2);
    *d2=30;  //valid 

    return 0;
}