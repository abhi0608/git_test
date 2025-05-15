#include<iostream>
#include<forward_list>

using namespace std;
int main()
{
    forward_list<int> l;
    l.assign({10,20,30,10});
    l.remove(10);
    for(auto it=l.begin();it!=l.end();it++) //auto means forward_list<int>::iterator it;
        cout<<(*it)<<" ";

    cout<<endl;
    forward_list<int> l2;
    l2.assign(l.begin(),l.end());
    for(auto it=l2.begin();it!=l2.end();it++) //auto means forward_list<int>::iterator it;
        cout<<(*it)<<" ";
    return 0;
}