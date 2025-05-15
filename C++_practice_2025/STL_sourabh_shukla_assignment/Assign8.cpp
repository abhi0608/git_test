#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void p1()
{
    int n,num;
    deque <int> d1;
    deque<int> ::iterator it;
    cout<<"How many integer values you want to enter: ";
    cin>>n;
    cout<<"Enter numbers seprated by spaces: ";
    for(int i=1;i<=n;i++)
    {
        cin>>num;
        d1.push_back(num);
    }
    for(it=d1.begin();it!=d1.end();it++)
    {
        cout<<*it<<" ";
    }

}
void p2()
{
    deque<int> d1={20,40,11,56,72,89,25,41,52};
    cout<<"Greatest element:"<<*max_element(d1.begin(),d1.end());
}
void p3(deque<int> d1)
{
    int count=0,i=0,j=0;
    sort(d1.begin(),d1.end());

    while(j<d1.size())
    {
        if(d1[i]==d1[j])
        {
            count++;
            j++;
        }
        else
        {
            cout<<d1[i]<<"-"<<count<<endl;
            i=j;
            count=0;
        }
    }
}

void p4(deque<int> d1)
{
    int i=0,k,length,maxlength=0,index;
    while(i<d1.size())
    {
        k=i;
        while(i<d1.size()-1 && d1[i]<=d1[i+1])
            i++;
        length=i+1-k;
        if(length>maxlength)
        {
            maxlength=length;
            index=k;
        }
        i++;
    }
    deque<int>::iterator it;
    for(it=d1.begin()+index;it!=d1.begin()+index+maxlength;it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int p5(deque <int> d1)
{
    int c,i=0,maxfreqvalue,maxFreq=0;
    while(i<d1.size())
    {
        c=count(d1.begin(),d1.end(),d1[i]);
        if(maxFreq<c)
        {
            maxFreq=c;
            maxfreqvalue=d1[i];
        }
        i++;
    }
    return maxfreqvalue;
}
int main()
{
    //p1();
    //p2();
    //deque<int> d={2,8,10,10,10,20,20,30,30,50,50,50,50};
    //p3(d);
    //deque<int> d1={45,34,60,71,82,11,14,18,5,22,33,6};
    //p4(d1);
    deque<int> d2={45,34,60,22,82,11,14,22,5,22,33,6};
    cout<<p5(d2)<<endl;
    return 0;
}