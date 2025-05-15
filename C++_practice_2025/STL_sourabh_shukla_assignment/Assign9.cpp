#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string str)  //string str="Abhinav"
{
    int len=str.size();
    stack<char,vector<char>> s1;         
    for(int x=0;x<len/2;x++)
    {
            s1.push(str.back());          //nav
            str.pop_back();
    }
    if(len%2)  //odd length string
        str.pop_back();
    while(!str.empty())
    {
        if(str.back()!=s1.top())
            return false;
        str.pop_back();
        s1.pop();
    }
    return true;

}
/*
void reverse_stack(stack <string> &str)
{
    stack<str> temp;
    while(!str.empty())
    {
        temp.push(str.top());
        str.pop();
    }
    str=temp;
    cout<<str<<endl;
}*/
int getCode(char ch)
{
    switch(ch)
    {
        case '[':
            return 1;
        case '{':
            return 2;
        case '(':
            return 3;
        case ']':
            return -1;
        case '}':
            return -2;
        case ')':
            return -3;
        default:
            return 0;
    }
}
bool balanced_brackets(string str)
{
    char x;
    if(str.size()%2)
    {
            return false; 
    }
    stack<char,vector<char>> s1;
    for(char ch:str)
    {
        if(ch=='[' || ch=='(' || ch=='{')
            s1.push(ch);
        if(ch==']' || ch==')' || ch=='}')
        {
            x=s1.top();
            if(getCode(ch)!=-getCode(x))
                return false;
            s1.pop();
        }
    }
    return true;
}
void delete_middle(stack<string> &str)
{
    int len=str.size();
    stack<string> temp;
    if(len%2)
    {
        for(int x=len-1;x>=0;x--)
        {
            if(len/2==x)
            {
                str.pop();
                continue;
            }
            temp.push(str.top());
            str.pop();
        }
        while(!temp.empty())
        {
            str.push(temp.top());
            temp.pop();
        }
    }
}
struct mov{
    int n;
    char beg;
    char end;
    char aux;
    bool goingUp;
};

void iterativeTOH(int n,char beg,char end,char aux)
{
    stack<mov>moves;
    moves.push({n,beg,end,aux,true});
    mov currentMove;
    while(!moves.empty())
    {
        currentMove=moves.top();
        moves.pop();
            if(currentMove.n==1)
                cout<<"Move disk from " <<currentMove.beg<<" to "<<currentMove.end<<endl;
            else    
            {
                if(currentMove.goingUp)
                {
                    moves.push({currentMove.n-1,currentMove.aux,currentMove.end,currentMove.beg,false});
                    moves.push({1,currentMove.beg,currentMove.end,currentMove.aux,true});
                    moves.push({currentMove.n-1,currentMove.beg,currentMove.aux,currentMove.end,false});

                }
                else
                {
                    moves.push({currentMove.n-1,currentMove.aux,currentMove.end,currentMove.beg,true});
                    moves.push({1,currentMove.beg,currentMove.end,currentMove.aux,false});
                    moves.push({currentMove.n-1,currentMove.beg,currentMove.aux,currentMove.end,true});
                }
            }
    }

}

int main()
{
   // string str="Abhinav";
    //cout<<isPalindrome(str)<<endl;

    //string str1="[{()}]";
    //cout<<balanced_brackets(str1)<<endl;

    iterativeTOH(3,'A','B','C');
    cout<<endl;

    return 0;
}