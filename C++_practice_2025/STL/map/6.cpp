#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;
    m.insert({5,"gfg"});
    m.insert({2,"ide"});
    m.insert({1,"practice"});

    auto it=m.upper_bound(4);  //try with 7,5,1 value
    if(it!=m.end())
        cout<<(*it).first;
    else    
        cout<<"No greater value";

    return 0;
}
