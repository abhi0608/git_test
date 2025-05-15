#include<iostream>

using namespace std;
namespace MySpace
{
    int a;
    void f1();
    class Hello
    {
        public:
            void hello()
            {
                cout<<"Hello\n";
            }
    };
}
//using namespace MySpace;

void MySpace::f1()
{
    cout<<"in f1 \n";
}

int main()
{
    MySpace::a=5;
    MySpace::Hello obj;
    obj.hello();
    MySpace::f1();
    return 0;
}