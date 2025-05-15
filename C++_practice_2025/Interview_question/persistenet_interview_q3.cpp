#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>
int main()
{
    int n=5;
    int p=3;
    int sum=0;
    int multiply=1;
    for(int i=1;i<=n;i++)
    {
        multiply=1;
        for(int j=1;j<=p;j++)
        {
            multiply*=i;
        }
        sum+=multiply;
    }
    printf("%d",sum);
    return 0;
}