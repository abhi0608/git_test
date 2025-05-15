#include<iostream>

using namespace std;
class Add{
        int x,y,z;
        public:
            Add(int,int);
            void calculate(void);
            void display();
};
Add::Add(int a,int b)
{
    x=a;
    y=b;
}
void Add::calculate()
{
    z=x+y;
}
void Add::display()
{
    cout<<z;
}
int main()
{
    Add a(5,6);
    a.calculate();
    a.display();
    return 0;
}