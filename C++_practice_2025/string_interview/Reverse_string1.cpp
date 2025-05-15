
#include<iostream>

using namespace std;
void swap(char & c1,char & c2)
{
    char temp=c1;
    c1=c2;
    c2=temp;
}
string reverseWord(string str){
    
  //Your code here
 
    int n=str.length();
   
    for(int i=0;i<(n/2);i++)
    {
        swap(str[i],str[n-i-1]);
    }
    return str;
}

int main()
{
    string str="Abhinav";

    cout<<reverseWord(str);
    return 0;
}