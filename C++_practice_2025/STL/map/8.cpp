#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string,greater<int>> m;
    m.insert({5,"gfg"});
    m.insert({2,"ide"});
    m.insert({1,"practice"});

    cout<<m.size()<<" ";
    m.erase(m.find(2),m.end());
    cout<<m.size()<<" ";
    
    return 0;
}
