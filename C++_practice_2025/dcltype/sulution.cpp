//decltype
//It check the type of expression...

#include<iostream>

using namespace std;

template<typename T1,typename T2>
auto add(T1 a,T2 b) -> decltype(a+b)     //return type is auto
{
    return a+b;
}
int main()
{
    cout<<add(1,1.8)<<endl;   // o/p- 2.8 because second arg is 1.8
    cout<<add(1.8,1)<<endl;  //o/p- 2 because second arg is 1
    return 0;
}