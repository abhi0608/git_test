#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);     //10 
    l.push_back(20);     //10,20
    l.push_front(5);     //5 10 20
                           
    for(auto x:l)
        cout<<x<<" ";   //5,10,20
    return 0;
}