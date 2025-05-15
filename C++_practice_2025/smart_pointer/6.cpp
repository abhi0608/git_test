#include<iostream>
using namespace std;

template <class T>
class SP{
    T *ptr;
public:
    SP(T *p=NULL)
    {
        ptr=p;
    }
    ~SP()
    {
        delete ptr;
    }
    T& operator*(){return *ptr;}
    T* operator->(){return ptr;}
};
int main()
{
    int *ptr1=new int(10);
    {
        int *ptr2=ptr1;
        SP<int> sp(ptr2);          //problem:- ptr1 and ptr2 will point on same location(10) when ptr2 goes out of scope 10 will be deleted
    }
    cout<<*ptr1;
    return 0;
}