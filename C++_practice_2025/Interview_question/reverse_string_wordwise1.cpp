#include<iostream>
#include <cstring>
using namespace std;

void reverse(char *str,int i,int j)
{
    char t;
    while(i<j)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;
    }
}
char* reverseString(char *str)
{
 
    int n=strlen(str);
    printf("%d %s",n,str);
    int j=0;
    for(int i=0;i<=n;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            reverse(str,j,i-1);
            
            j=i+1;
        }
    }
   
    reverse(str,0,strlen(str)-1);

    return str;
}
int main()
{
    char str[20]="I link this code";

    char *s;
    s=reverseString(str);

    printf("string->%s",s);
}