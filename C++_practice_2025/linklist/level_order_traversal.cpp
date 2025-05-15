


queue<node*> q;

q.push(root);                             

while(!q.empty())
{
    node *t=q.front();
    cout<<t->item<<" ";
    q.pop();
    if(t->left!=NULL)
    {
        q.push(t->left);
    }
    if(t->right!=NULL)
    {
        q.push(t->right);
    }

}