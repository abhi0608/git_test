#include<iostream>
using namespace std;

int myAtoi(char *str)
{
    int res=0;
    int sign=1;
    int i=0;
    if(str[0]=='-')
    {
        sign=-1;
        i++;
    }
    for(;str[i]!='\0';++i)
    {
        res=res*10 + (str[i]-'0');
    }

    return sign*res;
}

int main()
{
    char str1[]="-1234";

    int val=myAtoi(str1);
    printf("%d ",val);

    return 0;   
}