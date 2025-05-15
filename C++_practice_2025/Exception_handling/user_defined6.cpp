#include<iostream>

using namespace std;
class ArraySizeZero{};
class ArraySizeNegative{};

int average(int arr[],int n)
{
    if(n==0)
        throw ArraySizeZero();
    if(n<0)
        throw ArraySizeNegative();
    
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum/n;
}


int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    try{
        int res=average(arr,n);
        cout<<res;
    }
    catch(ArraySizeZero &e1)
    {
        cout<<"Array size is zero";
    }
    catch(ArraySizeNegative &e2)
    {
        cout<<"Array size is Negative";
    }

    return 0;
}