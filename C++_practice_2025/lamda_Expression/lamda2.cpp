#include<iostream>
#include<algorithm>
using namespace std;
/*
[capture list]( parameter)->.{ function body}
*/

int main()
{
    int arr[]={-20,10,-30,5};
    int n;
    n=(sizeof(arr)/sizeof(arr[0]));

    auto mycmp=[](int a,int b){return abs(a)<abs(b);}

    sort(arr,arr+n,mycmp);

    for(auto x:arr)
        cout<<x<<" ";
    
    cout<<endl;
    return 0;
}