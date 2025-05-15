
#include<iostream>
#include <cstring>
#include<string>
using namespace std;

char* encode(char *src)
{     
  int len=strlen(src);
  char s[8];
  int count=0;
  int k=0;
  for(int i=0,k=0;i<len;i++,k++)
  {
      count=1;
      while( i<len-1 && src[i]==src[i+1] )
      {
          count++;
          i++;
      }
      
     // s.push_back(src[i]);
      //s.push_back(count+'0'); //in the form of string
      s[k]=src[i];
      k++;
      s[k]=count+'0';
  }
  
  printf("%s",s);
  return s;
}   

void sort(char *str)
{
    int n=strlen(str);
    char t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    }
}
int main()
{
   // string str("aaabbbcccl");
   char str[100]="aewssaabbbcccll\0";

   sort(str);
   cout<<str<<endl;

   cout<<encode(str);
    return 0;
}