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
    shared_ptr<Test> ptr1;
    {
        shared_ptr<Test> ptr2=make_shared<Test>(10);
      
    }

    cout<<ptr1.use_count()<<endl;
    cout<<"main ends\n";
    
    return 0;
}
