
#include<iostream>
using namespace std;
class ABC
{
    public:
        static add(int,int);
};

int ABC::add(int a,int b)
{
    return (a+b);
}

int main()
{
    ABC abc;
    int res;
    res=ABC::add(30,40);
    cout<<res;
    return 0;
}