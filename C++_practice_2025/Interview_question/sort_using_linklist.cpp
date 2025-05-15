#include<iostream>
#include<stdio.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;

void addNode(int data)
{
    struct node *newNode= new node; //struct node *newNode=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    newNode->data=data;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
        //tail=newNode;
    }
    else{
        //tail->next=newNode;
        //tail=newNode;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void sortlist()
{
    struct node *current=head,*index=NULL;
    int temp;
    if(head==NULL)
        return;
    else
    {
        
        while(current!=NULL)
        {
            index=current->next;
            while(index!=NULL)
            {
                if(current->data>index->data)
                {
                    temp=current->data;
                    current->data=index->data;
                    index->data=temp;
                }
                index=index->next;
            }
            current=current->next;
        }
    }
}
void display() {  
    //Node current will point to head  
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
int main()
{
    addNode(9);  
    addNode(7);  
    addNode(2);  
    addNode(5);  
    addNode(4);  
      
    //Displaying original list  
    printf("Original list: \n");  
    display();  
    sortlist();
    display();
    return 0;
}