#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;
    m.insert({5,"gfg"});
    m.insert({2,"ide"});
    m.insert({1,"practice"});

    for(auto it=m.find(2);it!=m.end();it++)
    {
        cout<<(*it).first<<" ";
        cout<<(*it).second<<"\n";
    }

    return 0;
}