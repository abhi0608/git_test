#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l={10,15,15,20,10};
    l.unique();//10,15,20,10
    l.sort();//{10,10,15,20};
    l.reverse();

    for(auto x:l)
        cout<<x<<" ";

    return 0;
}