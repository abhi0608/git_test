#include<iostream>

using namespace std;
/*problem*/
class Test
{
    public:
    int x,y;
    Test(int a=0,int b=0)
    {
        x=a;
        y=b;
        cout<<"Constructor called \n";
    }
    ~Test()
    {
        cout<<"Destructor called \n";
    }

};
int main()
{
    cout<<"Main begin\n";
    {
        Test *p=new Test(10,20);  //problem memory will not deallocated,we have to call delete externally
    }
    cout<<"main ends";
    return 0;
}