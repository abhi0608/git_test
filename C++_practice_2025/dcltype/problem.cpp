//decltype
//It check the type of expression...

#include<iostream>

using namespace std;

template<typename T1,typename T2>
T2 add(T1 a,T2 b)     //return type is T2
{
    return a+b;
}
int main()
{
    cout<<add(1,1.8)<<endl;   // o/p- 2.8 because second (T2)arg is 1.8 and return type T2
    cout<<add(1.8,1)<<endl;  //o/p- 2 because second (T2)arg is 1 asn returntype T2
    return 0;
}