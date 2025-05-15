void Reverse_Queue_K_Position(int k, queue<int> &q)
{
    queue <int>temp;
    stack <int> s1;
    while(!q.empty())   {
        s1.push(q.front());

        if(q.front() == k)  {
            q.pop();
            break;
        }
        q.pop();
    }
    while(!q.empty() || !s1.empty())
        if(!s1.empty())  {
            temp.push(s1.top());
            s1.pop();
        }
        else    {
            temp.push(q.front());
            q.pop();
        }
    q = temp;
}

