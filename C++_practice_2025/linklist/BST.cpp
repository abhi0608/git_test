#include<iostream>
#include<stdio.h>

using namespace std;
struct node{
    node *left;
    int item;
    node *right;   
};

class BST
{
    private:
        node *root;
    protected:
        void preorderrec(node*);
        void inorderrec(node*);
        void postorderrec(node*);
        node* deleteNode(node*,int);
    public:
        BST();
        bool isEmpty();
        void insert(int);
        void preorder();
        void inorder();
        void postorder();
        void del(int);
        node* search(int);
        int maxdepth(node*);
        ~BST();
};

BST::BST()
{
    root=NULL;
}

bool BST::isEmpty()
{
    return root==NULL;
}
void BST::insert(int data)
{
    node *ptr;
    node *n=new node;
    n->left=NULL;
    n->item=data;
    n->right=NULL;

    if(root==NULL)
    {
        root=n;
    }
    else
    {
        ptr=root;
        while(n->item!=ptr->item)
        {
            if(n->item<ptr->item)
            {
                if(ptr->left!=NULL)
                    ptr=ptr->left;
                else
                    {
                        ptr->left=n;
                        break;
                    }
            }
            else
            {
                if(ptr->right!=NULL)
                    ptr=ptr->right;
                else
                {
                    ptr->right=n;
                    break;
                }
            }  
        }
        if(ptr->item==n->item)
            delete n;
    }
}
void BST::preorderrec(node *ptr)
{
    if(ptr)
    {
        cout<<" "<<ptr->item;
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void BST::inorderrec(node *ptr)
{
    if(ptr)
    {
        preorder(ptr->left);
        cout<<" "<<ptr->item;
        preorder(ptr->right);
    }
}
void BST::preorderrec(node *ptr)
{
    if(ptr)
    {
        preorder(ptr->left);
        preorder(ptr->right);
        cout<<" "<<ptr->item;
    }
}
void BST::preorder()
{
    preorderrec(root);
}
void BST::inorder()
{
    inorderrec(root);
}
void BST::postorder()
{
    postorderrec(root);
}
int BST::maxdepth(node *ptr)
{
    if(ptr==NULL)
        return 0;
    else
    {
        int ldepth=maxdepth(ptr->left);
        int rdepth=maxdepth(ptr->right);

        if(ldepth>rdepth)
        {
            ldepth=ldepth+1;
        }
        else
        {
            rdepth=rdepth+1;
        }
        int max=ldepth<rdepth?rdepth:ldepth;
    }
    return 1+max;

}
node* BST::search(int data)
{
    node *ptr=root;
    while(ptr)
    {
        if(ptr->item==data)
            return ptr;
        if(data<ptr->item)
        {
            ptr=ptr->left;
        }
        else    
        {
            ptr=ptr->right;
        }
    }
    return ptr;
}

node *BST::deleteNode(node *ptr,int data)
{
    if(ptr==NULL)
        return NULL;
    if(data<ptr->item)
    {
        ptr->left=deleteNode(ptr->left,data);
    }
    else if(data>ptr->item)
    {
        ptr->right=deleteNode(ptr->right,data);
    }
    else        //if data found
    {
        //No child
        if(ptr->left==NULL && ptr->right==NULL)
        {
            delete ptr;
            return NULL;
        }
        //single child
        if(ptr->left==NULL || ptr->right==NULL)
        {
            node *child=ptr->left?ptr->left:ptr->right;
            delete ptr;
            return child;
        }

        node *pred,*parpred;

        parpred=ptr;
        pred=ptr->left;

        while(pred->right!=NULL)
        {
            parpred=pred;
            pred=pred->right;
        }
        ptr->item=pred->item;
        if(parpred->right==pred)
        {
            parpred->right=deleteNode(pred,pred->item);
        }
        else if(parpred->left==pred)
        {
            parpred->left=deleteNode(pred,pred->item);
        }
    }

    return ptr;
}

int main()
{
    BST *b=new BST();
    b->insert(10);
    b->insert(10);
    b->insert(10);
   // b->inorder();
    return 0;
}