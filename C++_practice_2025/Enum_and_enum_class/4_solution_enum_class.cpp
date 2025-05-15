#include<iostream>
using namespace std;

int main()
{

    enum class Color2{red,green,blue};
    enum class Color3{red,green,blue,black};  //we can declare with same name in enum class
    Color2 c2=Color2::green;

     int green=100;
    switch(c2)
    {
        case Color2::red : cout<<"red"<<endl; break;

        case Color2::green : cout<<"green"<<endl; break;

        case Color2::blue : cout<<"blue"<<endl; break;
    }

    return 0;
}