#include<iostream>
using namespace std;

int main()
{
    int m=3,n=4,c=0;

    int **arr=(int**)malloc(m*sizeof(int));

        for(int i=0;i<m;i++)
        {
            *(arr+i)=(int*)malloc(n*sizeof(int));
            or// arr[i]=(int*)malloc(n*sizeof(int));
        }

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            arr[i][j]=++c;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}