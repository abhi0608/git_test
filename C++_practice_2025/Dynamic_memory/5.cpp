#include<iostream>

using namespace std;

void releaseConn(int *ptr)
{
    delete ptr;
}
int *createConn()
{
    int *ptr=new int;
    return ptr;
}
int main()
{
    int *ptr=createConn();
    //do some work;
    releaseConn(ptr);
    return 0;
}