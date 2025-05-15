#include<iostream>

using namespace std;
void f1()
{
    cout<<"Abhinav jain";
}
void f2()
{
    cout<<"Hello"<<endl<<"MysirG"<<"\n";
}
void f3()
{
    int a,b,c;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    c=a+b;
    cout<<"Sun is "<<c;
}
void f4()
{
    int r;
    float a;
    cout<<"Enter radious of a circle\n";
    cin>>r;
    a=3.14*r*r;
    cout<<"Area is"<<a;
}

void f5()
{
    int l,b,h;
    cout<<"Enter length,brath and height of a cuboid\n";
    cin>>l>>b>>h;
    int V=l*b*h;
    cout<<"Volume of cuboid is"<<V;
}
int main()
{
    f1();
    f2();
    f3();
    f4();
    f5();
    cout<<endl;
}