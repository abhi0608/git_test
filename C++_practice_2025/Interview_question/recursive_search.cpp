#include<iostream>
#include<stdio.h>
using namespace std;
int recursivesearch(int *arr,int l,int r,int x)
{
    if(r<l)
        return false;
    else if(arr[l]==x)
        return true;
    else if(arr[r]==x)
        return true;

        recursivesearch(arr, l+1, r-1, x);
}
int main()
{
    int arr[]={3,2,21,6,7,8};

    printf("%d",recursivesearch(arr,0,5,3));
    
    return 0;
}