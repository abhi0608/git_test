#include<iostream>
using namespace std;

enum class Color1{red,green,blue};   
int fun(Color1 c)   
{
    switch(c)
    {

        case Color1::red:cout<<"red"<<endl; break;
        case Color1::green:cout<<"green"<<endl; break;
        case Color1::blue:cout<<"blue"<<endl; break;
    }
}
int main()
{
  /*
    fun(1);
   
   fun(0);
   fun(2);
   */
   fun(Color1::red);
   fun(Color1::green);
   fun(Color1::blue);
   
}
