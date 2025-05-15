#include<iostream>
#include<algorithm>

using namespace std;

void sortChar(int a[],char b[],int n)
{
    pair<int,char> pa[n];

    for(int i=0;i<n;i++)
        pa[i]={a[i],b[i]};

    sort(pa,pa+n);

    for(int i=0;i<n;i++)
    {
        cout<<pa[i].second<<" ";
    }
}
int main()
{
    int a[]={10,15,5};
    char b[]={'x','y','z'};

    sortChar(a,b,3);

    return 0;
}