#include<iostream>
#include<forward_list>

using namespace std;
int main()
{
    forward_list<int> l1={15,20,30};

    auto it=l1.insert_after(l1.begin(),10);  //15,10,20,30
    it=l1.insert_after(it,{2,3,5}); //15,10,2,3,5,20,30

    it=l1.emplace_after(it,40);  //15,10,2,3,5,40,20,30
   
    it=l1.erase_after(it,l1.end()); //15,10,2,3,5,40
    
    return 0;
}