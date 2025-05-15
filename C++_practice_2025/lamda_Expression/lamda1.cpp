#include<iostream>
#include<algorithm>
using namespace std;
/*
[capture list]( parameter)->.{ function body}
*/

int main()
{
    int arr[]={-20,10,-30,5};
    int n=(sizeof(arr)/sizeof(arr[0]));

    sort(arr,arr+n,[](int a,int b){return abs(a)<abs(b);});

    for(auto x:arr)
        cout<<x<<" ";
    cout<<endl;
   
    return 0;
}