#include<iostream>

using namespace std;
class Add{
    int x,y,z;
    public:
        Add(int,int);
        friend int calculate(Add p);
};
Add::Add(int a,int b)
{
    x=a;
    y=b;
}
int calculate(Add p)
{
    return (p.x+p.y);
}
int main()
{
    Add a(5,6);
    cout<<calculate(a);
    return 0;
}