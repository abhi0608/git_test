#include<iostream>

using namespace std;

class Queue
{
    private:
        int capacity;
        int front;
        int rear;
        int *ptr;
    public:
        Queue(int);
        int getFront();
        int getRear();
        bool isFull();
        bool isEmpty();
};

Queue::Queue(int cap)
{
    if(cap<0)
        cap=-cap;
    if(cap==0)
        cap=10;
    capacity=cap;
    front=-1;
    rear=-1;
    
    ptr=new int[cap];
}

void Queue::insert(int data)
{
    if(front==0 && capacity-1==rear || front==rear+1)
    {
        cout<<"overflow";
    }
    else if(rear==-1)
    {
        front=rear=-1;
        ptr[rear]=data;
    }
    else if(capacity-1==rear)
    {
        rear=0;
        ptr[rear]=data;
    }
    else
    {
        rear++;
        ptr[rear]=data;
    }
}

int Queue::getFront()
{
    if(isEmpty())
        throw 1;
    return ptr[front];
}
int Queue::getRear()
{
    if(isEmpty())
        throw 1;
    return ptr[rear];
}
bool Queue::isFull()
{
    if(front==0 && rear+1==capacity || rear+1==front)
        return true;
    return false;
}
int main()
{


}