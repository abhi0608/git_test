#include<iostream>

using namespace std;

int main()
{
    int arr[]={5,4,2,1,3};
    int max1,max2;
    max1=arr[0];
    max2=0;
    int n=(sizeof(arr)/sizeof(arr[0]));
    int i=0;
    for(i=1;i<n;i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
        else if(max2<=arr[i] && max1!=arr[i])
        {
            max2=arr[i];
        }
    }
    cout<<max2;

    return 0;
}