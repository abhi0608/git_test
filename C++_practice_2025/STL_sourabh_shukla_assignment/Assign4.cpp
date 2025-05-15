#include<iostream>
#include<cstring>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void q1()
{
    vector<int> v1={20,50,10,30,40,60};
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
void q2()
{
    vector<int> v1={20,50,10,30,40,60};
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
}
void q3()
{
    vector<string> v1={"Bhopal","Ajmer","Jaiput","Kanpur","Patna"};
    sort(v1.begin(),v1.end(),[](auto a,auto b){return b>a;});
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
void q4()
{
    vector<int> v1={20,50,10,30,40,60};
    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
}
vector<int> q5()
{
    vector<int> v1={20,50,10,30,50,40,60};
    vector<int> v2;
    vector<int>::iterator it;
    for(it=v1.begin()+1;it!=v1.end()-1;it++)
    {
        if(*it<*(it-1) && *it<*(it+1))
            v2.push_back(*it);
    }   
    return v2;
}
int main()
{
    q1();
    q2();
    q3();
    q4();
    vector v2=q5();
    for(int &x:v2)
    {
        cout<<endl<<x<<endl;
    }
    cout<<endl;
    return 0;
}