#include<iostream>

using namespace std;

int main()
{
    pair<int,int> p1(10,20);
    pair<int,string> p2(10,"GeekforGeeks");

    pair<int,int> p3;
    pair<int,int> p4;
    p4={1,2};

    pair<int,int> p5;
    p5=make_pair(10,20);

    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    cout<<p4.first<<" "<<p4.second<<endl;
    cout<<p5.first<<" "<<p5.second<<endl;
    return 0;
}