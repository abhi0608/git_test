#include<iostream>
#include<memory>

using namespace std;

class Test{
    int x;
    public:
        Test(int a=0)
        {
            x=a;
            cout<<"Constructor\n";
        }
        ~Test(){cout<<"Destructor\n";}
};
int main()
{
    //shared_ptr<Test> ptr=make_shared<Test>(10);
    shared_ptr<Test> ptr1(new Test(10));
    shared_ptr<Test> ptr2=ptr1;               //multiple shared_ptr can own multiple object
    cout<<ptr1.use_count()<<endl;
    cout<<ptr2.use_count()<<endl;
    return 0;
}
