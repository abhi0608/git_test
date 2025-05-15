#include<iostream>
using namespace std;

int main()
{
    float f=3.5;
    int a;

    a=f;
    a=static_cast<int>(f);
    cout<<a<<endl;
    return 0;
}