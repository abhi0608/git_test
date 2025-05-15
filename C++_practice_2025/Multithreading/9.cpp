#include<iostream>
#include<chrono>
#include<thread>

using namespace std;

void run(int x)
{
    while(x-->0)
    {
        cout<<"Cpp Nuts"<<endl;
    }
    std::this_thread::sleep_for(chrono::seconds(3));
}
int main()
{
 std::thread t1(run,10);
 cout<<"main()"<<endl;
 t1.join();   
 if(t1.joinable())
    t1.join();
 cout<<"Main() after"<<endl;
 
 return 0;
}