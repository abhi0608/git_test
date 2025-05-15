#include<iostream>

using namespace std;
template<typename T,int limit>

T arrMax(T arr[],int n)
{
    if(n>limit)
    {
        return 0;
    }
    
    T res=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>res)
            res=arr[i];
    }
    return res;
}
int main()
{
    int arr[]={1,2,13,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<arrMax<int,100>(arr,n)<<endl;

    float arr1[]={1,2.3,13.6,4.3,5.1,6};
    int n1=sizeof(arr)/sizeof(arr[0]);
    cout<<arrMax<float,50>(arr1,n1)<<endl;
}