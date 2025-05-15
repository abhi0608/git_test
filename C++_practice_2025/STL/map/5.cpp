#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;
    m.insert({5,"gfg"});
    m.insert({2,"ide"});
    m.insert({1,"practice"});

    if(m.count(2==0))
        cout<<"Not found";
    else    
        cout<<"Found";
    
    return 0;
}
