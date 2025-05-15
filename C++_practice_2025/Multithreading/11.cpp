#include<iostream>
#include<chrono>
#include<thread>

using namespace std;

void run(int x)
{
    while(x-->0)
        cout<<"Cpp Nuts"<<endl;
   // std::this_thread::sleep_for(chrono::seconds(5));
   cout<<"thread finished"<<endl;
}
int main()
{
 std::thread t1(run,10);
 cout<<"main()"<<endl;
 t1.detach();
    if(t1.joinable())
    {
        t1.detach();
    }
 cout<<"Main() after"<<endl;
 //std::this_thread::sleep_for(chrono::seconds(5));
 _sleep(5);
 
 return 0;
}