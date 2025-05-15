#include<iostream>

using namespace std;
class Add{
        int x,y,z;
        public:
        Add(int a,int b)
        {
            x=a;
            y=b;
        }
        Add(Add&);
            void calculate(void);
            void display();
};

Add::Add(Add &a)
{
    x=a.x;
    y=a.y;
    cout<<"value of x and y for new object "<<x<<" and "<<y<<endl;
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
    Add b(a);
    a.calculate();
    a.display();
    return 0;
}