#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l={10,20,30};
    auto it=l.begin();
    it++;
    it=l.insert(it,15);    //10,15,20,30
    l.insert(it,2,7);      //10,7,7,15,20,30
    cout<<l.front()<<" "<<l.back()<<endl;  // 10,30
    cout<<" "<<l.size();   


    return 0;
}