#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//1. Define a function to count words in a given string.

int Count_Words(string str)
{
    if(str.empty())
        return 0;
    int word = 1;
    for(auto s : str)
        if(s==' ')
            word++;
    return word;
}

//—----------------------------------------------------------------
//2. Define a function trim a string.

void Trim_string(string &str)
{
    string::iterator it;
    while(str.back()== ' ')
        str.pop_back();
    while(str.front() == ' ')   {
        it = str.begin();
        str.erase(it);
    }
}
//—------------------------------------------------------------------
//3. Define a function to remove extra spaces from a given string.
void Remove_Extra_Space(string &str)
{
    string::iterator it;
    for(it = str.begin(); it != str.end(); it++)
        if(*it == ' ' && *(it+1) == ' ')   
        {
            str.erase(it);
            it = str.begin();
        }
}

//—------------------------------------------------------------------
//4. Define a function to split a given string into words.

vector<string> Split_string(string str)
{
    vector<string> temp;
    string s1;
    for(auto s : str)
        if(s != ' ')
            s1.push_back(s);
        else    {
            temp.push_back(s1);
            s1.clear();
        }
    temp.push_back(s1);
    return temp;
}

//—---------------------------------------------------------------
//5. Define a function to reverse a string word wise.
vector<string> Split_strin(string str)
{
    vector<string> temp;
    string s1;
    for(auto s : str)
        if(s != ' ')
            s1.push_back(s);
        else    {
            temp.push_back(s1);
            s1.clear();
        }
    temp.push_back(s1);
    return temp;
}

void Reverse_Word(string &str)
{
    vector<string> temp;
    temp = Split_strin(str);
    str.clear();
    vector<string>::reverse_iterator it;
    it = temp.rbegin();
    str = *it;
    for(it++; it != temp.rend(); it++)  {
        str+= " ";
        str+=*it;
        
    }
    cout<<str<<endl;

    for(auto x:temp)
    {
        cout<<x<<endl;
    }
}

int main()
{
    string str="abhinav Jain";
    Reverse_Word(str);

    return 0;
}