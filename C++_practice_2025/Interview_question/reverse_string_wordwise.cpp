#include<iostream>

using namespace std;

void reverse(string &str,int i,int j)
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
    string str="I link this code";

    string rev=reverseString(str);

    cout << rev;
}