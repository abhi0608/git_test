#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string,int> &a,pair<string,int> &b)
{
    return a.second<b.second;
}

void sort_with_second_val(map<string,int> &M)
{
    vector<pair<string,int>> v;

    for(auto &it:M)
    {
        v.push_back(it);
    }
    sort(v.begin(),v.end(),cmp);

    for(auto& it:v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

}

int main()
{
    map<string,int> M;
    M={{"GFG",3},{"To",2},{"Welcome",1}};
    sort_with_second_val(M);
    return 0;
}