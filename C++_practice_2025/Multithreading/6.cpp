#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>

using namespace std;

//3.thread creation using functor (function Object)
class Base{
    public:
        void operator()(int x)
        {
            while(x-- > 0)
            {
                cout<<x<<endl;
            }
        }
};

int main()
{
    std::thread t((Base()),10);
    t.join();
    return 0;
}