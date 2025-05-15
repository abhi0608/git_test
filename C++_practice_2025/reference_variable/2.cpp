#include<iostream>

using namespace std;

int main()
{
    int x=10;
    int y=1000;
    int &r=x;   //we have initialize reference variable when declare 
                
    cout<<"x "<<x<<endl;
    cout<<"r "<<r<<endl;

    r=y;  //we can not refer other variable if we initialize with x;
          //it will change in x if we do(r=y)
    
    cout<<"X "<<x<<endl;

    cout<<"r "<<r<<endl;
    return 0;
}