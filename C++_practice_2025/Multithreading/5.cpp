#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>

using namespace std;
//1.thread creation by lamda function
int main()
{
    auto fun=[](int x){
        while(x-- > 0)
        {
            cout<<x<<endl;
        }
    };
    std::thread t1(fun,11);
    t1.join();
}