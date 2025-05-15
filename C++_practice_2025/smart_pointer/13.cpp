#include<iostream>
#include<memory>
#include <mutex>

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
    weak_ptr<Test> ptr1;     //weak pointer used to create temprary pointer        
    {
        shared_ptr<Test> ptr2=make_shared<Test>(10);
        ptr1=ptr2;
        shared_ptr<Test> ptr3=ptr1.lock();   //lock will convert weak_ptr to
                                            //shared_ptr corresponding to the object
                                            //pointer(ptr1)
        cout<<ptr3.use_count()<<endl;
    }
    cout<<ptr1.expired()<<endl;  //expired return true/false
    cout<<"main ends\n";    
    return 0;
}
