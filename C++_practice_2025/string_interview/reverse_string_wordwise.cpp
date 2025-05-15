#include<iostream>
#include<string.h>
using namespace std;

void swap(char *a,char *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(string &str,int r,int l)
{
    while(r<l)
    {
        swap(str[r],str[l]);
        r++;
        l--;
    }
}

string reverseString(string str)
{
    str.insert(str.end(),' ');

    int n=str.length();

    int j=0;

    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            reverse(str,j,i-1);
            j=i+1;
        }
    }
    str.pop_back();
    reverse(str,0,str.length()-1);
    return str;
}

int main()
{
    string str="I like this";

    string rev=reverseString(str);

    cout<<rev;

    return 0;
}