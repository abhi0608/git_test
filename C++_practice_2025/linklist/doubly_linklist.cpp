#include<iostream>
#include<stdio.h>

using namespace std;

struct node {
    node *prev;
    int item;
    node *next;
};

class DLL{
    private:
        node *start;
    public:
        DLL();
        void insertAtStart(int);
        void insertATLast(int);
        node *search(int data);
        void insertAfter(node*,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int data);

        void display();
        ~DLL();
};

DLL::DLL()
{
    start=NULL;
}

void DLL::insertAtStart(int data)
{
    node *n;
    n=new node;
    n->prev=NULL;
    n->item=data;   
    n->next=start;

    if(start)
        start->prev=n;

    start=n;
}

void DLL::insertATLast(int data)
{
    node *n,*t;
    n=new node;
    n->item=data;
    n->next=NULL;

    if(start==NULL)
    {
        n->prev=NULL;
        start=n;
    }
    else
    {
        t=start;
        while(t->next!=NULL)
            t=t->next;

        n->prev=t;
        t->next=n;
    }
}
node* DLL::search(int data)
{
    node *t;
    t=start;

    while(t)
    {
        if(t->item==data)
            return t;
        t=t->next;
    }

    return NULL;
}
void DLL::insertAfter(node *temp,int data)
{
    if(temp)
    {
        node *n=new node;
        n->item=data;
        n->next=temp->next;
        n->prev=temp;
        if(temp->next!=NULL)   // temp ke next ke badd ek or node h
            temp->next->prev=n;
    }
}
void DLL::deleteFirst()
{
    node *t;
    if(start)
    {
        if(start->next==NULL)
        {
            delete start;
            start=NULL;
        }
        else
        {   
            t=start;
            start->next->prev=NULL;
            start=start->next;
            
            delete t;
        }
    }
}
void DLL::deleteLast()
{
    node *t;
    
    if(start)
    {
        if(start->next==NULL)
        {
            delete start;
            start=NULL;
        }
       else
       {
        t=start;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->prev->next=NULL;
        delete t;
       }
       
    }
    
}
void DLL::deleteNode(int data)
{
   node *t;
   t=start;
   while(t)
   {
        if(t->item==data)
        {
            if(t->next!=NULL)
                t->next->prev=t->prev;     //if its in 
            if(t->prev!=NULL)             //if its in middle
                t->prev->next=t->next;   
            if(t->prev==NULL)           //if its start
                start=t->next;

            delete t;   //if its last ,middle,first
            break;
        }
        t=t->next;
   }
}
DLL::~DLL()
{
    while(start)
        deleteFirst();
}

void DLL::display()
{
    node *t;
    t=start;
    while(t)
    {
        cout<<t->item<<"->";
        t=t->next;
    }

    cout<<endl;
}

int main()
{

    DLL l;
    l.insertAtStart(10);
    l.insertAtStart(11);
    l.insertAtStart(12);
    l.insertATLast(13);
    l.insertATLast(20);
 //   l.deleteFirst();  
 //   l.deleteLast(); 
    l.display();
}