#include<iostream>
#include<memory>

using namespace std;
class Test
{
    int x;
    public:
        Test(int a=0)
        {
            x=a;
            cout<<"Constructor \n";
        }
        ~Test(){cout<<"Destructor\n";}
        void fun()
        {
            cout<<x<<endl;
        }
};
int main()
{
    cout<<"Main begins\n";
    {
        //unique_ptr<Test> ptr=make_unique<Test>(10);
        unique_ptr<Test> ptr(new Test(10));
        ptr->fun();
    }
    cout<<"main ends\n";
    return 0;
}