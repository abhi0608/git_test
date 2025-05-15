#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    map<int,int> m;
    m.insert({10,200});
    cout<<m[20]<<" ";  //it will insert 
    cout<<m.at(20)=300; //
    cout<<m.size()<<" ";

     for(auto &x:m)
    {
        cout<<x.first<<" ";
        cout<<x.second<<" ";
        cout<<endl;
    }

    return 0;
}