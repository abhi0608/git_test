#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v{10,20,30};

    for_each(v.begin(),v.end(),[](int &x){x=x*2;});

    for_each(v.begin(),v.end(),[](int x){cout<<x<<" ";});
    return 0;
}