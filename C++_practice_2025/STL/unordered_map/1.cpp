#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"Course",15});

    for(auto x:m)
        cout<<x.first<<" "<<x.second<<endl;
  
    return 0;
}
