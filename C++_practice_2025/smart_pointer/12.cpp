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
    weak_ptr<Test> ptr1;             //used with shared: No ownership
    {
        shared_ptr<Test> ptr2=make_shared<Test>(10);
        ptr1=ptr2;
        cout<<ptr1.use_count()<<endl;
    }
    cout<<ptr1.expired()<<endl;  //expired return true/false
    cout<<"main ends\n";    
    return 0;
}
