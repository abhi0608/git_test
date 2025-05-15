#include<iostream>

#include<thread>
using namespace std;

int myAccount=0;

void addMoney()
{
    
    ++myAccount;
}

int main()
{
    std::thread t1(addMoney);
    std::thread t2(addMoney);

    t1.join();
    t2.join();

    cout<<myAccount<<endl;
    return 0;
}