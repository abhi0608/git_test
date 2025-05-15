#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    
    cout<<endl;
    for(int x:v)
        cout<<x<<" ";

    cout<<endl;
    for(int &x:v)
    {
        x=6;
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}