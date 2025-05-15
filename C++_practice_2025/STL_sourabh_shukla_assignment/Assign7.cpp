#include<iostream>
#include<vector>
#include<forward_list>
#include<bits/stdc++.h>

using namespace std;
void p1()
{
    forward_list <int> fl1;
    fl1.assign({10,10,10,10,5,5,5});
    for(auto x:fl1)
        cout<<x<<" ";
    cout<<endl;
}

void p2()
{
    forward_list<string> fl1={"bhopal","pune","jaipur","patna","delhi","kanpur"};
    fl1.reverse();
    for(auto x:fl1)
        cout<<x<<" ";
    cout<<endl;
}
void p3()
{
    forward_list<int> fl1={10,55,43,-32,57,18,23,0,5};
    int num,count=0;
    cin>>num;
    auto f=[&](int x)->void {if(x>num) count++;};

    for(auto x:fl1)
    {
        f(x);
    }
    cout<<"count="<<count<<endl;
}

void p4()
{
    forward_list<int> fl1={10,55,43,-32,57,18,23,0,5};
    int num;
    cin>>num;
    
    fl1.remove(*upper_bound(fl1.begin(),fl1.end(),num));
    for(auto x:fl1)
        cout<<x<<" ";
    cout<<endl;
}
struct Term{
    int coeff;
    int exp;
    Term(int c,int e):coeff(c),exp(e){}
};
void p5()
{
    forward_list <Term> fl1;
    //5(x3)-4(x2)+x+10
    fl1.push_front(*new Term(10,0));
    fl1.push_front(*new Term(1,1));
    fl1.push_front(*new Term(-4,2));
    fl1.push_front(*new Term(5,3));
    for(auto x:fl1)
        cout<<"("<<x.coeff<<"x^"<<x.exp<<") ";
    cout<<endl;
}
int main()
{
    //p1();
    //p2();
    //p3();
    //p4();
    p5();

    
    return 0;
}