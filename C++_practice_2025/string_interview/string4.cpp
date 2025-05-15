
#include<iostream>
#include<string>
using namespace std;

string encode(string src)
{     
  int len=src.length();
  string s="";
  int count=0;
  for(int i=0;i<len;i++)
  {
      count=1;
      while( i<len-1 && src[i]==src[i+1] )
      {
          count++;
          i++;
      }
      
      s.push_back(src[i]);
      s.push_back(count+'0'); //in the form of string
  }
  return s;
}   

int main()
{
    string str("aaabbbcccl");
    cout<<encode(str);
    return 0;
}