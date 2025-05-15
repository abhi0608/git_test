#include<iostream>

using namespace std;

node *merge(node *p,node *q,node *sorting)
{
    node *new_head;

    if(p==NULL) return q;
    if(q==NULL) return p;

    if(p->data<=q->data)
    {
        sorting=p;
        p=sorting->next;
    }
    else
    {
        sorting=q;
        q=sorting->next;
    }
    new_head=sorting;

    while(p && q)
    {
        if(p->data<=q->data)
        {
            sorting->next=p;
            sorting=p;
            p=sorting->next;
        }
        else
        {
            sorting->next=q;
            sorting=q;
            q=sorting->next;
        }
    }
    if(p==NULL) sorting->next=q;
    if(q==NULL) sorting->next=p;

    return new_head;
}


int main()
{

    return 0;
}



    