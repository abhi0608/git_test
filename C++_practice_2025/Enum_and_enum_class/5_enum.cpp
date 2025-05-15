#include<iostream>
using namespace std;

enum Color1{red,green,blue};   
int fun(int c)   //it dont take as interger in enum class
{
    switch(c)
    {

        case red:cout<<"red"<<endl; break;
        case green:cout<<"green"<<endl; break;
        case blue:cout<<"blue"<<endl; break;
    }
}
int main()
{
    fun(red);  //integer type
    fun(green);
    fun(1);
   
   fun(0);
   fun(2);
}
