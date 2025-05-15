#include<iostream>

using namespace std;

template <class x>

x big(x a,x b)
{
    if(b<a)
        return a;
    else
        return b;
}
template <class x>
x small(x a,x b)
{
    if(b>a)
        return a;
    else
        return b;
}
template< typename x>
void printArray(x arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
template< typename x>
void sortArray(x arr[],int size)
{
    int r,t;
    for(r=1;r<size;r++)
    {
        for(int i=0;i<size-1-r;i++)
        {
            if(arr[i]>arr[i+1])
            {
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
    }
}
template <class x>
void maxValue(x arr[],int size)
{
    x max;
    max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
}
int main()
{
    cout<<big(1,2)<<endl;
    cout<<big('a','b')<<endl;
    cout<<small(1,2)<<endl;
    cout<<small('a','b')<<endl;
    return 0;
}