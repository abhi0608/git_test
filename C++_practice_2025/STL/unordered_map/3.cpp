#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"Course",15});

    auto it=m.find("ide");
    if(it!=m.end())
    {
        cout<<(it->second)<<endl;
    }

    for(auto x=m.begin();x!=m.end();x++)
        cout<<x->first<<" "<<x->second<<endl;
  
    return 0;
}
