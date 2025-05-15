#include<iostream>

using namespace std;


int main()
{
    int r=3,c=4,count=0;
    int *arr[r];

    for(int i=0;i<r;i++)
    {
        arr[i]=(int*)malloc(c*sizeof(int));
    }

     for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            arr[i][j]=++count;
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}