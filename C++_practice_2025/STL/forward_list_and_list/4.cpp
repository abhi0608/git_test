#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> l={10,20,30};
    l.reverse();
    for(int x:l)
        cout<<x<<" ";
    cout<<endl;

    forward_list<int> l1={10,20,30};
    forward_list<int> l2={5,15};
    l1.merge(l2);
    for(int x:l1)
        cout<<x<<" ";
    cout<<endl;

    forward_list<int> l3={100,20,3};
    l3.sort();
    for(int x:l3)
        cout<<x<<" ";
    return 0;
}