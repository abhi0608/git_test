#include<iostream>

using namespace std;

int main()
{
    int x=10;
    int &r=x;   //we have initialize reference variable when declare 
                
    cout<<"x "<<x<<endl;
    cout<<"r "<<r<<endl;

    r=100;
    
    cout<<"x "<<x<<endl;
    cout<<"r "<<r<<endl;
    return 0;
}