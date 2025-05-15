#include<iostream>
#include<list>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void q1()
{
    list<string> l1={"Bhopal","Indore","Pune","Jaipur"};
    list<string>::reverse_iterator it;

    for(it=l1.rbegin();it!=l1.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void q2()
{
    vector<int> v1={30,50,20,10,60};
    list<int> l1;
    l1.insert(l1.begin(),v1.begin(),v1.end());
    for(auto x:l1)
        cout<<x<<" ";
}
void q3()
{
    list<int> l1={40,70,60,20,10,30};
    cout<<"Greatest element="<<*max_element(l1.begin(),l1.end());
    cout<<endl;
}
void q4()
{
    list<int> l1={90,30,80,100,20,10,50,60,20,40};

    vector<int> v1;

    for(auto x:l1)
        v1.push_back(x);

    sort(v1.begin(),v1.end());
    l1.clear();
    l1.insert(l1.begin(),v1.begin(),v1.end());

    for(auto x:l1)
        cout<<x<<" ";

        cout<<endl;
}
void q5()
{
    vector<int> v1={30,51,23,17,6,42};
    list<int> l1;
    sort(v1.begin(),v1.end(),[](int a,int b) {return a>b;});
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:v1)
    {
        if(x%2==0)
            l1.push_front(x);
        else
            l1.push_back(x);
    }

    for(auto x:l1)
    {
        cout<<x<<endl;
    }

}
int main()
{
//    q1();
  //  q2();
   // q3();
   //q4();
   q5();
    return 0;
}