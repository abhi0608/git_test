#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template <class X>
struct ControlBlock
{
    int capacity;
    X *arr_ptr;
};

class ArrayList
{
    private:    
        ControlBlock *s;
    public:
    ArrayList(int capacity)
    {
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new X[s->capacity];
    }

    void addElement(int index,X data)
    {
        if(index>=0 && index<=s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"\n array index is not valid";
    }
    void viewElement(int index,X data)
    {
         if(index>=0 && index<=s->capacity-1)
            data=s->arr_ptr[index];
        else
            cout<<"\n array index is not valid";
    }

    void viewList()
    {
        int i;
        for(i=0;i<s->capacity;i++)
            cout<<" "<<s->arr_ptr[i];
    }

};
