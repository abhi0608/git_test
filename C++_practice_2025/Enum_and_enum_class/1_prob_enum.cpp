#include<iostream>
using namespace std;

int main()
{

    enum Color1{red,green,blue};
    Color1 c1=red;

    switch(c1)
    {

        case red:cout<<"red"<<endl; break;
        case green:cout<<"green"<<endl; break;
        case blue:cout<<"blue"<<endl; break;
    }
    int green=100;     //can not initialize in enum

}
