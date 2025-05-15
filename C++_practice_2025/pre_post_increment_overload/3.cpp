#include<iostream>
using namespace std;
class A{
    
    int n;
    public:
        void getdata();
        friend void operator++(A &);
        void display();
};

void A::getdata()
{
    cout<<"Enter a number";
    cin>>n;
}
void operator++(A &x)
{
    x.n=x.n+1;   
}
void A::display()
{
    cout<<n<<endl;
}
int main()
{
    A a;
    a.getdata();
    a++;
    a.display();
}