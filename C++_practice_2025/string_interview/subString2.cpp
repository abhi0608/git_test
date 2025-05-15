#include<iostream>
#include<string>
using namespace std;

class Solution {
  public:
    string substring(string &s, int L, int R) {
        
        int len=R-L+1;
        string str(len,' ');

        for(int i=0,j=L;i<len,j<=R;i++,j++)
        {
            str[i]=str[j];
        }

        return str;
    }
};

int main()
{
    Solution so;
    string s("abhinav jain");
    cout<<so.substring(s,2,6);
    return 0;
}