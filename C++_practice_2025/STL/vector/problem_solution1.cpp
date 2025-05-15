#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int printSmallerWithIndex(int arr[],int n)
{
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
        v.push_back({arr[i],i});

    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;
}
int main()
{

    int arr[]={10,3,5};
    
    printSmallerWithIndex(arr,3);

    return 0;
}