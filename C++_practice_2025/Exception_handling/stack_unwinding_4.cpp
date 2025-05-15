#include<iostream>

using namespace std;
void f1() 
{
    cout<<"f1 Begins \n";
    throw 100;
    cout<<"f1 Ends \n";
}
void f2() 
{
    cout<<"f2 begins\n";
    f1();
    cout<<"f2 Ends \n";
}
int main()
{
    try{
        f2();
    }
    catch(int i)
    {
        cout<<"Caught Exception \n";
    }
    cout<<"Bye...";

    return 0;
}