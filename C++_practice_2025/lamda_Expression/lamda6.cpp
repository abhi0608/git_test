#include<vector>
#include<iostream>
#include<algorithm>
/*
[]: Nothing
[=]:Everything by value
[&]:Everything by reference
[=,&x]:Everything by value and x by reference
[&,x]:Everything by reference and x by value

static and global variable are always captured.
*/

using namespace std;

int main()
{
    int x=5,y=10;

    auto lamda_expr=[&](int a){
            x=x+a;
            y=y+a;
    };
    lamda_expr(20);

    cout<<x<<" "<<y<<"\n";
    return 0;
}