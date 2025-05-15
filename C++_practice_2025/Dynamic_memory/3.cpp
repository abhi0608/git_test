
#include<iostream>
using namespace std;

int *fun()
{
    int a=10;
    int *ptr=&a;   //a will be out of scope once this 
                   // function will return
    return ptr;
}

int main()
{
    int x,y;
    cout<<*fun();
    return 0;
}