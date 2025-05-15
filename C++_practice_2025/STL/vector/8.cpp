#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{10,5,20,15};
    v.erase(v.begin());

    for(int x:v)
        cout<<x<<" ";  //5,20,15
    cout<<endl;

    v.erase(v.begin(),v.end()-1);
        
    for(int x:v)
        cout<<x<<" ";  //15
    return 0;
}