#include<iostream>
using namespace std;

struct node{
    int item;
    node *next;
};

class Stack
{
    private:
        node *top;
    protected:
        void insertAtLast(int data)
        {
            node *t,*n;
            n=new node;
            n->item=data;
            n->next=NULL;
            if(top==NULL)
                top=n;
            else
            {
                t=top;
                while(t->next!=NULL)
                    t=t->next;
                t->next=n;
            }
        }
    public:
        Stack();
        void push(int);
        int peek();
        int pop();
        bool isEmpty();
        ~Stack();
        Stack& operator=(Stack&);
    
};

Stack::Stack()
{
    top=NULL;
}

void Stack::push(int data)
{

    node *n=new node;
    n->item=data;
    n->next=top;
    top=n;
}

int Stack::peek()
{
    if(top==NULL)
        throw 1;
    return top->item;
}

int Stack::pop()
{
    int data;
    node *r;
    if(top==NULL)
        throw 1;
    r=top;
    top=top->next;
    data=r->item;
    delete r;
    return data;
}
Stack::~Stack()
{
    while(top)
        pop();
}
bool Stack::isEmpty()
{
        return top==NULL;
}

Stack& Stack::operator=(Stack &s)
{
    if(this!=s)
    {
        if(top!=NULL)
        {
            while(top)
                pop();
        }
    }
    node *t;
    node *n;
    t=s.top;
    while(t)
    {
        insertAtLast(t->item);
        t=t->next;
    }
    return *this;
}

void reverseStack(Stack &s)
{
    Stack temp;
    while(!s.isEmpty())
        temp.push(s.pop());

    s=temp;    
}

int main()
{

    return 0;
}