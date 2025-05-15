#include<iostream>
#include<stdio.h>

using namespace std;

struct node
{
    int item;
    node *next;
};

class Queue
{
    private:
    node *front,*rear;
    public:
        Queue();
        void insert(int);
        int getFront();
        int getRear();
        void deleteFront();
        int count();
        ~Queue();
};
Queue::Queue()
{
    front=NULL;
    rear=NULL;
}

void Queue::insert(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(rear==NULL)
        front=rear=n;
    else
    {
        rear->next=n;
        rear=n;
    }
}
int Queue::getFront()
{
    if(front==NULL)
        throw 1;
    return front->item;
}
int Queue::getRear()
{
    if(rear==NULL)
        throw 1;
    return rear->item;
}
void Queue::deleteFront()
{
    node *temp;
    if(front)
    {
        if(front==rear)
        {
            delete front;
            front=rear=NULL;
        }
        else
        {
            temp=front;
            front=front->next;
            delete temp;
        }
    }
}

Queue::~Queue()
{
    while(front)
        deleteFront();
}
int Queue::count()
{
    node *temp;
    int c=0;
    if(front==NULL)
        return 0;
    temp=front;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
