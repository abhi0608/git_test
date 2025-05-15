#include<iostream>
#include<math.h>
using namespace std;

void swap(int&,int &);
int add(int,int,int=0);
float area(int a,int b,int c);
int max(int,int);
int area(int l,int b)
{
    return l*b;
}
float area(int a,int b,int c)
{
    float s,ar;
    a=(a+b+c)/2.0;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;

}
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
    cout<<add(1,2);
    cout<<"\n"<<area(12,12,12);
    return 0;
}