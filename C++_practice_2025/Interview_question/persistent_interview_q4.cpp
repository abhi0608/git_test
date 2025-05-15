#include <bits/stdc++.h>
#include<string.h>
using namespace std;


int main()
{
    map<string,int> M;
    
    
    M={{"metalllic",3},{"abhimetalic",2},{"Welcome",1},{"newmetal",4}};
    
    for(auto it=M.begin();it!=M.end();it++)
    {
        if(it->first.find("metal")!=std::string::npos)
        {
            
            cout<<std::string::npos <<" "<<it->second<<endl;
        }
    
    }
    return 0;
}