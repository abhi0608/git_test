#include<iostream>
using namespace std;

// Function to take input of string using getline
void getLine() {

    string a;

    // Your code here
    // Take input of 'a' using getline till '@''
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='@')
        {
            break;
        }
        else
        {
            cout<<a[i];
        }
    }
}
int main()
{
    getLine();
    return 0;
}

/*
input:-  abhinavjain844@gmail.com

output:- abhinavjain844

*/