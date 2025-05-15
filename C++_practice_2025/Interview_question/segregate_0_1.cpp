#include <iostream>

using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void segregate(int arr[],int n)
{
    int i=0;
    int l=n-1;
    while(i<l)
    {
        if(arr[i]==1)
        {
            swap(&arr[i],&arr[l]);
            l--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int n=6;
    int arr[]={1,0,1,0,1,0};
    segregate(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }   
    return 0;
}