#include<iostream>
using namespace std;
class A{
    
    int n;
    public:
        void getdata();
        int operator++();
        void operator++(int);
        void display();
};

void A::getdata()
{
    cout<<"Enter a number";
    cin>>n;
}

int A::operator++()
{
    int tmp;
    n=n+1;
    tmp=n;
    return tmp;
}
void A::operator++(int data)
{
 n=n+1;   
}
void A::display()
{
    cout<<n<<endl;
}
int main()
{
    A a;
    a.getdata();
    ++a;
    a.display();
}