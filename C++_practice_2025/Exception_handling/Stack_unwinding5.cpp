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
int f3()
{
    cout<<"f3 begins\n";
    try{
        f2();
    }
    catch(int i)
    {
        cout<<"Caught Exception \n";
    }
    cout<<"f3 ends";
}
int main()
{

    f3();   
    cout<<"Bye...";

    return 0;
}