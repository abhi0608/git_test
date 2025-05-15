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
    
    unique_ptr<Test> ptr1=make_unique<Test>(10);
    //unique_ptr<Test> ptr2=ptr1;    //compiler error because one reference count   

    unique_ptr<Test> ptr2=move(ptr1);   //ownership can be transfer in unique pointer
     cout<<"main ends\n";
    return 0;
}