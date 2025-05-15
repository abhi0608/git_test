#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;
    m.insert({5,"gfg"});
    m.insert({2,"ide"});
    m.insert({1,"practice"});

    auto it=m.lower_bound(7);  //try with 7,5,1 value
    if(it!=m.end())
        cout<<(*it).first;
    else    
        cout<<"No smaller value";

    return 0;
}
